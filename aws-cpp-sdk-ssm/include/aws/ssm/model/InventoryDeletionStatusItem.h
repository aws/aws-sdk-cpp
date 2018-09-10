﻿/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/InventoryDeletionStatus.h>
#include <aws/ssm/model/InventoryDeletionSummary.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Status information returned by the <code>DeleteInventory</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryDeletionStatusItem">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InventoryDeletionStatusItem
  {
  public:
    InventoryDeletionStatusItem();
    InventoryDeletionStatusItem(Aws::Utils::Json::JsonView jsonValue);
    InventoryDeletionStatusItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> action.</p>
     */
    inline const Aws::String& GetDeletionId() const{ return m_deletionId; }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> action.</p>
     */
    inline void SetDeletionId(const Aws::String& value) { m_deletionIdHasBeenSet = true; m_deletionId = value; }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> action.</p>
     */
    inline void SetDeletionId(Aws::String&& value) { m_deletionIdHasBeenSet = true; m_deletionId = std::move(value); }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> action.</p>
     */
    inline void SetDeletionId(const char* value) { m_deletionIdHasBeenSet = true; m_deletionId.assign(value); }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> action.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionId(const Aws::String& value) { SetDeletionId(value); return *this;}

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> action.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionId(Aws::String&& value) { SetDeletionId(std::move(value)); return *this;}

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> action.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionId(const char* value) { SetDeletionId(value); return *this;}


    /**
     * <p>The name of the inventory data type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the inventory data type.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the inventory data type.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the inventory data type.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the inventory data type.</p>
     */
    inline InventoryDeletionStatusItem& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the inventory data type.</p>
     */
    inline InventoryDeletionStatusItem& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the inventory data type.</p>
     */
    inline InventoryDeletionStatusItem& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The UTC timestamp when the delete operation started.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionStartTime() const{ return m_deletionStartTime; }

    /**
     * <p>The UTC timestamp when the delete operation started.</p>
     */
    inline void SetDeletionStartTime(const Aws::Utils::DateTime& value) { m_deletionStartTimeHasBeenSet = true; m_deletionStartTime = value; }

    /**
     * <p>The UTC timestamp when the delete operation started.</p>
     */
    inline void SetDeletionStartTime(Aws::Utils::DateTime&& value) { m_deletionStartTimeHasBeenSet = true; m_deletionStartTime = std::move(value); }

    /**
     * <p>The UTC timestamp when the delete operation started.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionStartTime(const Aws::Utils::DateTime& value) { SetDeletionStartTime(value); return *this;}

    /**
     * <p>The UTC timestamp when the delete operation started.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionStartTime(Aws::Utils::DateTime&& value) { SetDeletionStartTime(std::move(value)); return *this;}


    /**
     * <p>The status of the operation. Possible values are InProgress and Complete.</p>
     */
    inline const InventoryDeletionStatus& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>The status of the operation. Possible values are InProgress and Complete.</p>
     */
    inline void SetLastStatus(const InventoryDeletionStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>The status of the operation. Possible values are InProgress and Complete.</p>
     */
    inline void SetLastStatus(InventoryDeletionStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>The status of the operation. Possible values are InProgress and Complete.</p>
     */
    inline InventoryDeletionStatusItem& WithLastStatus(const InventoryDeletionStatus& value) { SetLastStatus(value); return *this;}

    /**
     * <p>The status of the operation. Possible values are InProgress and Complete.</p>
     */
    inline InventoryDeletionStatusItem& WithLastStatus(InventoryDeletionStatus&& value) { SetLastStatus(std::move(value)); return *this;}


    /**
     * <p>Information about the status.</p>
     */
    inline const Aws::String& GetLastStatusMessage() const{ return m_lastStatusMessage; }

    /**
     * <p>Information about the status.</p>
     */
    inline void SetLastStatusMessage(const Aws::String& value) { m_lastStatusMessageHasBeenSet = true; m_lastStatusMessage = value; }

    /**
     * <p>Information about the status.</p>
     */
    inline void SetLastStatusMessage(Aws::String&& value) { m_lastStatusMessageHasBeenSet = true; m_lastStatusMessage = std::move(value); }

    /**
     * <p>Information about the status.</p>
     */
    inline void SetLastStatusMessage(const char* value) { m_lastStatusMessageHasBeenSet = true; m_lastStatusMessage.assign(value); }

    /**
     * <p>Information about the status.</p>
     */
    inline InventoryDeletionStatusItem& WithLastStatusMessage(const Aws::String& value) { SetLastStatusMessage(value); return *this;}

    /**
     * <p>Information about the status.</p>
     */
    inline InventoryDeletionStatusItem& WithLastStatusMessage(Aws::String&& value) { SetLastStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Information about the status.</p>
     */
    inline InventoryDeletionStatusItem& WithLastStatusMessage(const char* value) { SetLastStatusMessage(value); return *this;}


    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-delete.html#sysman-inventory-delete-summary">Understanding
     * the Delete Inventory Summary</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p>
     */
    inline const InventoryDeletionSummary& GetDeletionSummary() const{ return m_deletionSummary; }

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-delete.html#sysman-inventory-delete-summary">Understanding
     * the Delete Inventory Summary</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetDeletionSummary(const InventoryDeletionSummary& value) { m_deletionSummaryHasBeenSet = true; m_deletionSummary = value; }

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-delete.html#sysman-inventory-delete-summary">Understanding
     * the Delete Inventory Summary</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetDeletionSummary(InventoryDeletionSummary&& value) { m_deletionSummaryHasBeenSet = true; m_deletionSummary = std::move(value); }

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-delete.html#sysman-inventory-delete-summary">Understanding
     * the Delete Inventory Summary</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionSummary(const InventoryDeletionSummary& value) { SetDeletionSummary(value); return *this;}

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-delete.html#sysman-inventory-delete-summary">Understanding
     * the Delete Inventory Summary</a> in the <i>AWS Systems Manager User
     * Guide</i>.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionSummary(InventoryDeletionSummary&& value) { SetDeletionSummary(std::move(value)); return *this;}


    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTime() const{ return m_lastStatusUpdateTime; }

    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline void SetLastStatusUpdateTime(const Aws::Utils::DateTime& value) { m_lastStatusUpdateTimeHasBeenSet = true; m_lastStatusUpdateTime = value; }

    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline void SetLastStatusUpdateTime(Aws::Utils::DateTime&& value) { m_lastStatusUpdateTimeHasBeenSet = true; m_lastStatusUpdateTime = std::move(value); }

    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline InventoryDeletionStatusItem& WithLastStatusUpdateTime(const Aws::Utils::DateTime& value) { SetLastStatusUpdateTime(value); return *this;}

    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline InventoryDeletionStatusItem& WithLastStatusUpdateTime(Aws::Utils::DateTime&& value) { SetLastStatusUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_deletionId;
    bool m_deletionIdHasBeenSet;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::Utils::DateTime m_deletionStartTime;
    bool m_deletionStartTimeHasBeenSet;

    InventoryDeletionStatus m_lastStatus;
    bool m_lastStatusHasBeenSet;

    Aws::String m_lastStatusMessage;
    bool m_lastStatusMessageHasBeenSet;

    InventoryDeletionSummary m_deletionSummary;
    bool m_deletionSummaryHasBeenSet;

    Aws::Utils::DateTime m_lastStatusUpdateTime;
    bool m_lastStatusUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
