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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/ColumnInfo.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The metadata that describes the column structure and data types of a table of
   * query results. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultSetMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API ResultSetMetadata
  {
  public:
    ResultSetMetadata();
    ResultSetMetadata(Aws::Utils::Json::JsonView jsonValue);
    ResultSetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline const Aws::Vector<ColumnInfo>& GetColumnInfo() const{ return m_columnInfo; }

    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline bool ColumnInfoHasBeenSet() const { return m_columnInfoHasBeenSet; }

    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline void SetColumnInfo(const Aws::Vector<ColumnInfo>& value) { m_columnInfoHasBeenSet = true; m_columnInfo = value; }

    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline void SetColumnInfo(Aws::Vector<ColumnInfo>&& value) { m_columnInfoHasBeenSet = true; m_columnInfo = std::move(value); }

    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline ResultSetMetadata& WithColumnInfo(const Aws::Vector<ColumnInfo>& value) { SetColumnInfo(value); return *this;}

    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline ResultSetMetadata& WithColumnInfo(Aws::Vector<ColumnInfo>&& value) { SetColumnInfo(std::move(value)); return *this;}

    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline ResultSetMetadata& AddColumnInfo(const ColumnInfo& value) { m_columnInfoHasBeenSet = true; m_columnInfo.push_back(value); return *this; }

    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline ResultSetMetadata& AddColumnInfo(ColumnInfo&& value) { m_columnInfoHasBeenSet = true; m_columnInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColumnInfo> m_columnInfo;
    bool m_columnInfoHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
