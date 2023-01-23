/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Provides quota and aggregated usage data for an Amazon Macie
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UsageRecord">AWS
   * API Reference</a></p>
   */
  class UsageRecord
  {
  public:
    AWS_MACIE2_API UsageRecord();
    AWS_MACIE2_API UsageRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UsageRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline UsageRecord& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline UsageRecord& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline UsageRecord& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * of automated sensitive data discovery started for the account. If the account is
     * a member account in an organization, this value is the same as the value for the
     * organization's Amazon Macie administrator account.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomatedDiscoveryFreeTrialStartDate() const{ return m_automatedDiscoveryFreeTrialStartDate; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * of automated sensitive data discovery started for the account. If the account is
     * a member account in an organization, this value is the same as the value for the
     * organization's Amazon Macie administrator account.</p>
     */
    inline bool AutomatedDiscoveryFreeTrialStartDateHasBeenSet() const { return m_automatedDiscoveryFreeTrialStartDateHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * of automated sensitive data discovery started for the account. If the account is
     * a member account in an organization, this value is the same as the value for the
     * organization's Amazon Macie administrator account.</p>
     */
    inline void SetAutomatedDiscoveryFreeTrialStartDate(const Aws::Utils::DateTime& value) { m_automatedDiscoveryFreeTrialStartDateHasBeenSet = true; m_automatedDiscoveryFreeTrialStartDate = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * of automated sensitive data discovery started for the account. If the account is
     * a member account in an organization, this value is the same as the value for the
     * organization's Amazon Macie administrator account.</p>
     */
    inline void SetAutomatedDiscoveryFreeTrialStartDate(Aws::Utils::DateTime&& value) { m_automatedDiscoveryFreeTrialStartDateHasBeenSet = true; m_automatedDiscoveryFreeTrialStartDate = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * of automated sensitive data discovery started for the account. If the account is
     * a member account in an organization, this value is the same as the value for the
     * organization's Amazon Macie administrator account.</p>
     */
    inline UsageRecord& WithAutomatedDiscoveryFreeTrialStartDate(const Aws::Utils::DateTime& value) { SetAutomatedDiscoveryFreeTrialStartDate(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * of automated sensitive data discovery started for the account. If the account is
     * a member account in an organization, this value is the same as the value for the
     * organization's Amazon Macie administrator account.</p>
     */
    inline UsageRecord& WithAutomatedDiscoveryFreeTrialStartDate(Aws::Utils::DateTime&& value) { SetAutomatedDiscoveryFreeTrialStartDate(std::move(value)); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * free trial started for the account.</p>
     */
    inline const Aws::Utils::DateTime& GetFreeTrialStartDate() const{ return m_freeTrialStartDate; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * free trial started for the account.</p>
     */
    inline bool FreeTrialStartDateHasBeenSet() const { return m_freeTrialStartDateHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * free trial started for the account.</p>
     */
    inline void SetFreeTrialStartDate(const Aws::Utils::DateTime& value) { m_freeTrialStartDateHasBeenSet = true; m_freeTrialStartDate = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * free trial started for the account.</p>
     */
    inline void SetFreeTrialStartDate(Aws::Utils::DateTime&& value) { m_freeTrialStartDateHasBeenSet = true; m_freeTrialStartDate = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * free trial started for the account.</p>
     */
    inline UsageRecord& WithFreeTrialStartDate(const Aws::Utils::DateTime& value) { SetFreeTrialStartDate(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * free trial started for the account.</p>
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
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_automatedDiscoveryFreeTrialStartDate;
    bool m_automatedDiscoveryFreeTrialStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_freeTrialStartDate;
    bool m_freeTrialStartDateHasBeenSet = false;

    Aws::Vector<UsageByAccount> m_usage;
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
