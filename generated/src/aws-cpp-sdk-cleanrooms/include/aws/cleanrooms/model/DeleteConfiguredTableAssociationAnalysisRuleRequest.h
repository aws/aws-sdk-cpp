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
  class DeleteConfiguredTableAssociationAnalysisRuleRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API DeleteConfiguredTableAssociationAnalysisRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfiguredTableAssociationAnalysisRule"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    DeleteConfiguredTableAssociationAnalysisRuleRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identiﬁer for the conﬁgured table association that's related to the
     * analysis rule that you want to delete.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationIdentifier() const { return m_configuredTableAssociationIdentifier; }
    inline bool ConfiguredTableAssociationIdentifierHasBeenSet() const { return m_configuredTableAssociationIdentifierHasBeenSet; }
    template<typename ConfiguredTableAssociationIdentifierT = Aws::String>
    void SetConfiguredTableAssociationIdentifier(ConfiguredTableAssociationIdentifierT&& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = std::forward<ConfiguredTableAssociationIdentifierT>(value); }
    template<typename ConfiguredTableAssociationIdentifierT = Aws::String>
    DeleteConfiguredTableAssociationAnalysisRuleRequest& WithConfiguredTableAssociationIdentifier(ConfiguredTableAssociationIdentifierT&& value) { SetConfiguredTableAssociationIdentifier(std::forward<ConfiguredTableAssociationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the analysis rule that you want to delete.</p>
     */
    inline ConfiguredTableAssociationAnalysisRuleType GetAnalysisRuleType() const { return m_analysisRuleType; }
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
    inline void SetAnalysisRuleType(ConfiguredTableAssociationAnalysisRuleType value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }
    inline DeleteConfiguredTableAssociationAnalysisRuleRequest& WithAnalysisRuleType(ConfiguredTableAssociationAnalysisRuleType value) { SetAnalysisRuleType(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_configuredTableAssociationIdentifier;
    bool m_configuredTableAssociationIdentifierHasBeenSet = false;

    ConfiguredTableAssociationAnalysisRuleType m_analysisRuleType{ConfiguredTableAssociationAnalysisRuleType::NOT_SET};
    bool m_analysisRuleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
