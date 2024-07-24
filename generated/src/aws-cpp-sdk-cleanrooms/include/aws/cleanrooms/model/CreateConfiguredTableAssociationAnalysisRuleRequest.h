/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRuleType.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRulePolicy.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreateConfiguredTableAssociationAnalysisRuleRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredTableAssociationAnalysisRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguredTableAssociationAnalysisRule"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID for the configured table association. Currently accepts the
     * configured table association ID.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationIdentifier() const{ return m_configuredTableAssociationIdentifier; }
    inline bool ConfiguredTableAssociationIdentifierHasBeenSet() const { return m_configuredTableAssociationIdentifierHasBeenSet; }
    inline void SetConfiguredTableAssociationIdentifier(const Aws::String& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = value; }
    inline void SetConfiguredTableAssociationIdentifier(Aws::String&& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = std::move(value); }
    inline void SetConfiguredTableAssociationIdentifier(const char* value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier.assign(value); }
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithConfiguredTableAssociationIdentifier(const Aws::String& value) { SetConfiguredTableAssociationIdentifier(value); return *this;}
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithConfiguredTableAssociationIdentifier(Aws::String&& value) { SetConfiguredTableAssociationIdentifier(std::move(value)); return *this;}
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithConfiguredTableAssociationIdentifier(const char* value) { SetConfiguredTableAssociationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of analysis rule.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRuleType& GetAnalysisRuleType() const{ return m_analysisRuleType; }
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
    inline void SetAnalysisRuleType(const ConfiguredTableAssociationAnalysisRuleType& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }
    inline void SetAnalysisRuleType(ConfiguredTableAssociationAnalysisRuleType&& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = std::move(value); }
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithAnalysisRuleType(const ConfiguredTableAssociationAnalysisRuleType& value) { SetAnalysisRuleType(value); return *this;}
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithAnalysisRuleType(ConfiguredTableAssociationAnalysisRuleType&& value) { SetAnalysisRuleType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis rule policy that was created for the configured table
     * association.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRulePolicy& GetAnalysisRulePolicy() const{ return m_analysisRulePolicy; }
    inline bool AnalysisRulePolicyHasBeenSet() const { return m_analysisRulePolicyHasBeenSet; }
    inline void SetAnalysisRulePolicy(const ConfiguredTableAssociationAnalysisRulePolicy& value) { m_analysisRulePolicyHasBeenSet = true; m_analysisRulePolicy = value; }
    inline void SetAnalysisRulePolicy(ConfiguredTableAssociationAnalysisRulePolicy&& value) { m_analysisRulePolicyHasBeenSet = true; m_analysisRulePolicy = std::move(value); }
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithAnalysisRulePolicy(const ConfiguredTableAssociationAnalysisRulePolicy& value) { SetAnalysisRulePolicy(value); return *this;}
    inline CreateConfiguredTableAssociationAnalysisRuleRequest& WithAnalysisRulePolicy(ConfiguredTableAssociationAnalysisRulePolicy&& value) { SetAnalysisRulePolicy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_configuredTableAssociationIdentifier;
    bool m_configuredTableAssociationIdentifierHasBeenSet = false;

    ConfiguredTableAssociationAnalysisRuleType m_analysisRuleType;
    bool m_analysisRuleTypeHasBeenSet = false;

    ConfiguredTableAssociationAnalysisRulePolicy m_analysisRulePolicy;
    bool m_analysisRulePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
