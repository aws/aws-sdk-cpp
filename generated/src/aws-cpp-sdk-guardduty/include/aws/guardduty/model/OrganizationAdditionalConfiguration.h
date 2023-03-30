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
   * <p>A list of additional configurations which will be configured for the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationAdditionalConfiguration">AWS
   * API Reference</a></p>
   */
  class OrganizationAdditionalConfiguration
  {
  public:
    AWS_GUARDDUTY_API OrganizationAdditionalConfiguration();
    AWS_GUARDDUTY_API OrganizationAdditionalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationAdditionalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline const OrgFeatureAdditionalConfiguration& GetName() const{ return m_name; }

    /**
     * <p>The name of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline void SetName(const OrgFeatureAdditionalConfiguration& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline void SetName(OrgFeatureAdditionalConfiguration&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline OrganizationAdditionalConfiguration& WithName(const OrgFeatureAdditionalConfiguration& value) { SetName(value); return *this;}

    /**
     * <p>The name of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline OrganizationAdditionalConfiguration& WithName(OrgFeatureAdditionalConfiguration&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The status of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline const OrgFeatureStatus& GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>The status of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>The status of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline void SetAutoEnable(const OrgFeatureStatus& value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>The status of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline void SetAutoEnable(OrgFeatureStatus&& value) { m_autoEnableHasBeenSet = true; m_autoEnable = std::move(value); }

    /**
     * <p>The status of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline OrganizationAdditionalConfiguration& WithAutoEnable(const OrgFeatureStatus& value) { SetAutoEnable(value); return *this;}

    /**
     * <p>The status of the additional configuration that will be configured for the
     * organization.</p>
     */
    inline OrganizationAdditionalConfiguration& WithAutoEnable(OrgFeatureStatus&& value) { SetAutoEnable(std::move(value)); return *this;}

  private:

    OrgFeatureAdditionalConfiguration m_name;
    bool m_nameHasBeenSet = false;

    OrgFeatureStatus m_autoEnable;
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
