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
  class AWS_CLOUDWATCHEVENTS_API TestEventPatternResult
  {
  public:
    TestEventPatternResult();
    TestEventPatternResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestEventPatternResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the event matches the event pattern.</p>
     */
    inline bool GetResult() const{ return m_result; }

    /**
     * <p>Indicates whether the event matches the event pattern.</p>
     */
    inline void SetResult(bool value) { m_result = value; }

    /**
     * <p>Indicates whether the event matches the event pattern.</p>
     */
    inline TestEventPatternResult& WithResult(bool value) { SetResult(value); return *this;}

  private:

    bool m_result;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
