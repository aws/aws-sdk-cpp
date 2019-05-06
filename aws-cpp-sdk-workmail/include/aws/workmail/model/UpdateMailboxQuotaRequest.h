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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class AWS_WORKMAIL_API UpdateMailboxQuotaRequest : public WorkMailRequest
  {
  public:
    UpdateMailboxQuotaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMailboxQuota"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the organization that contains the user for whom to update
     * the mailbox quota.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier for the organization that contains the user for whom to update
     * the mailbox quota.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier for the organization that contains the user for whom to update
     * the mailbox quota.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier for the organization that contains the user for whom to update
     * the mailbox quota.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier for the organization that contains the user for whom to update
     * the mailbox quota.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier for the organization that contains the user for whom to update
     * the mailbox quota.</p>
     */
    inline UpdateMailboxQuotaRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier for the organization that contains the user for whom to update
     * the mailbox quota.</p>
     */
    inline UpdateMailboxQuotaRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the organization that contains the user for whom to update
     * the mailbox quota.</p>
     */
    inline UpdateMailboxQuotaRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifer for the user for whom to update the mailbox quota.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifer for the user for whom to update the mailbox quota.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifer for the user for whom to update the mailbox quota.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifer for the user for whom to update the mailbox quota.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifer for the user for whom to update the mailbox quota.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifer for the user for whom to update the mailbox quota.</p>
     */
    inline UpdateMailboxQuotaRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifer for the user for whom to update the mailbox quota.</p>
     */
    inline UpdateMailboxQuotaRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifer for the user for whom to update the mailbox quota.</p>
     */
    inline UpdateMailboxQuotaRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The updated mailbox quota, in MB, for the specified user.</p>
     */
    inline int GetMailboxQuota() const{ return m_mailboxQuota; }

    /**
     * <p>The updated mailbox quota, in MB, for the specified user.</p>
     */
    inline bool MailboxQuotaHasBeenSet() const { return m_mailboxQuotaHasBeenSet; }

    /**
     * <p>The updated mailbox quota, in MB, for the specified user.</p>
     */
    inline void SetMailboxQuota(int value) { m_mailboxQuotaHasBeenSet = true; m_mailboxQuota = value; }

    /**
     * <p>The updated mailbox quota, in MB, for the specified user.</p>
     */
    inline UpdateMailboxQuotaRequest& WithMailboxQuota(int value) { SetMailboxQuota(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    int m_mailboxQuota;
    bool m_mailboxQuotaHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
