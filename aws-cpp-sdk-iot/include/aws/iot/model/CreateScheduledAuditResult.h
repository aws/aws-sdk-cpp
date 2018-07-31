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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API CreateScheduledAuditResult
  {
  public:
    CreateScheduledAuditResult();
    CreateScheduledAuditResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateScheduledAuditResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditArn() const{ return m_scheduledAuditArn; }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline void SetScheduledAuditArn(const Aws::String& value) { m_scheduledAuditArn = value; }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline void SetScheduledAuditArn(Aws::String&& value) { m_scheduledAuditArn = std::move(value); }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline void SetScheduledAuditArn(const char* value) { m_scheduledAuditArn.assign(value); }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline CreateScheduledAuditResult& WithScheduledAuditArn(const Aws::String& value) { SetScheduledAuditArn(value); return *this;}

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline CreateScheduledAuditResult& WithScheduledAuditArn(Aws::String&& value) { SetScheduledAuditArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline CreateScheduledAuditResult& WithScheduledAuditArn(const char* value) { SetScheduledAuditArn(value); return *this;}

  private:

    Aws::String m_scheduledAuditArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
