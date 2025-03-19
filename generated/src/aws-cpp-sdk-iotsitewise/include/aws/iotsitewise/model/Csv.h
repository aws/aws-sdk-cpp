/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/ColumnName.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>A .CSV file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Csv">AWS API
   * Reference</a></p>
   */
  class Csv
  {
  public:
    AWS_IOTSITEWISE_API Csv() = default;
    AWS_IOTSITEWISE_API Csv(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Csv& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline const Aws::Vector<ColumnName>& GetColumnNames() const { return m_columnNames; }
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
    template<typename ColumnNamesT = Aws::Vector<ColumnName>>
    void SetColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::forward<ColumnNamesT>(value); }
    template<typename ColumnNamesT = Aws::Vector<ColumnName>>
    Csv& WithColumnNames(ColumnNamesT&& value) { SetColumnNames(std::forward<ColumnNamesT>(value)); return *this;}
    inline Csv& AddColumnNames(ColumnName value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<ColumnName> m_columnNames;
    bool m_columnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
