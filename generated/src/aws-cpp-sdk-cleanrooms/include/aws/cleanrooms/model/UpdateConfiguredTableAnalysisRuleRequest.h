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
    AWS_CLEANROOMS_API UpdateConfiguredTableAnalysisRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguredTableAnalysisRule"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline const Aws::String& GetConfiguredTableIdentifier() const{ return m_configuredTableIdentifier; }

    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(const Aws::String& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = value; }

    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(Aws::String&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::move(value); }

    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(const char* value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier.assign(value); }

    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline UpdateConfiguredTableAnalysisRuleRequest& WithConfiguredTableIdentifier(const Aws::String& value) { SetConfiguredTableIdentifier(value); return *this;}

    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline UpdateConfiguredTableAnalysisRuleRequest& WithConfiguredTableIdentifier(Aws::String&& value) { SetConfiguredTableIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the configured table that the analysis rule applies
     * to. Currently accepts the configured table ID.</p>
     */
    inline UpdateConfiguredTableAnalysisRuleRequest& WithConfiguredTableIdentifier(const char* value) { SetConfiguredTableIdentifier(value); return *this;}


    /**
     * <p>The analysis rule type to be updated. Configured table analysis rules are
     * uniquely identified by their configured table identifier and analysis rule
     * type.</p>
     */
    inline const ConfiguredTableAnalysisRuleType& GetAnalysisRuleType() const{ return m_analysisRuleType; }

    /**
     * <p>The analysis rule type to be updated. Configured table analysis rules are
     * uniquely identified by their configured table identifier and analysis rule
     * type.</p>
     */
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }

    /**
     * <p>The analysis rule type to be updated. Configured table analysis rules are
     * uniquely identified by their configured table identifier and analysis rule
     * type.</p>
     */
    inline void SetAnalysisRuleType(const ConfiguredTableAnalysisRuleType& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }

    /**
     * <p>The analysis rule type to be updated. Configured table analysis rules are
     * uniquely identified by their configured table identifier and analysis rule
     * type.</p>
     */
    inline void SetAnalysisRuleType(ConfiguredTableAnalysisRuleType&& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = std::move(value); }

    /**
     * <p>The analysis rule type to be updated. Configured table analysis rules are
     * uniquely identified by their configured table identifier and analysis rule
     * type.</p>
     */
    inline UpdateConfiguredTableAnalysisRuleRequest& WithAnalysisRuleType(const ConfiguredTableAnalysisRuleType& value) { SetAnalysisRuleType(value); return *this;}

    /**
     * <p>The analysis rule type to be updated. Configured table analysis rules are
     * uniquely identified by their configured table identifier and analysis rule
     * type.</p>
     */
    inline UpdateConfiguredTableAnalysisRuleRequest& WithAnalysisRuleType(ConfiguredTableAnalysisRuleType&& value) { SetAnalysisRuleType(std::move(value)); return *this;}


    /**
     * <p>The new analysis rule policy for the configured table analysis rule.</p>
     */
    inline const ConfiguredTableAnalysisRulePolicy& GetAnalysisRulePolicy() const{ return m_analysisRulePolicy; }

    /**
     * <p>The new analysis rule policy for the configured table analysis rule.</p>
     */
    inline bool AnalysisRulePolicyHasBeenSet() const { return m_analysisRulePolicyHasBeenSet; }

    /**
     * <p>The new analysis rule policy for the configured table analysis rule.</p>
     */
    inline void SetAnalysisRulePolicy(const ConfiguredTableAnalysisRulePolicy& value) { m_analysisRulePolicyHasBeenSet = true; m_analysisRulePolicy = value; }

    /**
     * <p>The new analysis rule policy for the configured table analysis rule.</p>
     */
    inline void SetAnalysisRulePolicy(ConfiguredTableAnalysisRulePolicy&& value) { m_analysisRulePolicyHasBeenSet = true; m_analysisRulePolicy = std::move(value); }

    /**
     * <p>The new analysis rule policy for the configured table analysis rule.</p>
     */
    inline UpdateConfiguredTableAnalysisRuleRequest& WithAnalysisRulePolicy(const ConfiguredTableAnalysisRulePolicy& value) { SetAnalysisRulePolicy(value); return *this;}

    /**
     * <p>The new analysis rule policy for the configured table analysis rule.</p>
     */
    inline UpdateConfiguredTableAnalysisRuleRequest& WithAnalysisRulePolicy(ConfiguredTableAnalysisRulePolicy&& value) { SetAnalysisRulePolicy(std::move(value)); return *this;}

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
