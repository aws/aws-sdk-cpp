/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Listener.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GlobalAccelerator
{
namespace Model
{
  class AWS_GLOBALACCELERATOR_API CreateListenerResult
  {
  public:
    CreateListenerResult();
    CreateListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The listener that you've created.</p>
     */
    inline const Listener& GetListener() const{ return m_listener; }

    /**
     * <p>The listener that you've created.</p>
     */
    inline void SetListener(const Listener& value) { m_listener = value; }

    /**
     * <p>The listener that you've created.</p>
     */
    inline void SetListener(Listener&& value) { m_listener = std::move(value); }

    /**
     * <p>The listener that you've created.</p>
     */
    inline CreateListenerResult& WithListener(const Listener& value) { SetListener(value); return *this;}

    /**
     * <p>The listener that you've created.</p>
     */
    inline CreateListenerResult& WithListener(Listener&& value) { SetListener(std::move(value)); return *this;}

  private:

    Listener m_listener;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
