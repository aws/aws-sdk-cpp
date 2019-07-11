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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class AWS_CLOUDWATCHEVENTS_API CreateEventBusResult
  {
  public:
    CreateEventBusResult();
    CreateEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline const Aws::String& GetEventBusArn() const{ return m_eventBusArn; }

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline void SetEventBusArn(const Aws::String& value) { m_eventBusArn = value; }

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline void SetEventBusArn(Aws::String&& value) { m_eventBusArn = std::move(value); }

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline void SetEventBusArn(const char* value) { m_eventBusArn.assign(value); }

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline CreateEventBusResult& WithEventBusArn(const Aws::String& value) { SetEventBusArn(value); return *this;}

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline CreateEventBusResult& WithEventBusArn(Aws::String&& value) { SetEventBusArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline CreateEventBusResult& WithEventBusArn(const char* value) { SetEventBusArn(value); return *this;}

  private:

    Aws::String m_eventBusArn;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
