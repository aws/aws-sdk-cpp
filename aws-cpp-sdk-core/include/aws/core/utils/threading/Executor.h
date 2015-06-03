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

#include <functional>
#include <aws/core/utils/memory/stl/AWSFunction.h>
namespace Aws
{
namespace Utils
{
namespace Threading
{
    /**
    * Interface for implementing an Executor, to implement a custom thread execution strategy, inherit from this class
    * and override SubmitToThread().
    */
    class AWS_CORE_API Executor
    {
    public:
        Executor() {}
        virtual ~Executor(){}

        template<class Fn, class ... Args>
        bool Submit(Fn&& fn, Args&& ... args)
        {
            return SubmitToThread(AWS_BUILD_TYPED_FUNCTION(std::bind(std::forward<Fn>(fn), std::forward<Args>(args)...), void()));
        }

    protected:
        /**
        * To implement your own executor implementation, then simply subclass Executor and implement this method. 
        */
        virtual bool SubmitToThread(std::function<void()>&&) = 0;
    };

    /**
    * Default Executor implementation. Simply spawns a thread and detaches it.
    */
    class AWS_CORE_API DefaultExecutor : public Executor
    {
    public:
        DefaultExecutor() {}
    protected:
        bool SubmitToThread(std::function<void()>&&);
    };

} // namespace Threading
} // namespace Utils
} // namespace Aws
