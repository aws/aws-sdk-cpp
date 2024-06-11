/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class AcceptInvitationRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API AcceptInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptInvitation"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline const Aws::String& GetAdministratorAccountId() const{ return m_administratorAccountId; }
    inline bool AdministratorAccountIdHasBeenSet() const { return m_administratorAccountIdHasBeenSet; }
    inline void SetAdministratorAccountId(const Aws::String& value) { m_administratorAccountIdHasBeenSet = true; m_administratorAccountId = value; }
    inline void SetAdministratorAccountId(Aws::String&& value) { m_administratorAccountIdHasBeenSet = true; m_administratorAccountId = std::move(value); }
    inline void SetAdministratorAccountId(const char* value) { m_administratorAccountIdHasBeenSet = true; m_administratorAccountId.assign(value); }
    inline AcceptInvitationRequest& WithAdministratorAccountId(const Aws::String& value) { SetAdministratorAccountId(value); return *this;}
    inline AcceptInvitationRequest& WithAdministratorAccountId(Aws::String&& value) { SetAdministratorAccountId(std::move(value)); return *this;}
    inline AcceptInvitationRequest& WithAdministratorAccountId(const char* value) { SetAdministratorAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }
    inline AcceptInvitationRequest& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}
    inline AcceptInvitationRequest& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}
    inline AcceptInvitationRequest& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the account that sent the
     * invitation. This property has been replaced by the administratorAccountId
     * property and is retained only for backward compatibility.</p>
     */
    inline const Aws::String& GetMasterAccount() const{ return m_masterAccount; }
    inline bool MasterAccountHasBeenSet() const { return m_masterAccountHasBeenSet; }
    inline void SetMasterAccount(const Aws::String& value) { m_masterAccountHasBeenSet = true; m_masterAccount = value; }
    inline void SetMasterAccount(Aws::String&& value) { m_masterAccountHasBeenSet = true; m_masterAccount = std::move(value); }
    inline void SetMasterAccount(const char* value) { m_masterAccountHasBeenSet = true; m_masterAccount.assign(value); }
    inline AcceptInvitationRequest& WithMasterAccount(const Aws::String& value) { SetMasterAccount(value); return *this;}
    inline AcceptInvitationRequest& WithMasterAccount(Aws::String&& value) { SetMasterAccount(std::move(value)); return *this;}
    inline AcceptInvitationRequest& WithMasterAccount(const char* value) { SetMasterAccount(value); return *this;}
    ///@}
  private:

    Aws::String m_administratorAccountId;
    bool m_administratorAccountIdHasBeenSet = false;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;

    Aws::String m_masterAccount;
    bool m_masterAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
