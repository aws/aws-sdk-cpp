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
    AWS_APPTEST_API FileMetadata();
    AWS_APPTEST_API FileMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API FileMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data sets of the file metadata.</p>
     */
    inline const Aws::Vector<DataSet>& GetDataSets() const{ return m_dataSets; }
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
    inline void SetDataSets(const Aws::Vector<DataSet>& value) { m_dataSetsHasBeenSet = true; m_dataSets = value; }
    inline void SetDataSets(Aws::Vector<DataSet>&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::move(value); }
    inline FileMetadata& WithDataSets(const Aws::Vector<DataSet>& value) { SetDataSets(value); return *this;}
    inline FileMetadata& WithDataSets(Aws::Vector<DataSet>&& value) { SetDataSets(std::move(value)); return *this;}
    inline FileMetadata& AddDataSets(const DataSet& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(value); return *this; }
    inline FileMetadata& AddDataSets(DataSet&& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The database CDC of the file metadata.</p>
     */
    inline const DatabaseCDC& GetDatabaseCDC() const{ return m_databaseCDC; }
    inline bool DatabaseCDCHasBeenSet() const { return m_databaseCDCHasBeenSet; }
    inline void SetDatabaseCDC(const DatabaseCDC& value) { m_databaseCDCHasBeenSet = true; m_databaseCDC = value; }
    inline void SetDatabaseCDC(DatabaseCDC&& value) { m_databaseCDCHasBeenSet = true; m_databaseCDC = std::move(value); }
    inline FileMetadata& WithDatabaseCDC(const DatabaseCDC& value) { SetDatabaseCDC(value); return *this;}
    inline FileMetadata& WithDatabaseCDC(DatabaseCDC&& value) { SetDatabaseCDC(std::move(value)); return *this;}
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
