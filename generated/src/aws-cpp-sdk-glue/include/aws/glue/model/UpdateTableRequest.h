﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableInput.h>
#include <aws/glue/model/ViewUpdateAction.h>
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


    ///@{
    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline UpdateTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline UpdateTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline UpdateTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline UpdateTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline UpdateTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline UpdateTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline const TableInput& GetTableInput() const{ return m_tableInput; }
    inline bool TableInputHasBeenSet() const { return m_tableInputHasBeenSet; }
    inline void SetTableInput(const TableInput& value) { m_tableInputHasBeenSet = true; m_tableInput = value; }
    inline void SetTableInput(TableInput&& value) { m_tableInputHasBeenSet = true; m_tableInput = std::move(value); }
    inline UpdateTableRequest& WithTableInput(const TableInput& value) { SetTableInput(value); return *this;}
    inline UpdateTableRequest& WithTableInput(TableInput&& value) { SetTableInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. However, if <code>skipArchive</code> is set to
     * true, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline bool GetSkipArchive() const{ return m_skipArchive; }
    inline bool SkipArchiveHasBeenSet() const { return m_skipArchiveHasBeenSet; }
    inline void SetSkipArchive(bool value) { m_skipArchiveHasBeenSet = true; m_skipArchive = value; }
    inline UpdateTableRequest& WithSkipArchive(bool value) { SetSkipArchive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline UpdateTableRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline UpdateTableRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline UpdateTableRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline UpdateTableRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline UpdateTableRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline UpdateTableRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to be performed when updating the view.</p>
     */
    inline const ViewUpdateAction& GetViewUpdateAction() const{ return m_viewUpdateAction; }
    inline bool ViewUpdateActionHasBeenSet() const { return m_viewUpdateActionHasBeenSet; }
    inline void SetViewUpdateAction(const ViewUpdateAction& value) { m_viewUpdateActionHasBeenSet = true; m_viewUpdateAction = value; }
    inline void SetViewUpdateAction(ViewUpdateAction&& value) { m_viewUpdateActionHasBeenSet = true; m_viewUpdateAction = std::move(value); }
    inline UpdateTableRequest& WithViewUpdateAction(const ViewUpdateAction& value) { SetViewUpdateAction(value); return *this;}
    inline UpdateTableRequest& WithViewUpdateAction(ViewUpdateAction&& value) { SetViewUpdateAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that can be set to true to ignore matching storage descriptor and
     * subobject matching requirements.</p>
     */
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline UpdateTableRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
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

    ViewUpdateAction m_viewUpdateAction;
    bool m_viewUpdateActionHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
