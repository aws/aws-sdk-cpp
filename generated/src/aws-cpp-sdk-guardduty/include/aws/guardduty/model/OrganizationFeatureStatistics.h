/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeature.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/OrganizationFeatureStatisticsAdditionalConfiguration.h>
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
   * <p>Information about the number of accounts that have enabled a specific
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationFeatureStatistics">AWS
   * API Reference</a></p>
   */
  class OrganizationFeatureStatistics
  {
  public:
    AWS_GUARDDUTY_API OrganizationFeatureStatistics() = default;
    AWS_GUARDDUTY_API OrganizationFeatureStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationFeatureStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the feature.</p>
     */
    inline OrgFeature GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(OrgFeature value) { m_nameHasBeenSet = true; m_name = value; }
    inline OrganizationFeatureStatistics& WithName(OrgFeature value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of accounts that have enabled a specific feature.</p>
     */
    inline int GetEnabledAccountsCount() const { return m_enabledAccountsCount; }
    inline bool EnabledAccountsCountHasBeenSet() const { return m_enabledAccountsCountHasBeenSet; }
    inline void SetEnabledAccountsCount(int value) { m_enabledAccountsCountHasBeenSet = true; m_enabledAccountsCount = value; }
    inline OrganizationFeatureStatistics& WithEnabledAccountsCount(int value) { SetEnabledAccountsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the additional configuration.</p>
     */
    inline const Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration>& GetAdditionalConfiguration() const { return m_additionalConfiguration; }
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }
    template<typename AdditionalConfigurationT = Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration>>
    void SetAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::forward<AdditionalConfigurationT>(value); }
    template<typename AdditionalConfigurationT = Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration>>
    OrganizationFeatureStatistics& WithAdditionalConfiguration(AdditionalConfigurationT&& value) { SetAdditionalConfiguration(std::forward<AdditionalConfigurationT>(value)); return *this;}
    template<typename AdditionalConfigurationT = OrganizationFeatureStatisticsAdditionalConfiguration>
    OrganizationFeatureStatistics& AddAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.emplace_back(std::forward<AdditionalConfigurationT>(value)); return *this; }
    ///@}
  private:

    OrgFeature m_name{OrgFeature::NOT_SET};
    bool m_nameHasBeenSet = false;

    int m_enabledAccountsCount{0};
    bool m_enabledAccountsCountHasBeenSet = false;

    Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
