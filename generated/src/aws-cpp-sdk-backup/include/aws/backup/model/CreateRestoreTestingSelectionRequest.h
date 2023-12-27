/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreTestingSelectionForCreate.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class CreateRestoreTestingSelectionRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateRestoreTestingSelectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRestoreTestingSelection"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>This is an optional unique string that identifies the request and allows
     * failed requests to be retried without the risk of running the operation twice.
     * If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>This is an optional unique string that identifies the request and allows
     * failed requests to be retried without the risk of running the operation twice.
     * If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>This is an optional unique string that identifies the request and allows
     * failed requests to be retried without the risk of running the operation twice.
     * If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>This is an optional unique string that identifies the request and allows
     * failed requests to be retried without the risk of running the operation twice.
     * If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>This is an optional unique string that identifies the request and allows
     * failed requests to be retried without the risk of running the operation twice.
     * If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>This is an optional unique string that identifies the request and allows
     * failed requests to be retried without the risk of running the operation twice.
     * If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline CreateRestoreTestingSelectionRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>This is an optional unique string that identifies the request and allows
     * failed requests to be retried without the risk of running the operation twice.
     * If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline CreateRestoreTestingSelectionRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>This is an optional unique string that identifies the request and allows
     * failed requests to be retried without the risk of running the operation twice.
     * If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline CreateRestoreTestingSelectionRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>Input the restore testing plan name that was returned from the related
     * CreateRestoreTestingPlan request.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>Input the restore testing plan name that was returned from the related
     * CreateRestoreTestingPlan request.</p>
     */
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }

    /**
     * <p>Input the restore testing plan name that was returned from the related
     * CreateRestoreTestingPlan request.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = value; }

    /**
     * <p>Input the restore testing plan name that was returned from the related
     * CreateRestoreTestingPlan request.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>Input the restore testing plan name that was returned from the related
     * CreateRestoreTestingPlan request.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName.assign(value); }

    /**
     * <p>Input the restore testing plan name that was returned from the related
     * CreateRestoreTestingPlan request.</p>
     */
    inline CreateRestoreTestingSelectionRequest& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>Input the restore testing plan name that was returned from the related
     * CreateRestoreTestingPlan request.</p>
     */
    inline CreateRestoreTestingSelectionRequest& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>Input the restore testing plan name that was returned from the related
     * CreateRestoreTestingPlan request.</p>
     */
    inline CreateRestoreTestingSelectionRequest& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


    /**
     * <p>This consists of <code>RestoreTestingSelectionName</code>,
     * <code>ProtectedResourceType</code>, and one of the following:</p> <ul> <li> <p>
     * <code>ProtectedResourceArns</code> </p> </li> <li> <p>
     * <code>ProtectedResourceConditions</code> </p> </li> </ul> <p>Each protected
     * resource type can have one single value.</p> <p>A restore testing selection can
     * include a wildcard value ("*") for <code>ProtectedResourceArns</code> along with
     * <code>ProtectedResourceConditions</code>. Alternatively, you can include up to
     * 30 specific protected resource ARNs in <code>ProtectedResourceArns</code>.</p>
     */
    inline const RestoreTestingSelectionForCreate& GetRestoreTestingSelection() const{ return m_restoreTestingSelection; }

    /**
     * <p>This consists of <code>RestoreTestingSelectionName</code>,
     * <code>ProtectedResourceType</code>, and one of the following:</p> <ul> <li> <p>
     * <code>ProtectedResourceArns</code> </p> </li> <li> <p>
     * <code>ProtectedResourceConditions</code> </p> </li> </ul> <p>Each protected
     * resource type can have one single value.</p> <p>A restore testing selection can
     * include a wildcard value ("*") for <code>ProtectedResourceArns</code> along with
     * <code>ProtectedResourceConditions</code>. Alternatively, you can include up to
     * 30 specific protected resource ARNs in <code>ProtectedResourceArns</code>.</p>
     */
    inline bool RestoreTestingSelectionHasBeenSet() const { return m_restoreTestingSelectionHasBeenSet; }

    /**
     * <p>This consists of <code>RestoreTestingSelectionName</code>,
     * <code>ProtectedResourceType</code>, and one of the following:</p> <ul> <li> <p>
     * <code>ProtectedResourceArns</code> </p> </li> <li> <p>
     * <code>ProtectedResourceConditions</code> </p> </li> </ul> <p>Each protected
     * resource type can have one single value.</p> <p>A restore testing selection can
     * include a wildcard value ("*") for <code>ProtectedResourceArns</code> along with
     * <code>ProtectedResourceConditions</code>. Alternatively, you can include up to
     * 30 specific protected resource ARNs in <code>ProtectedResourceArns</code>.</p>
     */
    inline void SetRestoreTestingSelection(const RestoreTestingSelectionForCreate& value) { m_restoreTestingSelectionHasBeenSet = true; m_restoreTestingSelection = value; }

    /**
     * <p>This consists of <code>RestoreTestingSelectionName</code>,
     * <code>ProtectedResourceType</code>, and one of the following:</p> <ul> <li> <p>
     * <code>ProtectedResourceArns</code> </p> </li> <li> <p>
     * <code>ProtectedResourceConditions</code> </p> </li> </ul> <p>Each protected
     * resource type can have one single value.</p> <p>A restore testing selection can
     * include a wildcard value ("*") for <code>ProtectedResourceArns</code> along with
     * <code>ProtectedResourceConditions</code>. Alternatively, you can include up to
     * 30 specific protected resource ARNs in <code>ProtectedResourceArns</code>.</p>
     */
    inline void SetRestoreTestingSelection(RestoreTestingSelectionForCreate&& value) { m_restoreTestingSelectionHasBeenSet = true; m_restoreTestingSelection = std::move(value); }

    /**
     * <p>This consists of <code>RestoreTestingSelectionName</code>,
     * <code>ProtectedResourceType</code>, and one of the following:</p> <ul> <li> <p>
     * <code>ProtectedResourceArns</code> </p> </li> <li> <p>
     * <code>ProtectedResourceConditions</code> </p> </li> </ul> <p>Each protected
     * resource type can have one single value.</p> <p>A restore testing selection can
     * include a wildcard value ("*") for <code>ProtectedResourceArns</code> along with
     * <code>ProtectedResourceConditions</code>. Alternatively, you can include up to
     * 30 specific protected resource ARNs in <code>ProtectedResourceArns</code>.</p>
     */
    inline CreateRestoreTestingSelectionRequest& WithRestoreTestingSelection(const RestoreTestingSelectionForCreate& value) { SetRestoreTestingSelection(value); return *this;}

    /**
     * <p>This consists of <code>RestoreTestingSelectionName</code>,
     * <code>ProtectedResourceType</code>, and one of the following:</p> <ul> <li> <p>
     * <code>ProtectedResourceArns</code> </p> </li> <li> <p>
     * <code>ProtectedResourceConditions</code> </p> </li> </ul> <p>Each protected
     * resource type can have one single value.</p> <p>A restore testing selection can
     * include a wildcard value ("*") for <code>ProtectedResourceArns</code> along with
     * <code>ProtectedResourceConditions</code>. Alternatively, you can include up to
     * 30 specific protected resource ARNs in <code>ProtectedResourceArns</code>.</p>
     */
    inline CreateRestoreTestingSelectionRequest& WithRestoreTestingSelection(RestoreTestingSelectionForCreate&& value) { SetRestoreTestingSelection(std::move(value)); return *this;}

  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;

    RestoreTestingSelectionForCreate m_restoreTestingSelection;
    bool m_restoreTestingSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
