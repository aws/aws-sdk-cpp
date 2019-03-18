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
   * List of columns and their types.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ResultSetMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API ResultSetMetadata
  {
  public:
    ResultSetMetadata();
    ResultSetMetadata(Aws::Utils::Json::JsonView jsonValue);
    ResultSetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Number of columns
     */
    inline long long GetColumnCount() const{ return m_columnCount; }

    /**
     * Number of columns
     */
    inline bool ColumnCountHasBeenSet() const { return m_columnCountHasBeenSet; }

    /**
     * Number of columns
     */
    inline void SetColumnCount(long long value) { m_columnCountHasBeenSet = true; m_columnCount = value; }

    /**
     * Number of columns
     */
    inline ResultSetMetadata& WithColumnCount(long long value) { SetColumnCount(value); return *this;}


    /**
     * List of columns and their types
     */
    inline const Aws::Vector<ColumnMetadata>& GetColumnMetadata() const{ return m_columnMetadata; }

    /**
     * List of columns and their types
     */
    inline bool ColumnMetadataHasBeenSet() const { return m_columnMetadataHasBeenSet; }

    /**
     * List of columns and their types
     */
    inline void SetColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata = value; }

    /**
     * List of columns and their types
     */
    inline void SetColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata = std::move(value); }

    /**
     * List of columns and their types
     */
    inline ResultSetMetadata& WithColumnMetadata(const Aws::Vector<ColumnMetadata>& value) { SetColumnMetadata(value); return *this;}

    /**
     * List of columns and their types
     */
    inline ResultSetMetadata& WithColumnMetadata(Aws::Vector<ColumnMetadata>&& value) { SetColumnMetadata(std::move(value)); return *this;}

    /**
     * List of columns and their types
     */
    inline ResultSetMetadata& AddColumnMetadata(const ColumnMetadata& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata.push_back(value); return *this; }

    /**
     * List of columns and their types
     */
    inline ResultSetMetadata& AddColumnMetadata(ColumnMetadata&& value) { m_columnMetadataHasBeenSet = true; m_columnMetadata.push_back(std::move(value)); return *this; }

  private:

    long long m_columnCount;
    bool m_columnCountHasBeenSet;

    Aws::Vector<ColumnMetadata> m_columnMetadata;
    bool m_columnMetadataHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
