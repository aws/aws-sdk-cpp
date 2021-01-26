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
  class AWS_MACIE2_API AcceptInvitationRequest : public Macie2Request
  {
  public:
    AcceptInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptInvitation"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline AcceptInvitationRequest& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline AcceptInvitationRequest& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline AcceptInvitationRequest& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * <p>The AWS account ID for the account that sent the invitation.</p>
     */
    inline const Aws::String& GetMasterAccount() const{ return m_masterAccount; }

    /**
     * <p>The AWS account ID for the account that sent the invitation.</p>
     */
    inline bool MasterAccountHasBeenSet() const { return m_masterAccountHasBeenSet; }

    /**
     * <p>The AWS account ID for the account that sent the invitation.</p>
     */
    inline void SetMasterAccount(const Aws::String& value) { m_masterAccountHasBeenSet = true; m_masterAccount = value; }

    /**
     * <p>The AWS account ID for the account that sent the invitation.</p>
     */
    inline void SetMasterAccount(Aws::String&& value) { m_masterAccountHasBeenSet = true; m_masterAccount = std::move(value); }

    /**
     * <p>The AWS account ID for the account that sent the invitation.</p>
     */
    inline void SetMasterAccount(const char* value) { m_masterAccountHasBeenSet = true; m_masterAccount.assign(value); }

    /**
     * <p>The AWS account ID for the account that sent the invitation.</p>
     */
    inline AcceptInvitationRequest& WithMasterAccount(const Aws::String& value) { SetMasterAccount(value); return *this;}

    /**
     * <p>The AWS account ID for the account that sent the invitation.</p>
     */
    inline AcceptInvitationRequest& WithMasterAccount(Aws::String&& value) { SetMasterAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for the account that sent the invitation.</p>
     */
    inline AcceptInvitationRequest& WithMasterAccount(const char* value) { SetMasterAccount(value); return *this;}

  private:

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet;

    Aws::String m_masterAccount;
    bool m_masterAccountHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
