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
#include <aws/iot/model/AuditFrequency.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DayOfWeek.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_IOT_API DescribeScheduledAuditResult
  {
  public:
    DescribeScheduledAuditResult();
    DescribeScheduledAuditResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeScheduledAuditResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>How often the scheduled audit takes place. One of "DAILY", "WEEKLY",
     * "BIWEEKLY" or "MONTHLY". The actual start time of each audit is determined by
     * the system.</p>
     */
    inline const AuditFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p>How often the scheduled audit takes place. One of "DAILY", "WEEKLY",
     * "BIWEEKLY" or "MONTHLY". The actual start time of each audit is determined by
     * the system.</p>
     */
    inline void SetFrequency(const AuditFrequency& value) { m_frequency = value; }

    /**
     * <p>How often the scheduled audit takes place. One of "DAILY", "WEEKLY",
     * "BIWEEKLY" or "MONTHLY". The actual start time of each audit is determined by
     * the system.</p>
     */
    inline void SetFrequency(AuditFrequency&& value) { m_frequency = std::move(value); }

    /**
     * <p>How often the scheduled audit takes place. One of "DAILY", "WEEKLY",
     * "BIWEEKLY" or "MONTHLY". The actual start time of each audit is determined by
     * the system.</p>
     */
    inline DescribeScheduledAuditResult& WithFrequency(const AuditFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p>How often the scheduled audit takes place. One of "DAILY", "WEEKLY",
     * "BIWEEKLY" or "MONTHLY". The actual start time of each audit is determined by
     * the system.</p>
     */
    inline DescribeScheduledAuditResult& WithFrequency(AuditFrequency&& value) { SetFrequency(std::move(value)); return *this;}


    /**
     * <p>The day of the month on which the scheduled audit takes place. Will be "1"
     * through "31" or "LAST". If days 29-31 are specified, and the month does not have
     * that many days, the audit takes place on the "LAST" day of the month.</p>
     */
    inline const Aws::String& GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The day of the month on which the scheduled audit takes place. Will be "1"
     * through "31" or "LAST". If days 29-31 are specified, and the month does not have
     * that many days, the audit takes place on the "LAST" day of the month.</p>
     */
    inline void SetDayOfMonth(const Aws::String& value) { m_dayOfMonth = value; }

    /**
     * <p>The day of the month on which the scheduled audit takes place. Will be "1"
     * through "31" or "LAST". If days 29-31 are specified, and the month does not have
     * that many days, the audit takes place on the "LAST" day of the month.</p>
     */
    inline void SetDayOfMonth(Aws::String&& value) { m_dayOfMonth = std::move(value); }

    /**
     * <p>The day of the month on which the scheduled audit takes place. Will be "1"
     * through "31" or "LAST". If days 29-31 are specified, and the month does not have
     * that many days, the audit takes place on the "LAST" day of the month.</p>
     */
    inline void SetDayOfMonth(const char* value) { m_dayOfMonth.assign(value); }

    /**
     * <p>The day of the month on which the scheduled audit takes place. Will be "1"
     * through "31" or "LAST". If days 29-31 are specified, and the month does not have
     * that many days, the audit takes place on the "LAST" day of the month.</p>
     */
    inline DescribeScheduledAuditResult& WithDayOfMonth(const Aws::String& value) { SetDayOfMonth(value); return *this;}

    /**
     * <p>The day of the month on which the scheduled audit takes place. Will be "1"
     * through "31" or "LAST". If days 29-31 are specified, and the month does not have
     * that many days, the audit takes place on the "LAST" day of the month.</p>
     */
    inline DescribeScheduledAuditResult& WithDayOfMonth(Aws::String&& value) { SetDayOfMonth(std::move(value)); return *this;}

    /**
     * <p>The day of the month on which the scheduled audit takes place. Will be "1"
     * through "31" or "LAST". If days 29-31 are specified, and the month does not have
     * that many days, the audit takes place on the "LAST" day of the month.</p>
     */
    inline DescribeScheduledAuditResult& WithDayOfMonth(const char* value) { SetDayOfMonth(value); return *this;}


    /**
     * <p>The day of the week on which the scheduled audit takes place. One of "SUN",
     * "MON", "TUE", "WED", "THU", "FRI" or "SAT".</p>
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The day of the week on which the scheduled audit takes place. One of "SUN",
     * "MON", "TUE", "WED", "THU", "FRI" or "SAT".</p>
     */
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeek = value; }

    /**
     * <p>The day of the week on which the scheduled audit takes place. One of "SUN",
     * "MON", "TUE", "WED", "THU", "FRI" or "SAT".</p>
     */
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeek = std::move(value); }

    /**
     * <p>The day of the week on which the scheduled audit takes place. One of "SUN",
     * "MON", "TUE", "WED", "THU", "FRI" or "SAT".</p>
     */
    inline DescribeScheduledAuditResult& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}

    /**
     * <p>The day of the week on which the scheduled audit takes place. One of "SUN",
     * "MON", "TUE", "WED", "THU", "FRI" or "SAT".</p>
     */
    inline DescribeScheduledAuditResult& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}


    /**
     * <p>Which checks are performed during the scheduled audit. (Note that checks must
     * be enabled for your account. (Use <code>DescribeAccountAuditConfiguration</code>
     * to see the list of all checks including those that are enabled or
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetCheckNames() const{ return m_targetCheckNames; }

    /**
     * <p>Which checks are performed during the scheduled audit. (Note that checks must
     * be enabled for your account. (Use <code>DescribeAccountAuditConfiguration</code>
     * to see the list of all checks including those that are enabled or
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline void SetTargetCheckNames(const Aws::Vector<Aws::String>& value) { m_targetCheckNames = value; }

    /**
     * <p>Which checks are performed during the scheduled audit. (Note that checks must
     * be enabled for your account. (Use <code>DescribeAccountAuditConfiguration</code>
     * to see the list of all checks including those that are enabled or
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline void SetTargetCheckNames(Aws::Vector<Aws::String>&& value) { m_targetCheckNames = std::move(value); }

    /**
     * <p>Which checks are performed during the scheduled audit. (Note that checks must
     * be enabled for your account. (Use <code>DescribeAccountAuditConfiguration</code>
     * to see the list of all checks including those that are enabled or
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline DescribeScheduledAuditResult& WithTargetCheckNames(const Aws::Vector<Aws::String>& value) { SetTargetCheckNames(value); return *this;}

    /**
     * <p>Which checks are performed during the scheduled audit. (Note that checks must
     * be enabled for your account. (Use <code>DescribeAccountAuditConfiguration</code>
     * to see the list of all checks including those that are enabled or
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline DescribeScheduledAuditResult& WithTargetCheckNames(Aws::Vector<Aws::String>&& value) { SetTargetCheckNames(std::move(value)); return *this;}

    /**
     * <p>Which checks are performed during the scheduled audit. (Note that checks must
     * be enabled for your account. (Use <code>DescribeAccountAuditConfiguration</code>
     * to see the list of all checks including those that are enabled or
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline DescribeScheduledAuditResult& AddTargetCheckNames(const Aws::String& value) { m_targetCheckNames.push_back(value); return *this; }

    /**
     * <p>Which checks are performed during the scheduled audit. (Note that checks must
     * be enabled for your account. (Use <code>DescribeAccountAuditConfiguration</code>
     * to see the list of all checks including those that are enabled or
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline DescribeScheduledAuditResult& AddTargetCheckNames(Aws::String&& value) { m_targetCheckNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Which checks are performed during the scheduled audit. (Note that checks must
     * be enabled for your account. (Use <code>DescribeAccountAuditConfiguration</code>
     * to see the list of all checks including those that are enabled or
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline DescribeScheduledAuditResult& AddTargetCheckNames(const char* value) { m_targetCheckNames.push_back(value); return *this; }


    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditName() const{ return m_scheduledAuditName; }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline void SetScheduledAuditName(const Aws::String& value) { m_scheduledAuditName = value; }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline void SetScheduledAuditName(Aws::String&& value) { m_scheduledAuditName = std::move(value); }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline void SetScheduledAuditName(const char* value) { m_scheduledAuditName.assign(value); }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline DescribeScheduledAuditResult& WithScheduledAuditName(const Aws::String& value) { SetScheduledAuditName(value); return *this;}

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline DescribeScheduledAuditResult& WithScheduledAuditName(Aws::String&& value) { SetScheduledAuditName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline DescribeScheduledAuditResult& WithScheduledAuditName(const char* value) { SetScheduledAuditName(value); return *this;}


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
    inline DescribeScheduledAuditResult& WithScheduledAuditArn(const Aws::String& value) { SetScheduledAuditArn(value); return *this;}

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline DescribeScheduledAuditResult& WithScheduledAuditArn(Aws::String&& value) { SetScheduledAuditArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline DescribeScheduledAuditResult& WithScheduledAuditArn(const char* value) { SetScheduledAuditArn(value); return *this;}

  private:

    AuditFrequency m_frequency;

    Aws::String m_dayOfMonth;

    DayOfWeek m_dayOfWeek;

    Aws::Vector<Aws::String> m_targetCheckNames;

    Aws::String m_scheduledAuditName;

    Aws::String m_scheduledAuditArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
