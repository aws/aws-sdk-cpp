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
    AWS_CLEANROOMS_API CreateConfiguredTableAnalysisRuleRequest();

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
    inline const Aws::String& GetConfiguredTableIdentifier() const{ return m_configuredTableIdentifier; }
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }
    inline void SetConfiguredTableIdentifier(const Aws::String& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = value; }
    inline void SetConfiguredTableIdentifier(Aws::String&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::move(value); }
    inline void SetConfiguredTableIdentifier(const char* value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier.assign(value); }
    inline CreateConfiguredTableAnalysisRuleRequest& WithConfiguredTableIdentifier(const Aws::String& value) { SetConfiguredTableIdentifier(value); return *this;}
    inline CreateConfiguredTableAnalysisRuleRequest& WithConfiguredTableIdentifier(Aws::String&& value) { SetConfiguredTableIdentifier(std::move(value)); return *this;}
    inline CreateConfiguredTableAnalysisRuleRequest& WithConfiguredTableIdentifier(const char* value) { SetConfiguredTableIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis rule.</p>
     */
    inline const ConfiguredTableAnalysisRuleType& GetAnalysisRuleType() const{ return m_analysisRuleType; }
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
    inline void SetAnalysisRuleType(const ConfiguredTableAnalysisRuleType& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }
    inline void SetAnalysisRuleType(ConfiguredTableAnalysisRuleType&& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = std::move(value); }
    inline CreateConfiguredTableAnalysisRuleRequest& WithAnalysisRuleType(const ConfiguredTableAnalysisRuleType& value) { SetAnalysisRuleType(value); return *this;}
    inline CreateConfiguredTableAnalysisRuleRequest& WithAnalysisRuleType(ConfiguredTableAnalysisRuleType&& value) { SetAnalysisRuleType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis rule policy that was created for the configured table.</p>
     */
    inline const ConfiguredTableAnalysisRulePolicy& GetAnalysisRulePolicy() const{ return m_analysisRulePolicy; }
    inline bool AnalysisRulePolicyHasBeenSet() const { return m_analysisRulePolicyHasBeenSet; }
    inline void SetAnalysisRulePolicy(const ConfiguredTableAnalysisRulePolicy& value) { m_analysisRulePolicyHasBeenSet = true; m_analysisRulePolicy = value; }
    inline void SetAnalysisRulePolicy(ConfiguredTableAnalysisRulePolicy&& value) { m_analysisRulePolicyHasBeenSet = true; m_analysisRulePolicy = std::move(value); }
    inline CreateConfiguredTableAnalysisRuleRequest& WithAnalysisRulePolicy(const ConfiguredTableAnalysisRulePolicy& value) { SetAnalysisRulePolicy(value); return *this;}
    inline CreateConfiguredTableAnalysisRuleRequest& WithAnalysisRulePolicy(ConfiguredTableAnalysisRulePolicy&& value) { SetAnalysisRulePolicy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredTableIdentifier;
    bool m_configuredTableIdentifierHasBeenSet = false;

    ConfiguredTableAnalysisRuleType m_analysisRuleType;
    bool m_analysisRuleTypeHasBeenSet = false;

    ConfiguredTableAnalysisRulePolicy m_analysisRulePolicy;
    bool m_analysisRulePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
