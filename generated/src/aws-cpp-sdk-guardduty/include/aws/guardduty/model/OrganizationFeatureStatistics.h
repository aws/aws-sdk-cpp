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
    AWS_GUARDDUTY_API OrganizationFeatureStatistics();
    AWS_GUARDDUTY_API OrganizationFeatureStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationFeatureStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the feature.</p>
     */
    inline const OrgFeature& GetName() const{ return m_name; }

    /**
     * <p>Name of the feature.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the feature.</p>
     */
    inline void SetName(const OrgFeature& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the feature.</p>
     */
    inline void SetName(OrgFeature&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the feature.</p>
     */
    inline OrganizationFeatureStatistics& WithName(const OrgFeature& value) { SetName(value); return *this;}

    /**
     * <p>Name of the feature.</p>
     */
    inline OrganizationFeatureStatistics& WithName(OrgFeature&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Total number of accounts that have enabled a specific feature.</p>
     */
    inline int GetEnabledAccountsCount() const{ return m_enabledAccountsCount; }

    /**
     * <p>Total number of accounts that have enabled a specific feature.</p>
     */
    inline bool EnabledAccountsCountHasBeenSet() const { return m_enabledAccountsCountHasBeenSet; }

    /**
     * <p>Total number of accounts that have enabled a specific feature.</p>
     */
    inline void SetEnabledAccountsCount(int value) { m_enabledAccountsCountHasBeenSet = true; m_enabledAccountsCount = value; }

    /**
     * <p>Total number of accounts that have enabled a specific feature.</p>
     */
    inline OrganizationFeatureStatistics& WithEnabledAccountsCount(int value) { SetEnabledAccountsCount(value); return *this;}


    /**
     * <p>Name of the additional configuration.</p>
     */
    inline const Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration>& GetAdditionalConfiguration() const{ return m_additionalConfiguration; }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline void SetAdditionalConfiguration(const Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration>& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = value; }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline void SetAdditionalConfiguration(Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration>&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::move(value); }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline OrganizationFeatureStatistics& WithAdditionalConfiguration(const Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration>& value) { SetAdditionalConfiguration(value); return *this;}

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline OrganizationFeatureStatistics& WithAdditionalConfiguration(Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration>&& value) { SetAdditionalConfiguration(std::move(value)); return *this;}

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline OrganizationFeatureStatistics& AddAdditionalConfiguration(const OrganizationFeatureStatisticsAdditionalConfiguration& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(value); return *this; }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline OrganizationFeatureStatistics& AddAdditionalConfiguration(OrganizationFeatureStatisticsAdditionalConfiguration&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(std::move(value)); return *this; }

  private:

    OrgFeature m_name;
    bool m_nameHasBeenSet = false;

    int m_enabledAccountsCount;
    bool m_enabledAccountsCountHasBeenSet = false;

    Aws::Vector<OrganizationFeatureStatisticsAdditionalConfiguration> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
