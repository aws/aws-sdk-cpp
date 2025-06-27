/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableInput.h>
#include <aws/glue/model/ViewUpdateAction.h>
#include <aws/glue/model/UpdateOpenTableFormatInput.h>
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
    AWS_GLUE_API UpdateTableRequest() = default;

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
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    UpdateTableRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    UpdateTableRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the table within the specified database that will
     * be created in the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateTableRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline const TableInput& GetTableInput() const { return m_tableInput; }
    inline bool TableInputHasBeenSet() const { return m_tableInputHasBeenSet; }
    template<typename TableInputT = TableInput>
    void SetTableInput(TableInputT&& value) { m_tableInputHasBeenSet = true; m_tableInput = std::forward<TableInputT>(value); }
    template<typename TableInputT = TableInput>
    UpdateTableRequest& WithTableInput(TableInputT&& value) { SetTableInput(std::forward<TableInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. However, if <code>skipArchive</code> is set to
     * true, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline bool GetSkipArchive() const { return m_skipArchive; }
    inline bool SkipArchiveHasBeenSet() const { return m_skipArchiveHasBeenSet; }
    inline void SetSkipArchive(bool value) { m_skipArchiveHasBeenSet = true; m_skipArchive = value; }
    inline UpdateTableRequest& WithSkipArchive(bool value) { SetSkipArchive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction ID at which to update the table contents. </p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    UpdateTableRequest& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID at which to update the table contents. </p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    UpdateTableRequest& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to be performed when updating the view.</p>
     */
    inline ViewUpdateAction GetViewUpdateAction() const { return m_viewUpdateAction; }
    inline bool ViewUpdateActionHasBeenSet() const { return m_viewUpdateActionHasBeenSet; }
    inline void SetViewUpdateAction(ViewUpdateAction value) { m_viewUpdateActionHasBeenSet = true; m_viewUpdateAction = value; }
    inline UpdateTableRequest& WithViewUpdateAction(ViewUpdateAction value) { SetViewUpdateAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that can be set to true to ignore matching storage descriptor and
     * subobject matching requirements.</p>
     */
    inline bool GetForce() const { return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline UpdateTableRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}

    ///@{
    
    inline const UpdateOpenTableFormatInput& GetUpdateOpenTableFormatInput() const { return m_updateOpenTableFormatInput; }
    inline bool UpdateOpenTableFormatInputHasBeenSet() const { return m_updateOpenTableFormatInputHasBeenSet; }
    template<typename UpdateOpenTableFormatInputT = UpdateOpenTableFormatInput>
    void SetUpdateOpenTableFormatInput(UpdateOpenTableFormatInputT&& value) { m_updateOpenTableFormatInputHasBeenSet = true; m_updateOpenTableFormatInput = std::forward<UpdateOpenTableFormatInputT>(value); }
    template<typename UpdateOpenTableFormatInputT = UpdateOpenTableFormatInput>
    UpdateTableRequest& WithUpdateOpenTableFormatInput(UpdateOpenTableFormatInputT&& value) { SetUpdateOpenTableFormatInput(std::forward<UpdateOpenTableFormatInputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TableInput m_tableInput;
    bool m_tableInputHasBeenSet = false;

    bool m_skipArchive{false};
    bool m_skipArchiveHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    ViewUpdateAction m_viewUpdateAction{ViewUpdateAction::NOT_SET};
    bool m_viewUpdateActionHasBeenSet = false;

    bool m_force{false};
    bool m_forceHasBeenSet = false;

    UpdateOpenTableFormatInput m_updateOpenTableFormatInput;
    bool m_updateOpenTableFormatInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
