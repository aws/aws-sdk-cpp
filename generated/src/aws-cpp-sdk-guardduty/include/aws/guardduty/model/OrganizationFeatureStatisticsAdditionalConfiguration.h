/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeatureAdditionalConfiguration.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the coverage statistic for the additional configuration of
   * the feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationFeatureStatisticsAdditionalConfiguration">AWS
   * API Reference</a></p>
   */
  class OrganizationFeatureStatisticsAdditionalConfiguration
  {
  public:
    AWS_GUARDDUTY_API OrganizationFeatureStatisticsAdditionalConfiguration() = default;
    AWS_GUARDDUTY_API OrganizationFeatureStatisticsAdditionalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationFeatureStatisticsAdditionalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the additional configuration within a feature.</p>
     */
    inline OrgFeatureAdditionalConfiguration GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(OrgFeatureAdditionalConfiguration value) { m_nameHasBeenSet = true; m_name = value; }
    inline OrganizationFeatureStatisticsAdditionalConfiguration& WithName(OrgFeatureAdditionalConfiguration value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of accounts that have enabled the additional configuration.</p>
     */
    inline int GetEnabledAccountsCount() const { return m_enabledAccountsCount; }
    inline bool EnabledAccountsCountHasBeenSet() const { return m_enabledAccountsCountHasBeenSet; }
    inline void SetEnabledAccountsCount(int value) { m_enabledAccountsCountHasBeenSet = true; m_enabledAccountsCount = value; }
    inline OrganizationFeatureStatisticsAdditionalConfiguration& WithEnabledAccountsCount(int value) { SetEnabledAccountsCount(value); return *this;}
    ///@}
  private:

    OrgFeatureAdditionalConfiguration m_name{OrgFeatureAdditionalConfiguration::NOT_SET};
    bool m_nameHasBeenSet = false;

    int m_enabledAccountsCount{0};
    bool m_enabledAccountsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
