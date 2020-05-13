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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/UsageByAccount.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides quota and aggregated usage data for an account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/UsageRecord">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API UsageRecord
  {
  public:
    UsageRecord();
    UsageRecord(Aws::Utils::Json::JsonView jsonValue);
    UsageRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID for the account that the data applies to.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID for the account that the data applies to.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID for the account that the data applies to.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID for the account that the data applies to.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID for the account that the data applies to.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID for the account that the data applies to.</p>
     */
    inline UsageRecord& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID for the account that the data applies to.</p>
     */
    inline UsageRecord& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for the account that the data applies to.</p>
     */
    inline UsageRecord& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * period started for the account. This value is null if the account didn't
     * participate in the free trial.</p>
     */
    inline const Aws::Utils::DateTime& GetFreeTrialStartDate() const{ return m_freeTrialStartDate; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * period started for the account. This value is null if the account didn't
     * participate in the free trial.</p>
     */
    inline bool FreeTrialStartDateHasBeenSet() const { return m_freeTrialStartDateHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * period started for the account. This value is null if the account didn't
     * participate in the free trial.</p>
     */
    inline void SetFreeTrialStartDate(const Aws::Utils::DateTime& value) { m_freeTrialStartDateHasBeenSet = true; m_freeTrialStartDate = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * period started for the account. This value is null if the account didn't
     * participate in the free trial.</p>
     */
    inline void SetFreeTrialStartDate(Aws::Utils::DateTime&& value) { m_freeTrialStartDateHasBeenSet = true; m_freeTrialStartDate = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * period started for the account. This value is null if the account didn't
     * participate in the free trial.</p>
     */
    inline UsageRecord& WithFreeTrialStartDate(const Aws::Utils::DateTime& value) { SetFreeTrialStartDate(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * period started for the account. This value is null if the account didn't
     * participate in the free trial.</p>
     */
    inline UsageRecord& WithFreeTrialStartDate(Aws::Utils::DateTime&& value) { SetFreeTrialStartDate(std::move(value)); return *this;}


    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline const Aws::Vector<UsageByAccount>& GetUsage() const{ return m_usage; }

    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }

    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline void SetUsage(const Aws::Vector<UsageByAccount>& value) { m_usageHasBeenSet = true; m_usage = value; }

    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline void SetUsage(Aws::Vector<UsageByAccount>&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }

    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline UsageRecord& WithUsage(const Aws::Vector<UsageByAccount>& value) { SetUsage(value); return *this;}

    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline UsageRecord& WithUsage(Aws::Vector<UsageByAccount>&& value) { SetUsage(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline UsageRecord& AddUsage(const UsageByAccount& value) { m_usageHasBeenSet = true; m_usage.push_back(value); return *this; }

    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline UsageRecord& AddUsage(UsageByAccount&& value) { m_usageHasBeenSet = true; m_usage.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::Utils::DateTime m_freeTrialStartDate;
    bool m_freeTrialStartDateHasBeenSet;

    Aws::Vector<UsageByAccount> m_usage;
    bool m_usageHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
