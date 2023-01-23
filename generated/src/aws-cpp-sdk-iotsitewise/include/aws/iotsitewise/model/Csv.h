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
   * <p>A .csv file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Csv">AWS API
   * Reference</a></p>
   */
  class Csv
  {
  public:
    AWS_IOTSITEWISE_API Csv();
    AWS_IOTSITEWISE_API Csv(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Csv& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline const Aws::Vector<ColumnName>& GetColumnNames() const{ return m_columnNames; }

    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }

    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline void SetColumnNames(const Aws::Vector<ColumnName>& value) { m_columnNamesHasBeenSet = true; m_columnNames = value; }

    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline void SetColumnNames(Aws::Vector<ColumnName>&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::move(value); }

    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline Csv& WithColumnNames(const Aws::Vector<ColumnName>& value) { SetColumnNames(value); return *this;}

    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline Csv& WithColumnNames(Aws::Vector<ColumnName>&& value) { SetColumnNames(std::move(value)); return *this;}

    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline Csv& AddColumnNames(const ColumnName& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }

    /**
     * <p>The column names specified in the .csv file.</p>
     */
    inline Csv& AddColumnNames(ColumnName&& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColumnName> m_columnNames;
    bool m_columnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
