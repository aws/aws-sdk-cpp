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
    AWS_FINSPACEDATA_API Dataset();
    AWS_FINSPACEDATA_API Dataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline Dataset& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline Dataset& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>An identifier for a Dataset.</p>
     */
    inline Dataset& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline Dataset& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline Dataset& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline Dataset& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>Display title for a Dataset.</p>
     */
    inline const Aws::String& GetDatasetTitle() const{ return m_datasetTitle; }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline bool DatasetTitleHasBeenSet() const { return m_datasetTitleHasBeenSet; }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline void SetDatasetTitle(const Aws::String& value) { m_datasetTitleHasBeenSet = true; m_datasetTitle = value; }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline void SetDatasetTitle(Aws::String&& value) { m_datasetTitleHasBeenSet = true; m_datasetTitle = std::move(value); }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline void SetDatasetTitle(const char* value) { m_datasetTitleHasBeenSet = true; m_datasetTitle.assign(value); }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline Dataset& WithDatasetTitle(const Aws::String& value) { SetDatasetTitle(value); return *this;}

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline Dataset& WithDatasetTitle(Aws::String&& value) { SetDatasetTitle(std::move(value)); return *this;}

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline Dataset& WithDatasetTitle(const char* value) { SetDatasetTitle(value); return *this;}


    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline const DatasetKind& GetKind() const{ return m_kind; }

    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }

    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline void SetKind(const DatasetKind& value) { m_kindHasBeenSet = true; m_kind = value; }

    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline void SetKind(DatasetKind&& value) { m_kindHasBeenSet = true; m_kind = std::move(value); }

    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline Dataset& WithKind(const DatasetKind& value) { SetKind(value); return *this;}

    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline Dataset& WithKind(DatasetKind&& value) { SetKind(std::move(value)); return *this;}


    /**
     * <p>Description for a Dataset.</p>
     */
    inline const Aws::String& GetDatasetDescription() const{ return m_datasetDescription; }

    /**
     * <p>Description for a Dataset.</p>
     */
    inline bool DatasetDescriptionHasBeenSet() const { return m_datasetDescriptionHasBeenSet; }

    /**
     * <p>Description for a Dataset.</p>
     */
    inline void SetDatasetDescription(const Aws::String& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = value; }

    /**
     * <p>Description for a Dataset.</p>
     */
    inline void SetDatasetDescription(Aws::String&& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = std::move(value); }

    /**
     * <p>Description for a Dataset.</p>
     */
    inline void SetDatasetDescription(const char* value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription.assign(value); }

    /**
     * <p>Description for a Dataset.</p>
     */
    inline Dataset& WithDatasetDescription(const Aws::String& value) { SetDatasetDescription(value); return *this;}

    /**
     * <p>Description for a Dataset.</p>
     */
    inline Dataset& WithDatasetDescription(Aws::String&& value) { SetDatasetDescription(std::move(value)); return *this;}

    /**
     * <p>Description for a Dataset.</p>
     */
    inline Dataset& WithDatasetDescription(const char* value) { SetDatasetDescription(value); return *this;}


    /**
     * <p>Contact information for a Dataset owner.</p>
     */
    inline const DatasetOwnerInfo& GetOwnerInfo() const{ return m_ownerInfo; }

    /**
     * <p>Contact information for a Dataset owner.</p>
     */
    inline bool OwnerInfoHasBeenSet() const { return m_ownerInfoHasBeenSet; }

    /**
     * <p>Contact information for a Dataset owner.</p>
     */
    inline void SetOwnerInfo(const DatasetOwnerInfo& value) { m_ownerInfoHasBeenSet = true; m_ownerInfo = value; }

    /**
     * <p>Contact information for a Dataset owner.</p>
     */
    inline void SetOwnerInfo(DatasetOwnerInfo&& value) { m_ownerInfoHasBeenSet = true; m_ownerInfo = std::move(value); }

    /**
     * <p>Contact information for a Dataset owner.</p>
     */
    inline Dataset& WithOwnerInfo(const DatasetOwnerInfo& value) { SetOwnerInfo(value); return *this;}

    /**
     * <p>Contact information for a Dataset owner.</p>
     */
    inline Dataset& WithOwnerInfo(DatasetOwnerInfo&& value) { SetOwnerInfo(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the Dataset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp at which the Dataset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The timestamp at which the Dataset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The timestamp at which the Dataset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline Dataset& WithCreateTime(long long value) { SetCreateTime(value); return *this;}


    /**
     * <p>The last time that the Dataset was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time that the Dataset was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time that the Dataset was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time that the Dataset was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline Dataset& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


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
    inline Dataset& WithSchemaDefinition(const SchemaUnion& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline Dataset& WithSchemaDefinition(SchemaUnion&& value) { SetSchemaDefinition(std::move(value)); return *this;}


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
    inline Dataset& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline Dataset& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline Dataset& WithAlias(const char* value) { SetAlias(value); return *this;}

  private:

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetTitle;
    bool m_datasetTitleHasBeenSet = false;

    DatasetKind m_kind;
    bool m_kindHasBeenSet = false;

    Aws::String m_datasetDescription;
    bool m_datasetDescriptionHasBeenSet = false;

    DatasetOwnerInfo m_ownerInfo;
    bool m_ownerInfoHasBeenSet = false;

    long long m_createTime;
    bool m_createTimeHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    SchemaUnion m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
