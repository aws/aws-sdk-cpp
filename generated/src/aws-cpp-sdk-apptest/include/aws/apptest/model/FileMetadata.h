/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apptest/model/DatabaseCDC.h>
#include <aws/apptest/model/DataSet.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies a file metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/FileMetadata">AWS
   * API Reference</a></p>
   */
  class FileMetadata
  {
  public:
    AWS_APPTEST_API FileMetadata() = default;
    AWS_APPTEST_API FileMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API FileMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data sets of the file metadata.</p>
     */
    inline const Aws::Vector<DataSet>& GetDataSets() const { return m_dataSets; }
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
    template<typename DataSetsT = Aws::Vector<DataSet>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<DataSet>>
    FileMetadata& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = DataSet>
    FileMetadata& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The database CDC of the file metadata.</p>
     */
    inline const DatabaseCDC& GetDatabaseCDC() const { return m_databaseCDC; }
    inline bool DatabaseCDCHasBeenSet() const { return m_databaseCDCHasBeenSet; }
    template<typename DatabaseCDCT = DatabaseCDC>
    void SetDatabaseCDC(DatabaseCDCT&& value) { m_databaseCDCHasBeenSet = true; m_databaseCDC = std::forward<DatabaseCDCT>(value); }
    template<typename DatabaseCDCT = DatabaseCDC>
    FileMetadata& WithDatabaseCDC(DatabaseCDCT&& value) { SetDatabaseCDC(std::forward<DatabaseCDCT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSet> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    DatabaseCDC m_databaseCDC;
    bool m_databaseCDCHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
