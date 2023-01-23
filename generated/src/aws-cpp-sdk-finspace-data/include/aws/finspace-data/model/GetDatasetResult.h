/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/DatasetKind.h>
#include <aws/finspace-data/model/SchemaUnion.h>
#include <aws/finspace-data/model/DatasetStatus.h>
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
namespace FinSpaceData
{
namespace Model
{
  /**
   * Response for the GetDataset operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetDatasetResponse">AWS
   * API Reference</a></p>
   */
  class GetDatasetResult
  {
  public:
    AWS_FINSPACEDATA_API GetDatasetResult();
    AWS_FINSPACEDATA_API GetDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API GetDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for a Dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for a Dataset.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetId = value; }

    /**
     * <p>The unique identifier for a Dataset.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for a Dataset.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for a Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for a Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>Display title for a Dataset.</p>
     */
    inline const Aws::String& GetDatasetTitle() const{ return m_datasetTitle; }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline void SetDatasetTitle(const Aws::String& value) { m_datasetTitle = value; }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline void SetDatasetTitle(Aws::String&& value) { m_datasetTitle = std::move(value); }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline void SetDatasetTitle(const char* value) { m_datasetTitle.assign(value); }

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetTitle(const Aws::String& value) { SetDatasetTitle(value); return *this;}

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetTitle(Aws::String&& value) { SetDatasetTitle(std::move(value)); return *this;}

    /**
     * <p>Display title for a Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetTitle(const char* value) { SetDatasetTitle(value); return *this;}


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
    inline void SetKind(const DatasetKind& value) { m_kind = value; }

    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline void SetKind(DatasetKind&& value) { m_kind = std::move(value); }

    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline GetDatasetResult& WithKind(const DatasetKind& value) { SetKind(value); return *this;}

    /**
     * <p>The format in which Dataset data is structured.</p> <ul> <li> <p>
     * <code>TABULAR</code> – Data is structured in a tabular format.</p> </li> <li>
     * <p> <code>NON_TABULAR</code> – Data is structured in a non-tabular format.</p>
     * </li> </ul>
     */
    inline GetDatasetResult& WithKind(DatasetKind&& value) { SetKind(std::move(value)); return *this;}


    /**
     * <p>A description of the Dataset.</p>
     */
    inline const Aws::String& GetDatasetDescription() const{ return m_datasetDescription; }

    /**
     * <p>A description of the Dataset.</p>
     */
    inline void SetDatasetDescription(const Aws::String& value) { m_datasetDescription = value; }

    /**
     * <p>A description of the Dataset.</p>
     */
    inline void SetDatasetDescription(Aws::String&& value) { m_datasetDescription = std::move(value); }

    /**
     * <p>A description of the Dataset.</p>
     */
    inline void SetDatasetDescription(const char* value) { m_datasetDescription.assign(value); }

    /**
     * <p>A description of the Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetDescription(const Aws::String& value) { SetDatasetDescription(value); return *this;}

    /**
     * <p>A description of the Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetDescription(Aws::String&& value) { SetDatasetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the Dataset.</p>
     */
    inline GetDatasetResult& WithDatasetDescription(const char* value) { SetDatasetDescription(value); return *this;}


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
    inline void SetCreateTime(long long value) { m_createTime = value; }

    /**
     * <p>The timestamp at which the Dataset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetDatasetResult& WithCreateTime(long long value) { SetCreateTime(value); return *this;}


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
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }

    /**
     * <p>The last time that the Dataset was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetDatasetResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline const SchemaUnion& GetSchemaDefinition() const{ return m_schemaDefinition; }

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline void SetSchemaDefinition(const SchemaUnion& value) { m_schemaDefinition = value; }

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline void SetSchemaDefinition(SchemaUnion&& value) { m_schemaDefinition = std::move(value); }

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline GetDatasetResult& WithSchemaDefinition(const SchemaUnion& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>Definition for a schema on a tabular Dataset.</p>
     */
    inline GetDatasetResult& WithSchemaDefinition(SchemaUnion&& value) { SetSchemaDefinition(std::move(value)); return *this;}


    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline GetDatasetResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline GetDatasetResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The unique resource identifier for a Dataset.</p>
     */
    inline GetDatasetResult& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Status of the Dataset creation.</p> <ul> <li> <p> <code>PENDING</code> –
     * Dataset is pending creation.</p> </li> <li> <p> <code>FAILED</code> – Dataset
     * creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> – Dataset creation
     * has succeeded.</p> </li> <li> <p> <code>RUNNING</code> – Dataset creation is
     * running.</p> </li> </ul>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the Dataset creation.</p> <ul> <li> <p> <code>PENDING</code> –
     * Dataset is pending creation.</p> </li> <li> <p> <code>FAILED</code> – Dataset
     * creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> – Dataset creation
     * has succeeded.</p> </li> <li> <p> <code>RUNNING</code> – Dataset creation is
     * running.</p> </li> </ul>
     */
    inline void SetStatus(const DatasetStatus& value) { m_status = value; }

    /**
     * <p>Status of the Dataset creation.</p> <ul> <li> <p> <code>PENDING</code> –
     * Dataset is pending creation.</p> </li> <li> <p> <code>FAILED</code> – Dataset
     * creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> – Dataset creation
     * has succeeded.</p> </li> <li> <p> <code>RUNNING</code> – Dataset creation is
     * running.</p> </li> </ul>
     */
    inline void SetStatus(DatasetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status of the Dataset creation.</p> <ul> <li> <p> <code>PENDING</code> –
     * Dataset is pending creation.</p> </li> <li> <p> <code>FAILED</code> – Dataset
     * creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> – Dataset creation
     * has succeeded.</p> </li> <li> <p> <code>RUNNING</code> – Dataset creation is
     * running.</p> </li> </ul>
     */
    inline GetDatasetResult& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the Dataset creation.</p> <ul> <li> <p> <code>PENDING</code> –
     * Dataset is pending creation.</p> </li> <li> <p> <code>FAILED</code> – Dataset
     * creation has failed.</p> </li> <li> <p> <code>SUCCESS</code> – Dataset creation
     * has succeeded.</p> </li> <li> <p> <code>RUNNING</code> – Dataset creation is
     * running.</p> </li> </ul>
     */
    inline GetDatasetResult& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_datasetId;

    Aws::String m_datasetArn;

    Aws::String m_datasetTitle;

    DatasetKind m_kind;

    Aws::String m_datasetDescription;

    long long m_createTime;

    long long m_lastModifiedTime;

    SchemaUnion m_schemaDefinition;

    Aws::String m_alias;

    DatasetStatus m_status;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
