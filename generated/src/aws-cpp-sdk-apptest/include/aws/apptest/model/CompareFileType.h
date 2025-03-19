/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/CompareDataSetsSummary.h>
#include <aws/apptest/model/CompareDatabaseCDCSummary.h>
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
   * <p>Compares the file type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CompareFileType">AWS
   * API Reference</a></p>
   */
  class CompareFileType
  {
  public:
    AWS_APPTEST_API CompareFileType() = default;
    AWS_APPTEST_API CompareFileType(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareFileType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data sets in the compare file type.</p>
     */
    inline const CompareDataSetsSummary& GetDatasets() const { return m_datasets; }
    inline bool DatasetsHasBeenSet() const { return m_datasetsHasBeenSet; }
    template<typename DatasetsT = CompareDataSetsSummary>
    void SetDatasets(DatasetsT&& value) { m_datasetsHasBeenSet = true; m_datasets = std::forward<DatasetsT>(value); }
    template<typename DatasetsT = CompareDataSetsSummary>
    CompareFileType& WithDatasets(DatasetsT&& value) { SetDatasets(std::forward<DatasetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database CDC of the compare file type.</p>
     */
    inline const CompareDatabaseCDCSummary& GetDatabaseCDC() const { return m_databaseCDC; }
    inline bool DatabaseCDCHasBeenSet() const { return m_databaseCDCHasBeenSet; }
    template<typename DatabaseCDCT = CompareDatabaseCDCSummary>
    void SetDatabaseCDC(DatabaseCDCT&& value) { m_databaseCDCHasBeenSet = true; m_databaseCDC = std::forward<DatabaseCDCT>(value); }
    template<typename DatabaseCDCT = CompareDatabaseCDCSummary>
    CompareFileType& WithDatabaseCDC(DatabaseCDCT&& value) { SetDatabaseCDC(std::forward<DatabaseCDCT>(value)); return *this;}
    ///@}
  private:

    CompareDataSetsSummary m_datasets;
    bool m_datasetsHasBeenSet = false;

    CompareDatabaseCDCSummary m_databaseCDC;
    bool m_databaseCDCHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
