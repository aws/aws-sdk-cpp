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
    AWS_ATHENA_API ResultSetMetadata() = default;
    AWS_ATHENA_API ResultSetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultSetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the columns returned in a query result metadata.</p>
     */
    inline const Aws::Vector<ColumnInfo>& GetColumnInfo() const { return m_columnInfo; }
    inline bool ColumnInfoHasBeenSet() const { return m_columnInfoHasBeenSet; }
    template<typename ColumnInfoT = Aws::Vector<ColumnInfo>>
    void SetColumnInfo(ColumnInfoT&& value) { m_columnInfoHasBeenSet = true; m_columnInfo = std::forward<ColumnInfoT>(value); }
    template<typename ColumnInfoT = Aws::Vector<ColumnInfo>>
    ResultSetMetadata& WithColumnInfo(ColumnInfoT&& value) { SetColumnInfo(std::forward<ColumnInfoT>(value)); return *this;}
    template<typename ColumnInfoT = ColumnInfo>
    ResultSetMetadata& AddColumnInfo(ColumnInfoT&& value) { m_columnInfoHasBeenSet = true; m_columnInfo.emplace_back(std::forward<ColumnInfoT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ColumnInfo> m_columnInfo;
    bool m_columnInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
