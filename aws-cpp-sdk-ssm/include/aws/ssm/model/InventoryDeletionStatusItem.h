/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryDeletionStatusItem">AWS
   * API Reference</a></p>
   */
  class InventoryDeletionStatusItem
  {
  public:
    AWS_SSM_API InventoryDeletionStatusItem();
    AWS_SSM_API InventoryDeletionStatusItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryDeletionStatusItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline const Aws::String& GetDeletionId() const{ return m_deletionId; }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline bool DeletionIdHasBeenSet() const { return m_deletionIdHasBeenSet; }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline void SetDeletionId(const Aws::String& value) { m_deletionIdHasBeenSet = true; m_deletionId = value; }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline void SetDeletionId(Aws::String&& value) { m_deletionIdHasBeenSet = true; m_deletionId = std::move(value); }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline void SetDeletionId(const char* value) { m_deletionIdHasBeenSet = true; m_deletionId.assign(value); }

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionId(const Aws::String& value) { SetDeletionId(value); return *this;}

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionId(Aws::String&& value) { SetDeletionId(std::move(value)); return *this;}

    /**
     * <p>The deletion ID returned by the <code>DeleteInventory</code> operation.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionId(const char* value) { SetDeletionId(value); return *this;}


    /**
     * <p>The name of the inventory data type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the inventory data type.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

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
    inline bool DeletionStartTimeHasBeenSet() const { return m_deletionStartTimeHasBeenSet; }

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
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

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
    inline bool LastStatusMessageHasBeenSet() const { return m_lastStatusMessageHasBeenSet; }

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
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete">Understanding
     * the delete inventory summary</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline const InventoryDeletionSummary& GetDeletionSummary() const{ return m_deletionSummary; }

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete">Understanding
     * the delete inventory summary</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline bool DeletionSummaryHasBeenSet() const { return m_deletionSummaryHasBeenSet; }

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete">Understanding
     * the delete inventory summary</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline void SetDeletionSummary(const InventoryDeletionSummary& value) { m_deletionSummaryHasBeenSet = true; m_deletionSummary = value; }

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete">Understanding
     * the delete inventory summary</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline void SetDeletionSummary(InventoryDeletionSummary&& value) { m_deletionSummaryHasBeenSet = true; m_deletionSummary = std::move(value); }

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete">Understanding
     * the delete inventory summary</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionSummary(const InventoryDeletionSummary& value) { SetDeletionSummary(value); return *this;}

    /**
     * <p>Information about the delete operation. For more information about this
     * summary, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete">Understanding
     * the delete inventory summary</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline InventoryDeletionStatusItem& WithDeletionSummary(InventoryDeletionSummary&& value) { SetDeletionSummary(std::move(value)); return *this;}


    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTime() const{ return m_lastStatusUpdateTime; }

    /**
     * <p>The UTC timestamp of when the last status report.</p>
     */
    inline bool LastStatusUpdateTimeHasBeenSet() const { return m_lastStatusUpdateTimeHasBeenSet; }

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
    bool m_deletionIdHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::Utils::DateTime m_deletionStartTime;
    bool m_deletionStartTimeHasBeenSet = false;

    InventoryDeletionStatus m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastStatusMessage;
    bool m_lastStatusMessageHasBeenSet = false;

    InventoryDeletionSummary m_deletionSummary;
    bool m_deletionSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusUpdateTime;
    bool m_lastStatusUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
