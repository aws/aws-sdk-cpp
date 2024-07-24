/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRuleType.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class GetConfiguredTableAssociationAnalysisRuleRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetConfiguredTableAssociationAnalysisRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfiguredTableAssociationAnalysisRule"; }

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
    inline GetConfiguredTableAssociationAnalysisRuleRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline GetConfiguredTableAssociationAnalysisRuleRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline GetConfiguredTableAssociationAnalysisRuleRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identiﬁer for the conﬁgured table association that's related to the
     * analysis rule.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationIdentifier() const{ return m_configuredTableAssociationIdentifier; }
    inline bool ConfiguredTableAssociationIdentifierHasBeenSet() const { return m_configuredTableAssociationIdentifierHasBeenSet; }
    inline void SetConfiguredTableAssociationIdentifier(const Aws::String& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = value; }
    inline void SetConfiguredTableAssociationIdentifier(Aws::String&& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = std::move(value); }
    inline void SetConfiguredTableAssociationIdentifier(const char* value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier.assign(value); }
    inline GetConfiguredTableAssociationAnalysisRuleRequest& WithConfiguredTableAssociationIdentifier(const Aws::String& value) { SetConfiguredTableAssociationIdentifier(value); return *this;}
    inline GetConfiguredTableAssociationAnalysisRuleRequest& WithConfiguredTableAssociationIdentifier(Aws::String&& value) { SetConfiguredTableAssociationIdentifier(std::move(value)); return *this;}
    inline GetConfiguredTableAssociationAnalysisRuleRequest& WithConfiguredTableAssociationIdentifier(const char* value) { SetConfiguredTableAssociationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of analysis rule that you want to retrieve.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRuleType& GetAnalysisRuleType() const{ return m_analysisRuleType; }
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
    inline void SetAnalysisRuleType(const ConfiguredTableAssociationAnalysisRuleType& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }
    inline void SetAnalysisRuleType(ConfiguredTableAssociationAnalysisRuleType&& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = std::move(value); }
    inline GetConfiguredTableAssociationAnalysisRuleRequest& WithAnalysisRuleType(const ConfiguredTableAssociationAnalysisRuleType& value) { SetAnalysisRuleType(value); return *this;}
    inline GetConfiguredTableAssociationAnalysisRuleRequest& WithAnalysisRuleType(ConfiguredTableAssociationAnalysisRuleType&& value) { SetAnalysisRuleType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_configuredTableAssociationIdentifier;
    bool m_configuredTableAssociationIdentifierHasBeenSet = false;

    ConfiguredTableAssociationAnalysisRuleType m_analysisRuleType;
    bool m_analysisRuleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
