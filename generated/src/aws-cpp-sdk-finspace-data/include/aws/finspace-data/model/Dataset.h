/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/DatasetKind.h>
#include <aws/finspace-data/model/DatasetOwnerInfo.h>
#include <aws/finspace-data/model/SchemaUnion.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>The structure for a Dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/Dataset">AWS
   * API Reference</a></p>
   */
  class Dataset
  {
  public:
    AWS_FINSPACEDATA_API Dataset() = default;
    AWS_FINSPACEDATA_API Dataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const { return m_datasetId; }
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
    template<typename DatasetIdT = Aws::String>
    void SetDatasetId(DatasetIdT&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::forward<DatasetIdT>(value); }
    template<typename DatasetIdT = Aws::String>
    Dataset& WithDatasetId(DatasetIdT&& value) { SetDatasetId(std::forward<DatasetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    Dataset& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Display title for a Dataset.</p>
     */
    inline const Aws::String& GetDatasetTitle() const { return m_datasetTitle; }
    inline bool DatasetTitleHasBeenSet() const { return m_datasetTitleHasBeenSet; }
    template<typename DatasetTitleT = Aws::String>
    void SetDatasetTitle(DatasetTitleT&& value) { m_datasetTitleHasBeenSet = true; m_datasetTitle = std::forward<DatasetTitleT>(value); }
    template<typename DatasetTitleT = Aws::String>
    Dataset& WithDatasetTitle(DatasetTitleT&& value) { SetDatasetTitle(std::forward<DatasetTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline DatasetKind GetKind() const { return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    inline void SetKind(DatasetKind value) { m_kindHasBeenSet = true; m_kind = value; }
    inline Dataset& WithKind(DatasetKind value) { SetKind(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for a Dataset.</p>
     */
    inline const Aws::String& GetDatasetDescription() const { return m_datasetDescription; }
    inline bool DatasetDescriptionHasBeenSet() const { return m_datasetDescriptionHasBeenSet; }
    template<typename DatasetDescriptionT = Aws::String>
    void SetDatasetDescription(DatasetDescriptionT&& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = std::forward<DatasetDescriptionT>(value); }
    template<typename DatasetDescriptionT = Aws::String>
    Dataset& WithDatasetDescription(DatasetDescriptionT&& value) { SetDatasetDescription(std::forward<DatasetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contact information for a Dataset owner.</p>
     */
    inline const DatasetOwnerInfo& GetOwnerInfo() const { return m_ownerInfo; }
    inline bool OwnerInfoHasBeenSet() const { return m_ownerInfoHasBeenSet; }
    template<typename OwnerInfoT = DatasetOwnerInfo>
    void SetOwnerInfo(OwnerInfoT&& value) { m_ownerInfoHasBeenSet = true; m_ownerInfo = std::forward<OwnerInfoT>(value); }
    template<typename OwnerInfoT = DatasetOwnerInfo>
    Dataset& WithOwnerInfo(OwnerInfoT&& value) { SetOwnerInfo(std::forward<OwnerInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the Dataset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline Dataset& WithCreateTime(long long value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the Dataset was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline Dataset& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline const SchemaUnion& GetSchemaDefinition() const { return m_schemaDefinition; }
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }
    template<typename SchemaDefinitionT = SchemaUnion>
    void SetSchemaDefinition(SchemaDefinitionT&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::forward<SchemaDefinitionT>(value); }
    template<typename SchemaDefinitionT = SchemaUnion>
    Dataset& WithSchemaDefinition(SchemaDefinitionT&& value) { SetSchemaDefinition(std::forward<SchemaDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    Dataset& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetTitle;
    bool m_datasetTitleHasBeenSet = false;

    DatasetKind m_kind{DatasetKind::NOT_SET};
    bool m_kindHasBeenSet = false;

    Aws::String m_datasetDescription;
    bool m_datasetDescriptionHasBeenSet = false;

    DatasetOwnerInfo m_ownerInfo;
    bool m_ownerInfoHasBeenSet = false;

    long long m_createTime{0};
    bool m_createTimeHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    SchemaUnion m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
