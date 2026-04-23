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
#include <aws/rds-data/model/ResultSetMetadata.h>
#include <aws/rds-data/model/Record.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * Result Frame<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ResultFrame">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API ResultFrame
  {
  public:
    ResultFrame();
    ResultFrame(Aws::Utils::Json::JsonView jsonValue);
    ResultFrame& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * ResultSet Metadata.
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

    /**
     * ResultSet Metadata.
     */
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }

    /**
     * ResultSet Metadata.
     */
    inline void SetRecords(const Aws::Vector<Record>& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * ResultSet Metadata.
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_recordsHasBeenSet = true; m_records = std::move(value); }

    /**
     * ResultSet Metadata.
     */
    inline ResultFrame& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * ResultSet Metadata.
     */
    inline ResultFrame& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * ResultSet Metadata.
     */
    inline ResultFrame& AddRecords(const Record& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

    /**
     * ResultSet Metadata.
     */
    inline ResultFrame& AddRecords(Record&& value) { m_recordsHasBeenSet = true; m_records.push_back(std::move(value)); return *this; }


    /**
     * ResultSet Metadata.
     */
    inline const ResultSetMetadata& GetResultSetMetadata() const{ return m_resultSetMetadata; }

    /**
     * ResultSet Metadata.
     */
    inline bool ResultSetMetadataHasBeenSet() const { return m_resultSetMetadataHasBeenSet; }

    /**
     * ResultSet Metadata.
     */
    inline void SetResultSetMetadata(const ResultSetMetadata& value) { m_resultSetMetadataHasBeenSet = true; m_resultSetMetadata = value; }

    /**
     * ResultSet Metadata.
     */
    inline void SetResultSetMetadata(ResultSetMetadata&& value) { m_resultSetMetadataHasBeenSet = true; m_resultSetMetadata = std::move(value); }

    /**
     * ResultSet Metadata.
     */
    inline ResultFrame& WithResultSetMetadata(const ResultSetMetadata& value) { SetResultSetMetadata(value); return *this;}

    /**
     * ResultSet Metadata.
     */
    inline ResultFrame& WithResultSetMetadata(ResultSetMetadata&& value) { SetResultSetMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet;

    ResultSetMetadata m_resultSetMetadata;
    bool m_resultSetMetadataHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
