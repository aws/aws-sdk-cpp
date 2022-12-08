/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * query results. To return a <code>ResultSetMetadata</code> object, use
   * <a>GetQueryResults</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultSetMetadata">AWS
   * API Reference</a></p>
   */
  class ResultSetMetadata
  {
  public:
    AWS_ATHENA_API ResultSetMetadata();
    AWS_ATHENA_API ResultSetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultSetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_columnInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
