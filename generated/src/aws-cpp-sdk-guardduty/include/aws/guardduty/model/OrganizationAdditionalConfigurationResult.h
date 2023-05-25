/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeatureAdditionalConfiguration.h>
#include <aws/guardduty/model/OrgFeatureStatus.h>
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
   * <p>A list of additional configuration which will be configured for the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationAdditionalConfigurationResult">AWS
   * API Reference</a></p>
   */
  class OrganizationAdditionalConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API OrganizationAdditionalConfigurationResult();
    AWS_GUARDDUTY_API OrganizationAdditionalConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationAdditionalConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the additional configuration that is configured for the member
     * accounts within the organization.</p>
     */
    inline const OrgFeatureAdditionalConfiguration& GetName() const{ return m_name; }

    /**
     * <p>The name of the additional configuration that is configured for the member
     * accounts within the organization.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the additional configuration that is configured for the member
     * accounts within the organization.</p>
     */
    inline void SetName(const OrgFeatureAdditionalConfiguration& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the additional configuration that is configured for the member
     * accounts within the organization.</p>
     */
    inline void SetName(OrgFeatureAdditionalConfiguration&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the additional configuration that is configured for the member
     * accounts within the organization.</p>
     */
    inline OrganizationAdditionalConfigurationResult& WithName(const OrgFeatureAdditionalConfiguration& value) { SetName(value); return *this;}

    /**
     * <p>The name of the additional configuration that is configured for the member
     * accounts within the organization.</p>
     */
    inline OrganizationAdditionalConfigurationResult& WithName(OrgFeatureAdditionalConfiguration&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Describes how The status of the additional configuration that are configured
     * for the member accounts within the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NEW</code>, a feature will be configured for
     * only the new accounts when they join the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NONE</code>, no feature will be configured for
     * the accounts when they join the organization.</p>
     */
    inline const OrgFeatureStatus& GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Describes how The status of the additional configuration that are configured
     * for the member accounts within the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NEW</code>, a feature will be configured for
     * only the new accounts when they join the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NONE</code>, no feature will be configured for
     * the accounts when they join the organization.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>Describes how The status of the additional configuration that are configured
     * for the member accounts within the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NEW</code>, a feature will be configured for
     * only the new accounts when they join the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NONE</code>, no feature will be configured for
     * the accounts when they join the organization.</p>
     */
    inline void SetAutoEnable(const OrgFeatureStatus& value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>Describes how The status of the additional configuration that are configured
     * for the member accounts within the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NEW</code>, a feature will be configured for
     * only the new accounts when they join the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NONE</code>, no feature will be configured for
     * the accounts when they join the organization.</p>
     */
    inline void SetAutoEnable(OrgFeatureStatus&& value) { m_autoEnableHasBeenSet = true; m_autoEnable = std::move(value); }

    /**
     * <p>Describes how The status of the additional configuration that are configured
     * for the member accounts within the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NEW</code>, a feature will be configured for
     * only the new accounts when they join the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NONE</code>, no feature will be configured for
     * the accounts when they join the organization.</p>
     */
    inline OrganizationAdditionalConfigurationResult& WithAutoEnable(const OrgFeatureStatus& value) { SetAutoEnable(value); return *this;}

    /**
     * <p>Describes how The status of the additional configuration that are configured
     * for the member accounts within the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NEW</code>, a feature will be configured for
     * only the new accounts when they join the organization.</p> <p>If you set
     * <code>AutoEnable</code> to <code>NONE</code>, no feature will be configured for
     * the accounts when they join the organization.</p>
     */
    inline OrganizationAdditionalConfigurationResult& WithAutoEnable(OrgFeatureStatus&& value) { SetAutoEnable(std::move(value)); return *this;}

  private:

    OrgFeatureAdditionalConfiguration m_name;
    bool m_nameHasBeenSet = false;

    OrgFeatureStatus m_autoEnable;
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
