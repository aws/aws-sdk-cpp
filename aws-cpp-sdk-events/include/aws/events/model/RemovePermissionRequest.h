/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class RemovePermissionRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API RemovePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemovePermission"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The statement ID corresponding to the account that is no longer allowed to
     * put events to the default event bus.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>The statement ID corresponding to the account that is no longer allowed to
     * put events to the default event bus.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>The statement ID corresponding to the account that is no longer allowed to
     * put events to the default event bus.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>The statement ID corresponding to the account that is no longer allowed to
     * put events to the default event bus.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>The statement ID corresponding to the account that is no longer allowed to
     * put events to the default event bus.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>The statement ID corresponding to the account that is no longer allowed to
     * put events to the default event bus.</p>
     */
    inline RemovePermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>The statement ID corresponding to the account that is no longer allowed to
     * put events to the default event bus.</p>
     */
    inline RemovePermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>The statement ID corresponding to the account that is no longer allowed to
     * put events to the default event bus.</p>
     */
    inline RemovePermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>Specifies whether to remove all permissions.</p>
     */
    inline bool GetRemoveAllPermissions() const{ return m_removeAllPermissions; }

    /**
     * <p>Specifies whether to remove all permissions.</p>
     */
    inline bool RemoveAllPermissionsHasBeenSet() const { return m_removeAllPermissionsHasBeenSet; }

    /**
     * <p>Specifies whether to remove all permissions.</p>
     */
    inline void SetRemoveAllPermissions(bool value) { m_removeAllPermissionsHasBeenSet = true; m_removeAllPermissions = value; }

    /**
     * <p>Specifies whether to remove all permissions.</p>
     */
    inline RemovePermissionRequest& WithRemoveAllPermissions(bool value) { SetRemoveAllPermissions(value); return *this;}


    /**
     * <p>The name of the event bus to revoke permissions for. If you omit this, the
     * default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }

    /**
     * <p>The name of the event bus to revoke permissions for. If you omit this, the
     * default event bus is used.</p>
     */
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }

    /**
     * <p>The name of the event bus to revoke permissions for. If you omit this, the
     * default event bus is used.</p>
     */
    inline void SetEventBusName(const Aws::String& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = value; }

    /**
     * <p>The name of the event bus to revoke permissions for. If you omit this, the
     * default event bus is used.</p>
     */
    inline void SetEventBusName(Aws::String&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::move(value); }

    /**
     * <p>The name of the event bus to revoke permissions for. If you omit this, the
     * default event bus is used.</p>
     */
    inline void SetEventBusName(const char* value) { m_eventBusNameHasBeenSet = true; m_eventBusName.assign(value); }

    /**
     * <p>The name of the event bus to revoke permissions for. If you omit this, the
     * default event bus is used.</p>
     */
    inline RemovePermissionRequest& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}

    /**
     * <p>The name of the event bus to revoke permissions for. If you omit this, the
     * default event bus is used.</p>
     */
    inline RemovePermissionRequest& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}

    /**
     * <p>The name of the event bus to revoke permissions for. If you omit this, the
     * default event bus is used.</p>
     */
    inline RemovePermissionRequest& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}

  private:

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    bool m_removeAllPermissions;
    bool m_removeAllPermissionsHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
