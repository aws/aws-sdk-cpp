/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class DeletePrivacyBudgetTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API DeletePrivacyBudgetTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePrivacyBudgetTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is deleted from the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is deleted from the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is deleted from the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is deleted from the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is deleted from the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is deleted from the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline DeletePrivacyBudgetTemplateRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is deleted from the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline DeletePrivacyBudgetTemplateRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is deleted from the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline DeletePrivacyBudgetTemplateRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>A unique identifier for your privacy budget template. </p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateIdentifier() const{ return m_privacyBudgetTemplateIdentifier; }

    /**
     * <p>A unique identifier for your privacy budget template. </p>
     */
    inline bool PrivacyBudgetTemplateIdentifierHasBeenSet() const { return m_privacyBudgetTemplateIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for your privacy budget template. </p>
     */
    inline void SetPrivacyBudgetTemplateIdentifier(const Aws::String& value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier = value; }

    /**
     * <p>A unique identifier for your privacy budget template. </p>
     */
    inline void SetPrivacyBudgetTemplateIdentifier(Aws::String&& value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for your privacy budget template. </p>
     */
    inline void SetPrivacyBudgetTemplateIdentifier(const char* value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier.assign(value); }

    /**
     * <p>A unique identifier for your privacy budget template. </p>
     */
    inline DeletePrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(const Aws::String& value) { SetPrivacyBudgetTemplateIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for your privacy budget template. </p>
     */
    inline DeletePrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(Aws::String&& value) { SetPrivacyBudgetTemplateIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for your privacy budget template. </p>
     */
    inline DeletePrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(const char* value) { SetPrivacyBudgetTemplateIdentifier(value); return *this;}

  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateIdentifier;
    bool m_privacyBudgetTemplateIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
