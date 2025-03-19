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
    AWS_MACIE2_API AcceptInvitationRequest() = default;

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
    inline const Aws::String& GetAdministratorAccountId() const { return m_administratorAccountId; }
    inline bool AdministratorAccountIdHasBeenSet() const { return m_administratorAccountIdHasBeenSet; }
    template<typename AdministratorAccountIdT = Aws::String>
    void SetAdministratorAccountId(AdministratorAccountIdT&& value) { m_administratorAccountIdHasBeenSet = true; m_administratorAccountId = std::forward<AdministratorAccountIdT>(value); }
    template<typename AdministratorAccountIdT = Aws::String>
    AcceptInvitationRequest& WithAdministratorAccountId(AdministratorAccountIdT&& value) { SetAdministratorAccountId(std::forward<AdministratorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the invitation to accept.</p>
     */
    inline const Aws::String& GetInvitationId() const { return m_invitationId; }
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }
    template<typename InvitationIdT = Aws::String>
    void SetInvitationId(InvitationIdT&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::forward<InvitationIdT>(value); }
    template<typename InvitationIdT = Aws::String>
    AcceptInvitationRequest& WithInvitationId(InvitationIdT&& value) { SetInvitationId(std::forward<InvitationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the account that sent the
     * invitation. This property has been replaced by the administratorAccountId
     * property and is retained only for backward compatibility.</p>
     */
    inline const Aws::String& GetMasterAccount() const { return m_masterAccount; }
    inline bool MasterAccountHasBeenSet() const { return m_masterAccountHasBeenSet; }
    template<typename MasterAccountT = Aws::String>
    void SetMasterAccount(MasterAccountT&& value) { m_masterAccountHasBeenSet = true; m_masterAccount = std::forward<MasterAccountT>(value); }
    template<typename MasterAccountT = Aws::String>
    AcceptInvitationRequest& WithMasterAccount(MasterAccountT&& value) { SetMasterAccount(std::forward<MasterAccountT>(value)); return *this;}
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
