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
  class CreateConfiguredTableAnalysisRuleRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredTableAnalysisRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguredTableAnalysisRule"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the configured table to create the analysis rule for.
     * Currently accepts the configured table ID. </p>
     */
    inline const Aws::String& GetConfiguredTableIdentifier() const { return m_configuredTableIdentifier; }
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }
    template<typename ConfiguredTableIdentifierT = Aws::String>
    void SetConfiguredTableIdentifier(ConfiguredTableIdentifierT&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::forward<ConfiguredTableIdentifierT>(value); }
    template<typename ConfiguredTableIdentifierT = Aws::String>
    CreateConfiguredTableAnalysisRuleRequest& WithConfiguredTableIdentifier(ConfiguredTableIdentifierT&& value) { SetConfiguredTableIdentifier(std::forward<ConfiguredTableIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis rule.</p>
     */
    inline ConfiguredTableAnalysisRuleType GetAnalysisRuleType() const { return m_analysisRuleType; }
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
    inline void SetAnalysisRuleType(ConfiguredTableAnalysisRuleType value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }
    inline CreateConfiguredTableAnalysisRuleRequest& WithAnalysisRuleType(ConfiguredTableAnalysisRuleType value) { SetAnalysisRuleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis rule policy that was created for the configured table.</p>
     */
    inline const ConfiguredTableAnalysisRulePolicy& GetAnalysisRulePolicy() const { return m_analysisRulePolicy; }
    inline bool AnalysisRulePolicyHasBeenSet() const { return m_analysisRulePolicyHasBeenSet; }
    template<typename AnalysisRulePolicyT = ConfiguredTableAnalysisRulePolicy>
    void SetAnalysisRulePolicy(AnalysisRulePolicyT&& value) { m_analysisRulePolicyHasBeenSet = true; m_analysisRulePolicy = std::forward<AnalysisRulePolicyT>(value); }
    template<typename AnalysisRulePolicyT = ConfiguredTableAnalysisRulePolicy>
    CreateConfiguredTableAnalysisRuleRequest& WithAnalysisRulePolicy(AnalysisRulePolicyT&& value) { SetAnalysisRulePolicy(std::forward<AnalysisRulePolicyT>(value)); return *this;}
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
