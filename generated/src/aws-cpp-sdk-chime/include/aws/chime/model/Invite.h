/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/InviteStatus.h>
#include <aws/chime/model/EmailStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{

  /**
   * <p>Invitation object returned after emailing users to invite them to join the
   * Amazon Chime <code>Team</code> account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Invite">AWS API
   * Reference</a></p>
   */
  class Invite
  {
  public:
    AWS_CHIME_API Invite() = default;
    AWS_CHIME_API Invite(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Invite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The invite ID.</p>
     */
    inline const Aws::String& GetInviteId() const { return m_inviteId; }
    inline bool InviteIdHasBeenSet() const { return m_inviteIdHasBeenSet; }
    template<typename InviteIdT = Aws::String>
    void SetInviteId(InviteIdT&& value) { m_inviteIdHasBeenSet = true; m_inviteId = std::forward<InviteIdT>(value); }
    template<typename InviteIdT = Aws::String>
    Invite& WithInviteId(InviteIdT&& value) { SetInviteId(std::forward<InviteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the invite.</p>
     */
    inline InviteStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InviteStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Invite& WithStatus(InviteStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    Invite& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the invite email.</p>
     */
    inline EmailStatus GetEmailStatus() const { return m_emailStatus; }
    inline bool EmailStatusHasBeenSet() const { return m_emailStatusHasBeenSet; }
    inline void SetEmailStatus(EmailStatus value) { m_emailStatusHasBeenSet = true; m_emailStatus = value; }
    inline Invite& WithEmailStatus(EmailStatus value) { SetEmailStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_inviteId;
    bool m_inviteIdHasBeenSet = false;

    InviteStatus m_status{InviteStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    EmailStatus m_emailStatus{EmailStatus::NOT_SET};
    bool m_emailStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
