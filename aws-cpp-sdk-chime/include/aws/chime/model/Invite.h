/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CHIME_API Invite
  {
  public:
    Invite();
    Invite(Aws::Utils::Json::JsonView jsonValue);
    Invite& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The invite ID.</p>
     */
    inline const Aws::String& GetInviteId() const{ return m_inviteId; }

    /**
     * <p>The invite ID.</p>
     */
    inline bool InviteIdHasBeenSet() const { return m_inviteIdHasBeenSet; }

    /**
     * <p>The invite ID.</p>
     */
    inline void SetInviteId(const Aws::String& value) { m_inviteIdHasBeenSet = true; m_inviteId = value; }

    /**
     * <p>The invite ID.</p>
     */
    inline void SetInviteId(Aws::String&& value) { m_inviteIdHasBeenSet = true; m_inviteId = std::move(value); }

    /**
     * <p>The invite ID.</p>
     */
    inline void SetInviteId(const char* value) { m_inviteIdHasBeenSet = true; m_inviteId.assign(value); }

    /**
     * <p>The invite ID.</p>
     */
    inline Invite& WithInviteId(const Aws::String& value) { SetInviteId(value); return *this;}

    /**
     * <p>The invite ID.</p>
     */
    inline Invite& WithInviteId(Aws::String&& value) { SetInviteId(std::move(value)); return *this;}

    /**
     * <p>The invite ID.</p>
     */
    inline Invite& WithInviteId(const char* value) { SetInviteId(value); return *this;}


    /**
     * <p>The status of the invite.</p>
     */
    inline const InviteStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the invite.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the invite.</p>
     */
    inline void SetStatus(const InviteStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the invite.</p>
     */
    inline void SetStatus(InviteStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the invite.</p>
     */
    inline Invite& WithStatus(const InviteStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the invite.</p>
     */
    inline Invite& WithStatus(InviteStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline Invite& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline Invite& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address to which the invite is sent.</p>
     */
    inline Invite& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The status of the invite email.</p>
     */
    inline const EmailStatus& GetEmailStatus() const{ return m_emailStatus; }

    /**
     * <p>The status of the invite email.</p>
     */
    inline bool EmailStatusHasBeenSet() const { return m_emailStatusHasBeenSet; }

    /**
     * <p>The status of the invite email.</p>
     */
    inline void SetEmailStatus(const EmailStatus& value) { m_emailStatusHasBeenSet = true; m_emailStatus = value; }

    /**
     * <p>The status of the invite email.</p>
     */
    inline void SetEmailStatus(EmailStatus&& value) { m_emailStatusHasBeenSet = true; m_emailStatus = std::move(value); }

    /**
     * <p>The status of the invite email.</p>
     */
    inline Invite& WithEmailStatus(const EmailStatus& value) { SetEmailStatus(value); return *this;}

    /**
     * <p>The status of the invite email.</p>
     */
    inline Invite& WithEmailStatus(EmailStatus&& value) { SetEmailStatus(std::move(value)); return *this;}

  private:

    Aws::String m_inviteId;
    bool m_inviteIdHasBeenSet;

    InviteStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;

    EmailStatus m_emailStatus;
    bool m_emailStatusHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
