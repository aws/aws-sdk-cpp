/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRuleType.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRulePolicy.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdateConfiguredTableAnalysisRuleRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredTableAnalysisRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguredTableAnalysisRule"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline const Aws::String& GetConfiguredTableIdentifier() const { return m_configuredTableIdentifier; }
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }
    template<typename ConfiguredTableIdentifierT = Aws::String>
    void SetConfiguredTableIdentifier(ConfiguredTableIdentifierT&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::forward<ConfiguredTableIdentifierT>(value); }
    template<typename ConfiguredTableIdentifierT = Aws::String>
    UpdateConfiguredTableAnalysisRuleRequest& WithConfiguredTableIdentifier(ConfiguredTableIdentifierT&& value) { SetConfiguredTableIdentifier(std::forward<ConfiguredTableIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis rule type to be updated. Configured table analysis rules are
     * uniquely identified by their configured table identifier and analysis rule
     * type.</p>
     */
    inline ConfiguredTableAnalysisRuleType GetAnalysisRuleType() const { return m_analysisRuleType; }
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
    inline void SetAnalysisRuleType(ConfiguredTableAnalysisRuleType value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }
    inline UpdateConfiguredTableAnalysisRuleRequest& WithAnalysisRuleType(ConfiguredTableAnalysisRuleType value) { SetAnalysisRuleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new analysis rule policy for the configured table analysis rule.</p>
     */
    inline const ConfiguredTableAnalysisRulePolicy& GetAnalysisRulePolicy() const { return m_analysisRulePolicy; }
    inline bool AnalysisRulePolicyHasBeenSet() const { return m_analysisRulePolicyHasBeenSet; }
    template<typename AnalysisRulePolicyT = ConfiguredTableAnalysisRulePolicy>
    void SetAnalysisRulePolicy(AnalysisRulePolicyT&& value) { m_analysisRulePolicyHasBeenSet = true; m_analysisRulePolicy = std::forward<AnalysisRulePolicyT>(value); }
    template<typename AnalysisRulePolicyT = ConfiguredTableAnalysisRulePolicy>
    UpdateConfiguredTableAnalysisRuleRequest& WithAnalysisRulePolicy(AnalysisRulePolicyT&& value) { SetAnalysisRulePolicy(std::forward<AnalysisRulePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredTableIdentifier;
    bool m_configuredTableIdentifierHasBeenSet = false;

    ConfiguredTableAnalysisRuleType m_analysisRuleType{ConfiguredTableAnalysisRuleType::NOT_SET};
    bool m_analysisRuleTypeHasBeenSet = false;

    ConfiguredTableAnalysisRulePolicy m_analysisRulePolicy;
    bool m_analysisRulePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
