/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteMailboxPermissionsRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DeleteMailboxPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMailboxPermissions"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier of the member (user or group) that owns the mailbox.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of the member (user or group) that owns the mailbox.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of the member (user or group) that owns the mailbox.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of the member (user or group) that owns the mailbox.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of the member (user or group) that owns the mailbox.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of the member (user or group) that owns the mailbox.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of the member (user or group) that owns the mailbox.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the member (user or group) that owns the mailbox.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The identifier of the member (user or group) for which to delete granted
     * permissions.</p>
     */
    inline const Aws::String& GetGranteeId() const{ return m_granteeId; }

    /**
     * <p>The identifier of the member (user or group) for which to delete granted
     * permissions.</p>
     */
    inline bool GranteeIdHasBeenSet() const { return m_granteeIdHasBeenSet; }

    /**
     * <p>The identifier of the member (user or group) for which to delete granted
     * permissions.</p>
     */
    inline void SetGranteeId(const Aws::String& value) { m_granteeIdHasBeenSet = true; m_granteeId = value; }

    /**
     * <p>The identifier of the member (user or group) for which to delete granted
     * permissions.</p>
     */
    inline void SetGranteeId(Aws::String&& value) { m_granteeIdHasBeenSet = true; m_granteeId = std::move(value); }

    /**
     * <p>The identifier of the member (user or group) for which to delete granted
     * permissions.</p>
     */
    inline void SetGranteeId(const char* value) { m_granteeIdHasBeenSet = true; m_granteeId.assign(value); }

    /**
     * <p>The identifier of the member (user or group) for which to delete granted
     * permissions.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithGranteeId(const Aws::String& value) { SetGranteeId(value); return *this;}

    /**
     * <p>The identifier of the member (user or group) for which to delete granted
     * permissions.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithGranteeId(Aws::String&& value) { SetGranteeId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the member (user or group) for which to delete granted
     * permissions.</p>
     */
    inline DeleteMailboxPermissionsRequest& WithGranteeId(const char* value) { SetGranteeId(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_granteeId;
    bool m_granteeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
