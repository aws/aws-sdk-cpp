/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/PrivacyBudgetType.h>
#include <aws/cleanrooms/model/PrivacyBudgetTemplateUpdateParameters.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdatePrivacyBudgetTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdatePrivacyBudgetTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePrivacyBudgetTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is updated in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    UpdatePrivacyBudgetTemplateRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for your privacy budget template that you want to
     * update.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateIdentifier() const { return m_privacyBudgetTemplateIdentifier; }
    inline bool PrivacyBudgetTemplateIdentifierHasBeenSet() const { return m_privacyBudgetTemplateIdentifierHasBeenSet; }
    template<typename PrivacyBudgetTemplateIdentifierT = Aws::String>
    void SetPrivacyBudgetTemplateIdentifier(PrivacyBudgetTemplateIdentifierT&& value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier = std::forward<PrivacyBudgetTemplateIdentifierT>(value); }
    template<typename PrivacyBudgetTemplateIdentifierT = Aws::String>
    UpdatePrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(PrivacyBudgetTemplateIdentifierT&& value) { SetPrivacyBudgetTemplateIdentifier(std::forward<PrivacyBudgetTemplateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline PrivacyBudgetType GetPrivacyBudgetType() const { return m_privacyBudgetType; }
    inline bool PrivacyBudgetTypeHasBeenSet() const { return m_privacyBudgetTypeHasBeenSet; }
    inline void SetPrivacyBudgetType(PrivacyBudgetType value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = value; }
    inline UpdatePrivacyBudgetTemplateRequest& WithPrivacyBudgetType(PrivacyBudgetType value) { SetPrivacyBudgetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the epsilon and noise parameters for the privacy budget
     * template.</p>
     */
    inline const PrivacyBudgetTemplateUpdateParameters& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = PrivacyBudgetTemplateUpdateParameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = PrivacyBudgetTemplateUpdateParameters>
    UpdatePrivacyBudgetTemplateRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateIdentifier;
    bool m_privacyBudgetTemplateIdentifierHasBeenSet = false;

    PrivacyBudgetType m_privacyBudgetType{PrivacyBudgetType::NOT_SET};
    bool m_privacyBudgetTypeHasBeenSet = false;

    PrivacyBudgetTemplateUpdateParameters m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
