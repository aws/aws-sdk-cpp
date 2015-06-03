/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSFunction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <functional>
#include <mutex>

namespace Aws
{
namespace Utils
{

/**
* Event container. A class can declare events as members and then let their subscribers
* register a function for notifications.
*/
template <typename SenderType__, typename... Args__>
class Event
{
public:
    typedef typename std::function<void(const SenderType__*, Args__ ...)> EventHandler;  

    Event& operator+=(const EventHandler& toSubscribe)
    {
        Subscribe(toSubscribe);
        return *this;
    }

    void operator()(const SenderType__* sender, Args__ ... args) const
    {
        Invoke(sender, std::forward<Args__>(args)...);
    }

    void Subscribe(const EventHandler& toSubscribe)
    {
        std::lock_guard<std::mutex> locker(m_callbackMutex);
        m_callbacks.push_back(AWS_BUILD_FUNCTION(toSubscribe));
    }

    void Clear()
    {
        std::lock_guard<std::mutex> locker(m_callbackMutex);
        m_callbacks.clear();
    }

    void Invoke(const SenderType__* sender, Args__ ... args) const
    {
        std::lock_guard<std::mutex> locker(m_callbackMutex);
        for (auto iter = m_callbacks.begin(); iter != m_callbacks.end(); ++iter)
        {
            (*iter)(sender, std::forward<Args__>(args)...);
        }
    }

private:
    Aws::Vector<EventHandler> m_callbacks;
    mutable std::mutex m_callbackMutex;
};

} // namespace Utils
} // namespace Aws
