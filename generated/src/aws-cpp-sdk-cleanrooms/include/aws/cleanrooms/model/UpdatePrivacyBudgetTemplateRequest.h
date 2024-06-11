﻿/**
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
    AWS_CLEANROOMS_API UpdatePrivacyBudgetTemplateRequest();

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
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline UpdatePrivacyBudgetTemplateRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline UpdatePrivacyBudgetTemplateRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline UpdatePrivacyBudgetTemplateRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for your privacy budget template that you want to
     * update.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateIdentifier() const{ return m_privacyBudgetTemplateIdentifier; }
    inline bool PrivacyBudgetTemplateIdentifierHasBeenSet() const { return m_privacyBudgetTemplateIdentifierHasBeenSet; }
    inline void SetPrivacyBudgetTemplateIdentifier(const Aws::String& value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier = value; }
    inline void SetPrivacyBudgetTemplateIdentifier(Aws::String&& value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier = std::move(value); }
    inline void SetPrivacyBudgetTemplateIdentifier(const char* value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier.assign(value); }
    inline UpdatePrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(const Aws::String& value) { SetPrivacyBudgetTemplateIdentifier(value); return *this;}
    inline UpdatePrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(Aws::String&& value) { SetPrivacyBudgetTemplateIdentifier(std::move(value)); return *this;}
    inline UpdatePrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(const char* value) { SetPrivacyBudgetTemplateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline const PrivacyBudgetType& GetPrivacyBudgetType() const{ return m_privacyBudgetType; }
    inline bool PrivacyBudgetTypeHasBeenSet() const { return m_privacyBudgetTypeHasBeenSet; }
    inline void SetPrivacyBudgetType(const PrivacyBudgetType& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = value; }
    inline void SetPrivacyBudgetType(PrivacyBudgetType&& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = std::move(value); }
    inline UpdatePrivacyBudgetTemplateRequest& WithPrivacyBudgetType(const PrivacyBudgetType& value) { SetPrivacyBudgetType(value); return *this;}
    inline UpdatePrivacyBudgetTemplateRequest& WithPrivacyBudgetType(PrivacyBudgetType&& value) { SetPrivacyBudgetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the epsilon and noise parameters for the privacy budget
     * template.</p>
     */
    inline const PrivacyBudgetTemplateUpdateParameters& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const PrivacyBudgetTemplateUpdateParameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(PrivacyBudgetTemplateUpdateParameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline UpdatePrivacyBudgetTemplateRequest& WithParameters(const PrivacyBudgetTemplateUpdateParameters& value) { SetParameters(value); return *this;}
    inline UpdatePrivacyBudgetTemplateRequest& WithParameters(PrivacyBudgetTemplateUpdateParameters&& value) { SetParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateIdentifier;
    bool m_privacyBudgetTemplateIdentifierHasBeenSet = false;

    PrivacyBudgetType m_privacyBudgetType;
    bool m_privacyBudgetTypeHasBeenSet = false;

    PrivacyBudgetTemplateUpdateParameters m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
