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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API CreateBusinessReportScheduleResult
  {
  public:
    CreateBusinessReportScheduleResult();
    CreateBusinessReportScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBusinessReportScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline const Aws::String& GetScheduleArn() const{ return m_scheduleArn; }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(const Aws::String& value) { m_scheduleArn = value; }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(Aws::String&& value) { m_scheduleArn = std::move(value); }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline void SetScheduleArn(const char* value) { m_scheduleArn.assign(value); }

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline CreateBusinessReportScheduleResult& WithScheduleArn(const Aws::String& value) { SetScheduleArn(value); return *this;}

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline CreateBusinessReportScheduleResult& WithScheduleArn(Aws::String&& value) { SetScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the business report schedule.</p>
     */
    inline CreateBusinessReportScheduleResult& WithScheduleArn(const char* value) { SetScheduleArn(value); return *this;}

  private:

    Aws::String m_scheduleArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
