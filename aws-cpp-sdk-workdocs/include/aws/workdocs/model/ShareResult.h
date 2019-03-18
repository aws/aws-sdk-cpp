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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/RoleType.h>
#include <aws/workdocs/model/ShareStatusType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the share results of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ShareResult">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API ShareResult
  {
  public:
    ShareResult();
    ShareResult(Aws::Utils::Json::JsonView jsonValue);
    ShareResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the principal.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The ID of the principal.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The ID of the principal.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The ID of the principal.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The ID of the principal.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The ID of the principal.</p>
     */
    inline ShareResult& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The ID of the principal.</p>
     */
    inline ShareResult& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the principal.</p>
     */
    inline ShareResult& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The ID of the invited user.</p>
     */
    inline const Aws::String& GetInviteePrincipalId() const{ return m_inviteePrincipalId; }

    /**
     * <p>The ID of the invited user.</p>
     */
    inline bool InviteePrincipalIdHasBeenSet() const { return m_inviteePrincipalIdHasBeenSet; }

    /**
     * <p>The ID of the invited user.</p>
     */
    inline void SetInviteePrincipalId(const Aws::String& value) { m_inviteePrincipalIdHasBeenSet = true; m_inviteePrincipalId = value; }

    /**
     * <p>The ID of the invited user.</p>
     */
    inline void SetInviteePrincipalId(Aws::String&& value) { m_inviteePrincipalIdHasBeenSet = true; m_inviteePrincipalId = std::move(value); }

    /**
     * <p>The ID of the invited user.</p>
     */
    inline void SetInviteePrincipalId(const char* value) { m_inviteePrincipalIdHasBeenSet = true; m_inviteePrincipalId.assign(value); }

    /**
     * <p>The ID of the invited user.</p>
     */
    inline ShareResult& WithInviteePrincipalId(const Aws::String& value) { SetInviteePrincipalId(value); return *this;}

    /**
     * <p>The ID of the invited user.</p>
     */
    inline ShareResult& WithInviteePrincipalId(Aws::String&& value) { SetInviteePrincipalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the invited user.</p>
     */
    inline ShareResult& WithInviteePrincipalId(const char* value) { SetInviteePrincipalId(value); return *this;}


    /**
     * <p>The role.</p>
     */
    inline const RoleType& GetRole() const{ return m_role; }

    /**
     * <p>The role.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The role.</p>
     */
    inline void SetRole(const RoleType& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The role.</p>
     */
    inline void SetRole(RoleType&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The role.</p>
     */
    inline ShareResult& WithRole(const RoleType& value) { SetRole(value); return *this;}

    /**
     * <p>The role.</p>
     */
    inline ShareResult& WithRole(RoleType&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const ShareStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const ShareStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(ShareStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline ShareResult& WithStatus(const ShareStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline ShareResult& WithStatus(ShareStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }

    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }

    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }

    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }

    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline ShareResult& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline ShareResult& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline ShareResult& WithShareId(const char* value) { SetShareId(value); return *this;}


    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message.</p>
     */
    inline ShareResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline ShareResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline ShareResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;

    Aws::String m_inviteePrincipalId;
    bool m_inviteePrincipalIdHasBeenSet;

    RoleType m_role;
    bool m_roleHasBeenSet;

    ShareStatusType m_status;
    bool m_statusHasBeenSet;

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
