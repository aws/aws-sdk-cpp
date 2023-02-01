/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/DatasetKind.h>
#include <aws/finspace-data/model/SchemaUnion.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   * The request for an UpdateDataset operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdateDatasetRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDatasetRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API UpdateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataset"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateDatasetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateDatasetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateDatasetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The unique identifier for the Dataset to update.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the Dataset to update.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Dataset to update.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the Dataset to update.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the Dataset to update.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the Dataset to update.</p>
     */
    inline UpdateDatasetRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the Dataset to update.</p>
     */
    inline UpdateDatasetRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Dataset to update.</p>
     */
    inline UpdateDatasetRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>A display title for the Dataset.</p>
     */
    inline const Aws::String& GetDatasetTitle() const{ return m_datasetTitle; }

    /**
     * <p>A display title for the Dataset.</p>
     */
    inline bool DatasetTitleHasBeenSet() const { return m_datasetTitleHasBeenSet; }

    /**
     * <p>A display title for the Dataset.</p>
     */
    inline void SetDatasetTitle(const Aws::String& value) { m_datasetTitleHasBeenSet = true; m_datasetTitle = value; }

    /**
     * <p>A display title for the Dataset.</p>
     */
    inline void SetDatasetTitle(Aws::String&& value) { m_datasetTitleHasBeenSet = true; m_datasetTitle = std::move(value); }

    /**
     * <p>A display title for the Dataset.</p>
     */
    inline void SetDatasetTitle(const char* value) { m_datasetTitleHasBeenSet = true; m_datasetTitle.assign(value); }

    /**
     * <p>A display title for the Dataset.</p>
     */
    inline UpdateDatasetRequest& WithDatasetTitle(const Aws::String& value) { SetDatasetTitle(value); return *this;}

    /**
     * <p>A display title for the Dataset.</p>
     */
    inline UpdateDatasetRequest& WithDatasetTitle(Aws::String&& value) { SetDatasetTitle(std::move(value)); return *this;}

    /**
     * <p>A display title for the Dataset.</p>
     */
    inline UpdateDatasetRequest& WithDatasetTitle(const char* value) { SetDatasetTitle(value); return *this;}


    /**
     * <p>The format in which the Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline const DatasetKind& GetKind() const{ return m_kind; }

    /**
     * <p>The format in which the Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }

    /**
     * <p>The format in which the Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline void SetKind(const DatasetKind& value) { m_kindHasBeenSet = true; m_kind = value; }

    /**
     * <p>The format in which the Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline void SetKind(DatasetKind&& value) { m_kindHasBeenSet = true; m_kind = std::move(value); }

    /**
     * <p>The format in which the Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline UpdateDatasetRequest& WithKind(const DatasetKind& value) { SetKind(value); return *this;}

    /**
     * <p>The format in which the Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline UpdateDatasetRequest& WithKind(DatasetKind&& value) { SetKind(std::move(value)); return *this;}


    /**
     * <p>A description for the Dataset.</p>
     */
    inline const Aws::String& GetDatasetDescription() const{ return m_datasetDescription; }

    /**
     * <p>A description for the Dataset.</p>
     */
    inline bool DatasetDescriptionHasBeenSet() const { return m_datasetDescriptionHasBeenSet; }

    /**
     * <p>A description for the Dataset.</p>
     */
    inline void SetDatasetDescription(const Aws::String& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = value; }

    /**
     * <p>A description for the Dataset.</p>
     */
    inline void SetDatasetDescription(Aws::String&& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = std::move(value); }

    /**
     * <p>A description for the Dataset.</p>
     */
    inline void SetDatasetDescription(const char* value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription.assign(value); }

    /**
     * <p>A description for the Dataset.</p>
     */
    inline UpdateDatasetRequest& WithDatasetDescription(const Aws::String& value) { SetDatasetDescription(value); return *this;}

    /**
     * <p>A description for the Dataset.</p>
     */
    inline UpdateDatasetRequest& WithDatasetDescription(Aws::String&& value) { SetDatasetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Dataset.</p>
     */
    inline UpdateDatasetRequest& WithDatasetDescription(const char* value) { SetDatasetDescription(value); return *this;}


    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline UpdateDatasetRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline UpdateDatasetRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline UpdateDatasetRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline const SchemaUnion& GetSchemaDefinition() const{ return m_schemaDefinition; }

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline void SetSchemaDefinition(const SchemaUnion& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = value; }

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline void SetSchemaDefinition(SchemaUnion&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::move(value); }

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline UpdateDatasetRequest& WithSchemaDefinition(const SchemaUnion& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline UpdateDatasetRequest& WithSchemaDefinition(SchemaUnion&& value) { SetSchemaDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    Aws::String m_datasetTitle;
    bool m_datasetTitleHasBeenSet = false;

    DatasetKind m_kind;
    bool m_kindHasBeenSet = false;

    Aws::String m_datasetDescription;
    bool m_datasetDescriptionHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    SchemaUnion m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
