/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/VirtualObject.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class DeleteObjectsOnCancelRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API DeleteObjectsOnCancelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteObjectsOnCancel"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The Glue data catalog that contains the governed table. Defaults to the
     * current account ID.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The Glue data catalog that contains the governed table. Defaults to the
     * current account ID.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The Glue data catalog that contains the governed table. Defaults to the
     * current account ID.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The Glue data catalog that contains the governed table. Defaults to the
     * current account ID.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The Glue data catalog that contains the governed table. Defaults to the
     * current account ID.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The Glue data catalog that contains the governed table. Defaults to the
     * current account ID.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The Glue data catalog that contains the governed table. Defaults to the
     * current account ID.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The Glue data catalog that contains the governed table. Defaults to the
     * current account ID.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The database that contains the governed table.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database that contains the governed table.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database that contains the governed table.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database that contains the governed table.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database that contains the governed table.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database that contains the governed table.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database that contains the governed table.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database that contains the governed table.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the governed table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the governed table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the governed table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the governed table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the governed table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the governed table.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the governed table.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the governed table.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>ID of the transaction that the writes occur in.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>ID of the transaction that the writes occur in.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>ID of the transaction that the writes occur in.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>ID of the transaction that the writes occur in.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>ID of the transaction that the writes occur in.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>ID of the transaction that the writes occur in.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>ID of the transaction that the writes occur in.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>ID of the transaction that the writes occur in.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>A list of VirtualObject structures, which indicates the Amazon S3 objects to
     * be deleted if the transaction cancels.</p>
     */
    inline const Aws::Vector<VirtualObject>& GetObjects() const{ return m_objects; }

    /**
     * <p>A list of VirtualObject structures, which indicates the Amazon S3 objects to
     * be deleted if the transaction cancels.</p>
     */
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }

    /**
     * <p>A list of VirtualObject structures, which indicates the Amazon S3 objects to
     * be deleted if the transaction cancels.</p>
     */
    inline void SetObjects(const Aws::Vector<VirtualObject>& value) { m_objectsHasBeenSet = true; m_objects = value; }

    /**
     * <p>A list of VirtualObject structures, which indicates the Amazon S3 objects to
     * be deleted if the transaction cancels.</p>
     */
    inline void SetObjects(Aws::Vector<VirtualObject>&& value) { m_objectsHasBeenSet = true; m_objects = std::move(value); }

    /**
     * <p>A list of VirtualObject structures, which indicates the Amazon S3 objects to
     * be deleted if the transaction cancels.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithObjects(const Aws::Vector<VirtualObject>& value) { SetObjects(value); return *this;}

    /**
     * <p>A list of VirtualObject structures, which indicates the Amazon S3 objects to
     * be deleted if the transaction cancels.</p>
     */
    inline DeleteObjectsOnCancelRequest& WithObjects(Aws::Vector<VirtualObject>&& value) { SetObjects(std::move(value)); return *this;}

    /**
     * <p>A list of VirtualObject structures, which indicates the Amazon S3 objects to
     * be deleted if the transaction cancels.</p>
     */
    inline DeleteObjectsOnCancelRequest& AddObjects(const VirtualObject& value) { m_objectsHasBeenSet = true; m_objects.push_back(value); return *this; }

    /**
     * <p>A list of VirtualObject structures, which indicates the Amazon S3 objects to
     * be deleted if the transaction cancels.</p>
     */
    inline DeleteObjectsOnCancelRequest& AddObjects(VirtualObject&& value) { m_objectsHasBeenSet = true; m_objects.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::Vector<VirtualObject> m_objects;
    bool m_objectsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
