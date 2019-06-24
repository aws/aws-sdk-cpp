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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API AcceptInvitationRequest : public SecurityHubRequest
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
     * <p>The account ID of the Security Hub master account that sent the
     * invitation.</p>
     */
    inline const Aws::String& GetMasterId() const{ return m_masterId; }

    /**
     * <p>The account ID of the Security Hub master account that sent the
     * invitation.</p>
     */
    inline bool MasterIdHasBeenSet() const { return m_masterIdHasBeenSet; }

    /**
     * <p>The account ID of the Security Hub master account that sent the
     * invitation.</p>
     */
    inline void SetMasterId(const Aws::String& value) { m_masterIdHasBeenSet = true; m_masterId = value; }

    /**
     * <p>The account ID of the Security Hub master account that sent the
     * invitation.</p>
     */
    inline void SetMasterId(Aws::String&& value) { m_masterIdHasBeenSet = true; m_masterId = std::move(value); }

    /**
     * <p>The account ID of the Security Hub master account that sent the
     * invitation.</p>
     */
    inline void SetMasterId(const char* value) { m_masterIdHasBeenSet = true; m_masterId.assign(value); }

    /**
     * <p>The account ID of the Security Hub master account that sent the
     * invitation.</p>
     */
    inline AcceptInvitationRequest& WithMasterId(const Aws::String& value) { SetMasterId(value); return *this;}

    /**
     * <p>The account ID of the Security Hub master account that sent the
     * invitation.</p>
     */
    inline AcceptInvitationRequest& WithMasterId(Aws::String&& value) { SetMasterId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the Security Hub master account that sent the
     * invitation.</p>
     */
    inline AcceptInvitationRequest& WithMasterId(const char* value) { SetMasterId(value); return *this;}


    /**
     * <p>The ID of the invitation sent from the Security Hub master account.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>The ID of the invitation sent from the Security Hub master account.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>The ID of the invitation sent from the Security Hub master account.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>The ID of the invitation sent from the Security Hub master account.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>The ID of the invitation sent from the Security Hub master account.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>The ID of the invitation sent from the Security Hub master account.</p>
     */
    inline AcceptInvitationRequest& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>The ID of the invitation sent from the Security Hub master account.</p>
     */
    inline AcceptInvitationRequest& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the invitation sent from the Security Hub master account.</p>
     */
    inline AcceptInvitationRequest& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}

  private:

    Aws::String m_masterId;
    bool m_masterIdHasBeenSet;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
