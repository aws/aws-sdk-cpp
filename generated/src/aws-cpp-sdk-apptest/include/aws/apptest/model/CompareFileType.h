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
    AWS_APPTEST_API CompareFileType();
    AWS_APPTEST_API CompareFileType(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareFileType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data sets in the compare file type.</p>
     */
    inline const CompareDataSetsSummary& GetDatasets() const{ return m_datasets; }
    inline bool DatasetsHasBeenSet() const { return m_datasetsHasBeenSet; }
    inline void SetDatasets(const CompareDataSetsSummary& value) { m_datasetsHasBeenSet = true; m_datasets = value; }
    inline void SetDatasets(CompareDataSetsSummary&& value) { m_datasetsHasBeenSet = true; m_datasets = std::move(value); }
    inline CompareFileType& WithDatasets(const CompareDataSetsSummary& value) { SetDatasets(value); return *this;}
    inline CompareFileType& WithDatasets(CompareDataSetsSummary&& value) { SetDatasets(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database CDC of the compare file type.</p>
     */
    inline const CompareDatabaseCDCSummary& GetDatabaseCDC() const{ return m_databaseCDC; }
    inline bool DatabaseCDCHasBeenSet() const { return m_databaseCDCHasBeenSet; }
    inline void SetDatabaseCDC(const CompareDatabaseCDCSummary& value) { m_databaseCDCHasBeenSet = true; m_databaseCDC = value; }
    inline void SetDatabaseCDC(CompareDatabaseCDCSummary&& value) { m_databaseCDCHasBeenSet = true; m_databaseCDC = std::move(value); }
    inline CompareFileType& WithDatabaseCDC(const CompareDatabaseCDCSummary& value) { SetDatabaseCDC(value); return *this;}
    inline CompareFileType& WithDatabaseCDC(CompareDatabaseCDCSummary&& value) { SetDatabaseCDC(std::move(value)); return *this;}
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
