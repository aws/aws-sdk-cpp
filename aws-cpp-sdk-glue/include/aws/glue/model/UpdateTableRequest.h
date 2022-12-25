/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateTableRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTable"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline UpdateTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline UpdateTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline UpdateTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline UpdateTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline UpdateTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline UpdateTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline const TableInput& GetTableInput() const{ return m_tableInput; }

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline bool TableInputHasBeenSet() const { return m_tableInputHasBeenSet; }

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline void SetTableInput(const TableInput& value) { m_tableInputHasBeenSet = true; m_tableInput = value; }

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline void SetTableInput(TableInput&& value) { m_tableInputHasBeenSet = true; m_tableInput = std::move(value); }

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline UpdateTableRequest& WithTableInput(const TableInput& value) { SetTableInput(value); return *this;}

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline UpdateTableRequest& WithTableInput(TableInput&& value) { SetTableInput(std::move(value)); return *this;}


    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. However, if <code>skipArchive</code> is set to
     * true, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline bool GetSkipArchive() const{ return m_skipArchive; }

    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. However, if <code>skipArchive</code> is set to
     * true, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline bool SkipArchiveHasBeenSet() const { return m_skipArchiveHasBeenSet; }

    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. However, if <code>skipArchive</code> is set to
     * true, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline void SetSkipArchive(bool value) { m_skipArchiveHasBeenSet = true; m_skipArchive = value; }

    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. However, if <code>skipArchive</code> is set to
     * true, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline UpdateTableRequest& WithSkipArchive(bool value) { SetSkipArchive(value); return *this;}


    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline UpdateTableRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline UpdateTableRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline UpdateTableRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline UpdateTableRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline UpdateTableRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline UpdateTableRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    TableInput m_tableInput;
    bool m_tableInputHasBeenSet = false;

    bool m_skipArchive;
    bool m_skipArchiveHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
