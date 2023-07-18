﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventoryDeletionSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DeleteInventoryResult
  {
  public:
    DeleteInventoryResult();
    DeleteInventoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteInventoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Every <code>DeleteInventory</code> operation is assigned a unique ID. This
     * option returns a unique ID. You can use this ID to query the status of a delete
     * operation. This option is useful for ensuring that a delete operation has
     * completed before you begin other operations. </p>
     */
    inline const Aws::String& GetDeletionId() const{ return m_deletionId; }

    /**
     * <p>Every <code>DeleteInventory</code> operation is assigned a unique ID. This
     * option returns a unique ID. You can use this ID to query the status of a delete
     * operation. This option is useful for ensuring that a delete operation has
     * completed before you begin other operations. </p>
     */
    inline void SetDeletionId(const Aws::String& value) { m_deletionId = value; }

    /**
     * <p>Every <code>DeleteInventory</code> operation is assigned a unique ID. This
     * option returns a unique ID. You can use this ID to query the status of a delete
     * operation. This option is useful for ensuring that a delete operation has
     * completed before you begin other operations. </p>
     */
    inline void SetDeletionId(Aws::String&& value) { m_deletionId = std::move(value); }

    /**
     * <p>Every <code>DeleteInventory</code> operation is assigned a unique ID. This
     * option returns a unique ID. You can use this ID to query the status of a delete
     * operation. This option is useful for ensuring that a delete operation has
     * completed before you begin other operations. </p>
     */
    inline void SetDeletionId(const char* value) { m_deletionId.assign(value); }

    /**
     * <p>Every <code>DeleteInventory</code> operation is assigned a unique ID. This
     * option returns a unique ID. You can use this ID to query the status of a delete
     * operation. This option is useful for ensuring that a delete operation has
     * completed before you begin other operations. </p>
     */
    inline DeleteInventoryResult& WithDeletionId(const Aws::String& value) { SetDeletionId(value); return *this;}

    /**
     * <p>Every <code>DeleteInventory</code> operation is assigned a unique ID. This
     * option returns a unique ID. You can use this ID to query the status of a delete
     * operation. This option is useful for ensuring that a delete operation has
     * completed before you begin other operations. </p>
     */
    inline DeleteInventoryResult& WithDeletionId(Aws::String&& value) { SetDeletionId(std::move(value)); return *this;}

    /**
     * <p>Every <code>DeleteInventory</code> operation is assigned a unique ID. This
     * option returns a unique ID. You can use this ID to query the status of a delete
     * operation. This option is useful for ensuring that a delete operation has
     * completed before you begin other operations. </p>
     */
    inline DeleteInventoryResult& WithDeletionId(const char* value) { SetDeletionId(value); return *this;}


    /**
     * <p>The name of the inventory data type specified in the request.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the inventory data type specified in the request.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }

    /**
     * <p>The name of the inventory data type specified in the request.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }

    /**
     * <p>The name of the inventory data type specified in the request.</p>
     */
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }

    /**
     * <p>The name of the inventory data type specified in the request.</p>
     */
    inline DeleteInventoryResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the inventory data type specified in the request.</p>
     */
    inline DeleteInventoryResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the inventory data type specified in the request.</p>
     */
    inline DeleteInventoryResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>A summary of the delete operation. For more information about this summary,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete-summary">Deleting
     * custom inventory</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const InventoryDeletionSummary& GetDeletionSummary() const{ return m_deletionSummary; }

    /**
     * <p>A summary of the delete operation. For more information about this summary,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete-summary">Deleting
     * custom inventory</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetDeletionSummary(const InventoryDeletionSummary& value) { m_deletionSummary = value; }

    /**
     * <p>A summary of the delete operation. For more information about this summary,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete-summary">Deleting
     * custom inventory</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetDeletionSummary(InventoryDeletionSummary&& value) { m_deletionSummary = std::move(value); }

    /**
     * <p>A summary of the delete operation. For more information about this summary,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete-summary">Deleting
     * custom inventory</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline DeleteInventoryResult& WithDeletionSummary(const InventoryDeletionSummary& value) { SetDeletionSummary(value); return *this;}

    /**
     * <p>A summary of the delete operation. For more information about this summary,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-custom.html#sysman-inventory-delete-summary">Deleting
     * custom inventory</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline DeleteInventoryResult& WithDeletionSummary(InventoryDeletionSummary&& value) { SetDeletionSummary(std::move(value)); return *this;}

  private:

    Aws::String m_deletionId;

    Aws::String m_typeName;

    InventoryDeletionSummary m_deletionSummary;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
