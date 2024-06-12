/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Defines a batch step output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/BatchStepOutput">AWS
   * API Reference</a></p>
   */
  class BatchStepOutput
  {
  public:
    AWS_APPTEST_API BatchStepOutput();
    AWS_APPTEST_API BatchStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API BatchStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data set export location of the batch step output.</p>
     */
    inline const Aws::String& GetDataSetExportLocation() const{ return m_dataSetExportLocation; }
    inline bool DataSetExportLocationHasBeenSet() const { return m_dataSetExportLocationHasBeenSet; }
    inline void SetDataSetExportLocation(const Aws::String& value) { m_dataSetExportLocationHasBeenSet = true; m_dataSetExportLocation = value; }
    inline void SetDataSetExportLocation(Aws::String&& value) { m_dataSetExportLocationHasBeenSet = true; m_dataSetExportLocation = std::move(value); }
    inline void SetDataSetExportLocation(const char* value) { m_dataSetExportLocationHasBeenSet = true; m_dataSetExportLocation.assign(value); }
    inline BatchStepOutput& WithDataSetExportLocation(const Aws::String& value) { SetDataSetExportLocation(value); return *this;}
    inline BatchStepOutput& WithDataSetExportLocation(Aws::String&& value) { SetDataSetExportLocation(std::move(value)); return *this;}
    inline BatchStepOutput& WithDataSetExportLocation(const char* value) { SetDataSetExportLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Database Migration Service (DMS) output location of the batch step
     * output.</p>
     */
    inline const Aws::String& GetDmsOutputLocation() const{ return m_dmsOutputLocation; }
    inline bool DmsOutputLocationHasBeenSet() const { return m_dmsOutputLocationHasBeenSet; }
    inline void SetDmsOutputLocation(const Aws::String& value) { m_dmsOutputLocationHasBeenSet = true; m_dmsOutputLocation = value; }
    inline void SetDmsOutputLocation(Aws::String&& value) { m_dmsOutputLocationHasBeenSet = true; m_dmsOutputLocation = std::move(value); }
    inline void SetDmsOutputLocation(const char* value) { m_dmsOutputLocationHasBeenSet = true; m_dmsOutputLocation.assign(value); }
    inline BatchStepOutput& WithDmsOutputLocation(const Aws::String& value) { SetDmsOutputLocation(value); return *this;}
    inline BatchStepOutput& WithDmsOutputLocation(Aws::String&& value) { SetDmsOutputLocation(std::move(value)); return *this;}
    inline BatchStepOutput& WithDmsOutputLocation(const char* value) { SetDmsOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set details of the batch step output.</p>
     */
    inline const Aws::Vector<DataSet>& GetDataSetDetails() const{ return m_dataSetDetails; }
    inline bool DataSetDetailsHasBeenSet() const { return m_dataSetDetailsHasBeenSet; }
    inline void SetDataSetDetails(const Aws::Vector<DataSet>& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails = value; }
    inline void SetDataSetDetails(Aws::Vector<DataSet>&& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails = std::move(value); }
    inline BatchStepOutput& WithDataSetDetails(const Aws::Vector<DataSet>& value) { SetDataSetDetails(value); return *this;}
    inline BatchStepOutput& WithDataSetDetails(Aws::Vector<DataSet>&& value) { SetDataSetDetails(std::move(value)); return *this;}
    inline BatchStepOutput& AddDataSetDetails(const DataSet& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails.push_back(value); return *this; }
    inline BatchStepOutput& AddDataSetDetails(DataSet&& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_dataSetExportLocation;
    bool m_dataSetExportLocationHasBeenSet = false;

    Aws::String m_dmsOutputLocation;
    bool m_dmsOutputLocationHasBeenSet = false;

    Aws::Vector<DataSet> m_dataSetDetails;
    bool m_dataSetDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
