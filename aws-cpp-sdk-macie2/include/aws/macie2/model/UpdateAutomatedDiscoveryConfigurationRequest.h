/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/AutomatedDiscoveryStatus.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateAutomatedDiscoveryConfigurationRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateAutomatedDiscoveryConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutomatedDiscoveryConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The new status of automated sensitive data discovery for the account. Valid
     * values are: ENABLED, start or resume automated sensitive data discovery
     * activities for the account; and, DISABLED, stop performing automated sensitive
     * data discovery activities for the account.</p> <p>When you enable automated
     * sensitive data discovery for the first time, Amazon Macie uses default
     * configuration settings to determine which data sources to analyze and which
     * managed data identifiers to use. To change these settings, use the
     * UpdateClassificationScope and UpdateSensitivityInspectionTemplate operations,
     * respectively. If you change the settings and subsequently disable the
     * configuration, Amazon Macie retains your changes.</p>
     */
    inline const AutomatedDiscoveryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The new status of automated sensitive data discovery for the account. Valid
     * values are: ENABLED, start or resume automated sensitive data discovery
     * activities for the account; and, DISABLED, stop performing automated sensitive
     * data discovery activities for the account.</p> <p>When you enable automated
     * sensitive data discovery for the first time, Amazon Macie uses default
     * configuration settings to determine which data sources to analyze and which
     * managed data identifiers to use. To change these settings, use the
     * UpdateClassificationScope and UpdateSensitivityInspectionTemplate operations,
     * respectively. If you change the settings and subsequently disable the
     * configuration, Amazon Macie retains your changes.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The new status of automated sensitive data discovery for the account. Valid
     * values are: ENABLED, start or resume automated sensitive data discovery
     * activities for the account; and, DISABLED, stop performing automated sensitive
     * data discovery activities for the account.</p> <p>When you enable automated
     * sensitive data discovery for the first time, Amazon Macie uses default
     * configuration settings to determine which data sources to analyze and which
     * managed data identifiers to use. To change these settings, use the
     * UpdateClassificationScope and UpdateSensitivityInspectionTemplate operations,
     * respectively. If you change the settings and subsequently disable the
     * configuration, Amazon Macie retains your changes.</p>
     */
    inline void SetStatus(const AutomatedDiscoveryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The new status of automated sensitive data discovery for the account. Valid
     * values are: ENABLED, start or resume automated sensitive data discovery
     * activities for the account; and, DISABLED, stop performing automated sensitive
     * data discovery activities for the account.</p> <p>When you enable automated
     * sensitive data discovery for the first time, Amazon Macie uses default
     * configuration settings to determine which data sources to analyze and which
     * managed data identifiers to use. To change these settings, use the
     * UpdateClassificationScope and UpdateSensitivityInspectionTemplate operations,
     * respectively. If you change the settings and subsequently disable the
     * configuration, Amazon Macie retains your changes.</p>
     */
    inline void SetStatus(AutomatedDiscoveryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The new status of automated sensitive data discovery for the account. Valid
     * values are: ENABLED, start or resume automated sensitive data discovery
     * activities for the account; and, DISABLED, stop performing automated sensitive
     * data discovery activities for the account.</p> <p>When you enable automated
     * sensitive data discovery for the first time, Amazon Macie uses default
     * configuration settings to determine which data sources to analyze and which
     * managed data identifiers to use. To change these settings, use the
     * UpdateClassificationScope and UpdateSensitivityInspectionTemplate operations,
     * respectively. If you change the settings and subsequently disable the
     * configuration, Amazon Macie retains your changes.</p>
     */
    inline UpdateAutomatedDiscoveryConfigurationRequest& WithStatus(const AutomatedDiscoveryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The new status of automated sensitive data discovery for the account. Valid
     * values are: ENABLED, start or resume automated sensitive data discovery
     * activities for the account; and, DISABLED, stop performing automated sensitive
     * data discovery activities for the account.</p> <p>When you enable automated
     * sensitive data discovery for the first time, Amazon Macie uses default
     * configuration settings to determine which data sources to analyze and which
     * managed data identifiers to use. To change these settings, use the
     * UpdateClassificationScope and UpdateSensitivityInspectionTemplate operations,
     * respectively. If you change the settings and subsequently disable the
     * configuration, Amazon Macie retains your changes.</p>
     */
    inline UpdateAutomatedDiscoveryConfigurationRequest& WithStatus(AutomatedDiscoveryStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    AutomatedDiscoveryStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
