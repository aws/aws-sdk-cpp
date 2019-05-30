/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/ColumnMetadata.h>
#include <aws/rds-data/model/Field.h>
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
namespace RDSDataService
{
namespace Model
{
  /**
   * <p>The response elements represent the output of a request to run a SQL
   * statement against
            a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteStatementResponse">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API ExecuteStatementResult
  {
  public:
    ExecuteStatementResult();
    ExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata for the columns included in the results.</p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnMetadata() const{ return m_columnMetadata; }

    /**
     * <p>Metadata for the columns included in the results.</p>
     */
    inline void SetColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { m_columnMetadata = value; }

    /**
     * <p>Metadata for the columns included in the results.</p>
     */
    inline void SetColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { m_columnMetadata = std::move(value); }

    /**
     * <p>Metadata for the columns included in the results.</p>
     */
    inline ExecuteStatementResult& WithColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { SetColumnMetadata(value); return *this;}

    /**
     * <p>Metadata for the columns included in the results.</p>
     */
    inline ExecuteStatementResult& WithColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { SetColumnMetadata(std::move(value)); return *this;}

    /**
     * <p>Metadata for the columns included in the results.</p>
     */
    inline ExecuteStatementResult& AddColumnMetadata(const ColumnMetadata& value) { m_columnMetadata.push_back(value); return *this; }

    /**
     * <p>Metadata for the columns included in the results.</p>
     */
    inline ExecuteStatementResult& AddColumnMetadata(ColumnMetadata&& value) { m_columnMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline const Aws::Vector<Field>& GetGeneratedFields() const{ return m_generatedFields; }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline void SetGeneratedFields(const Aws::Vector<Field>& value) { m_generatedFields = value; }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline void SetGeneratedFields(Aws::Vector<Field>&& value) { m_generatedFields = std::move(value); }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline ExecuteStatementResult& WithGeneratedFields(const Aws::Vector<Field>& value) { SetGeneratedFields(value); return *this;}

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline ExecuteStatementResult& WithGeneratedFields(Aws::Vector<Field>&& value) { SetGeneratedFields(std::move(value)); return *this;}

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline ExecuteStatementResult& AddGeneratedFields(const Field& value) { m_generatedFields.push_back(value); return *this; }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline ExecuteStatementResult& AddGeneratedFields(Field&& value) { m_generatedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of records updated by the request.</p>
     */
    inline long long GetNumberOfRecordsUpdated() const{ return m_numberOfRecordsUpdated; }

    /**
     * <p>The number of records updated by the request.</p>
     */
    inline void SetNumberOfRecordsUpdated(long long value) { m_numberOfRecordsUpdated = value; }

    /**
     * <p>The number of records updated by the request.</p>
     */
    inline ExecuteStatementResult& WithNumberOfRecordsUpdated(long long value) { SetNumberOfRecordsUpdated(value); return *this;}


    /**
     * <p>The records returned by the SQL statement.</p>
     */
    inline const Aws::Vector<Aws::Vector<Field>>& GetRecords() const{ return m_records; }

    /**
     * <p>The records returned by the SQL statement.</p>
     */
    inline void SetRecords(const Aws::Vector<Aws::Vector<Field>>& value) { m_records = value; }

    /**
     * <p>The records returned by the SQL statement.</p>
     */
    inline void SetRecords(Aws::Vector<Aws::Vector<Field>>&& value) { m_records = std::move(value); }

    /**
     * <p>The records returned by the SQL statement.</p>
     */
    inline ExecuteStatementResult& WithRecords(const Aws::Vector<Aws::Vector<Field>>& value) { SetRecords(value); return *this;}

    /**
     * <p>The records returned by the SQL statement.</p>
     */
    inline ExecuteStatementResult& WithRecords(Aws::Vector<Aws::Vector<Field>>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>The records returned by the SQL statement.</p>
     */
    inline ExecuteStatementResult& AddRecords(const Aws::Vector<Field>& value) { m_records.push_back(value); return *this; }

    /**
     * <p>The records returned by the SQL statement.</p>
     */
    inline ExecuteStatementResult& AddRecords(Aws::Vector<Field>&& value) { m_records.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColumnMetadata> m_columnMetadata;

    Aws::Vector<Field> m_generatedFields;

    long long m_numberOfRecordsUpdated;

    Aws::Vector<Aws::Vector<Field>> m_records;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
