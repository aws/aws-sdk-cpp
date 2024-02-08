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
    AWS_GUARDDUTY_API OrganizationFeatureStatisticsAdditionalConfiguration();
    AWS_GUARDDUTY_API OrganizationFeatureStatisticsAdditionalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationFeatureStatisticsAdditionalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the additional configuration within a feature.</p>
     */
    inline const OrgFeatureAdditionalConfiguration& GetName() const{ return m_name; }

    /**
     * <p>Name of the additional configuration within a feature.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the additional configuration within a feature.</p>
     */
    inline void SetName(const OrgFeatureAdditionalConfiguration& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the additional configuration within a feature.</p>
     */
    inline void SetName(OrgFeatureAdditionalConfiguration&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the additional configuration within a feature.</p>
     */
    inline OrganizationFeatureStatisticsAdditionalConfiguration& WithName(const OrgFeatureAdditionalConfiguration& value) { SetName(value); return *this;}

    /**
     * <p>Name of the additional configuration within a feature.</p>
     */
    inline OrganizationFeatureStatisticsAdditionalConfiguration& WithName(OrgFeatureAdditionalConfiguration&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Total number of accounts that have enabled the additional configuration.</p>
     */
    inline int GetEnabledAccountsCount() const{ return m_enabledAccountsCount; }

    /**
     * <p>Total number of accounts that have enabled the additional configuration.</p>
     */
    inline bool EnabledAccountsCountHasBeenSet() const { return m_enabledAccountsCountHasBeenSet; }

    /**
     * <p>Total number of accounts that have enabled the additional configuration.</p>
     */
    inline void SetEnabledAccountsCount(int value) { m_enabledAccountsCountHasBeenSet = true; m_enabledAccountsCount = value; }

    /**
     * <p>Total number of accounts that have enabled the additional configuration.</p>
     */
    inline OrganizationFeatureStatisticsAdditionalConfiguration& WithEnabledAccountsCount(int value) { SetEnabledAccountsCount(value); return *this;}

  private:

    OrgFeatureAdditionalConfiguration m_name;
    bool m_nameHasBeenSet = false;

    int m_enabledAccountsCount;
    bool m_enabledAccountsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
