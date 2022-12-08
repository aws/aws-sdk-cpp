/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/FeatureStatus.h>
#include <aws/sesv2/model/DashboardAttributes.h>
#include <aws/sesv2/model/GuardianAttributes.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>The VDM attributes that apply to your Amazon SES account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/VdmAttributes">AWS
   * API Reference</a></p>
   */
  class VdmAttributes
  {
  public:
    AWS_SESV2_API VdmAttributes();
    AWS_SESV2_API VdmAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API VdmAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the status of your VDM configuration. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables VDM for
     * your account.</p> </li> <li> <p> <code>DISABLED</code> – Amazon SES disables VDM
     * for your account.</p> </li> </ul>
     */
    inline const FeatureStatus& GetVdmEnabled() const{ return m_vdmEnabled; }

    /**
     * <p>Specifies the status of your VDM configuration. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables VDM for
     * your account.</p> </li> <li> <p> <code>DISABLED</code> – Amazon SES disables VDM
     * for your account.</p> </li> </ul>
     */
    inline bool VdmEnabledHasBeenSet() const { return m_vdmEnabledHasBeenSet; }

    /**
     * <p>Specifies the status of your VDM configuration. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables VDM for
     * your account.</p> </li> <li> <p> <code>DISABLED</code> – Amazon SES disables VDM
     * for your account.</p> </li> </ul>
     */
    inline void SetVdmEnabled(const FeatureStatus& value) { m_vdmEnabledHasBeenSet = true; m_vdmEnabled = value; }

    /**
     * <p>Specifies the status of your VDM configuration. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables VDM for
     * your account.</p> </li> <li> <p> <code>DISABLED</code> – Amazon SES disables VDM
     * for your account.</p> </li> </ul>
     */
    inline void SetVdmEnabled(FeatureStatus&& value) { m_vdmEnabledHasBeenSet = true; m_vdmEnabled = std::move(value); }

    /**
     * <p>Specifies the status of your VDM configuration. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables VDM for
     * your account.</p> </li> <li> <p> <code>DISABLED</code> – Amazon SES disables VDM
     * for your account.</p> </li> </ul>
     */
    inline VdmAttributes& WithVdmEnabled(const FeatureStatus& value) { SetVdmEnabled(value); return *this;}

    /**
     * <p>Specifies the status of your VDM configuration. Can be one of the
     * following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES enables VDM for
     * your account.</p> </li> <li> <p> <code>DISABLED</code> – Amazon SES disables VDM
     * for your account.</p> </li> </ul>
     */
    inline VdmAttributes& WithVdmEnabled(FeatureStatus&& value) { SetVdmEnabled(std::move(value)); return *this;}


    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline const DashboardAttributes& GetDashboardAttributes() const{ return m_dashboardAttributes; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline bool DashboardAttributesHasBeenSet() const { return m_dashboardAttributesHasBeenSet; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline void SetDashboardAttributes(const DashboardAttributes& value) { m_dashboardAttributesHasBeenSet = true; m_dashboardAttributes = value; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline void SetDashboardAttributes(DashboardAttributes&& value) { m_dashboardAttributesHasBeenSet = true; m_dashboardAttributes = std::move(value); }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline VdmAttributes& WithDashboardAttributes(const DashboardAttributes& value) { SetDashboardAttributes(value); return *this;}

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Dashboard.</p>
     */
    inline VdmAttributes& WithDashboardAttributes(DashboardAttributes&& value) { SetDashboardAttributes(std::move(value)); return *this;}


    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline const GuardianAttributes& GetGuardianAttributes() const{ return m_guardianAttributes; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline bool GuardianAttributesHasBeenSet() const { return m_guardianAttributesHasBeenSet; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline void SetGuardianAttributes(const GuardianAttributes& value) { m_guardianAttributesHasBeenSet = true; m_guardianAttributes = value; }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline void SetGuardianAttributes(GuardianAttributes&& value) { m_guardianAttributesHasBeenSet = true; m_guardianAttributes = std::move(value); }

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline VdmAttributes& WithGuardianAttributes(const GuardianAttributes& value) { SetGuardianAttributes(value); return *this;}

    /**
     * <p>Specifies additional settings for your VDM configuration as applicable to the
     * Guardian.</p>
     */
    inline VdmAttributes& WithGuardianAttributes(GuardianAttributes&& value) { SetGuardianAttributes(std::move(value)); return *this;}

  private:

    FeatureStatus m_vdmEnabled;
    bool m_vdmEnabledHasBeenSet = false;

    DashboardAttributes m_dashboardAttributes;
    bool m_dashboardAttributesHasBeenSet = false;

    GuardianAttributes m_guardianAttributes;
    bool m_guardianAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
