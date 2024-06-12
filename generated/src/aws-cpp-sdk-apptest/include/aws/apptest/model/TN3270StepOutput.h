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
   * <p>Specifies a TN3270 step output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TN3270StepOutput">AWS
   * API Reference</a></p>
   */
  class TN3270StepOutput
  {
  public:
    AWS_APPTEST_API TN3270StepOutput();
    AWS_APPTEST_API TN3270StepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TN3270StepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data set export location of the TN3270 step output.</p>
     */
    inline const Aws::String& GetDataSetExportLocation() const{ return m_dataSetExportLocation; }
    inline bool DataSetExportLocationHasBeenSet() const { return m_dataSetExportLocationHasBeenSet; }
    inline void SetDataSetExportLocation(const Aws::String& value) { m_dataSetExportLocationHasBeenSet = true; m_dataSetExportLocation = value; }
    inline void SetDataSetExportLocation(Aws::String&& value) { m_dataSetExportLocationHasBeenSet = true; m_dataSetExportLocation = std::move(value); }
    inline void SetDataSetExportLocation(const char* value) { m_dataSetExportLocationHasBeenSet = true; m_dataSetExportLocation.assign(value); }
    inline TN3270StepOutput& WithDataSetExportLocation(const Aws::String& value) { SetDataSetExportLocation(value); return *this;}
    inline TN3270StepOutput& WithDataSetExportLocation(Aws::String&& value) { SetDataSetExportLocation(std::move(value)); return *this;}
    inline TN3270StepOutput& WithDataSetExportLocation(const char* value) { SetDataSetExportLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output location of the TN3270 step output.</p>
     */
    inline const Aws::String& GetDmsOutputLocation() const{ return m_dmsOutputLocation; }
    inline bool DmsOutputLocationHasBeenSet() const { return m_dmsOutputLocationHasBeenSet; }
    inline void SetDmsOutputLocation(const Aws::String& value) { m_dmsOutputLocationHasBeenSet = true; m_dmsOutputLocation = value; }
    inline void SetDmsOutputLocation(Aws::String&& value) { m_dmsOutputLocationHasBeenSet = true; m_dmsOutputLocation = std::move(value); }
    inline void SetDmsOutputLocation(const char* value) { m_dmsOutputLocationHasBeenSet = true; m_dmsOutputLocation.assign(value); }
    inline TN3270StepOutput& WithDmsOutputLocation(const Aws::String& value) { SetDmsOutputLocation(value); return *this;}
    inline TN3270StepOutput& WithDmsOutputLocation(Aws::String&& value) { SetDmsOutputLocation(std::move(value)); return *this;}
    inline TN3270StepOutput& WithDmsOutputLocation(const char* value) { SetDmsOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set details of the TN3270 step output.</p>
     */
    inline const Aws::Vector<DataSet>& GetDataSetDetails() const{ return m_dataSetDetails; }
    inline bool DataSetDetailsHasBeenSet() const { return m_dataSetDetailsHasBeenSet; }
    inline void SetDataSetDetails(const Aws::Vector<DataSet>& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails = value; }
    inline void SetDataSetDetails(Aws::Vector<DataSet>&& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails = std::move(value); }
    inline TN3270StepOutput& WithDataSetDetails(const Aws::Vector<DataSet>& value) { SetDataSetDetails(value); return *this;}
    inline TN3270StepOutput& WithDataSetDetails(Aws::Vector<DataSet>&& value) { SetDataSetDetails(std::move(value)); return *this;}
    inline TN3270StepOutput& AddDataSetDetails(const DataSet& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails.push_back(value); return *this; }
    inline TN3270StepOutput& AddDataSetDetails(DataSet&& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The script output location of the TN3270 step output.</p>
     */
    inline const Aws::String& GetScriptOutputLocation() const{ return m_scriptOutputLocation; }
    inline bool ScriptOutputLocationHasBeenSet() const { return m_scriptOutputLocationHasBeenSet; }
    inline void SetScriptOutputLocation(const Aws::String& value) { m_scriptOutputLocationHasBeenSet = true; m_scriptOutputLocation = value; }
    inline void SetScriptOutputLocation(Aws::String&& value) { m_scriptOutputLocationHasBeenSet = true; m_scriptOutputLocation = std::move(value); }
    inline void SetScriptOutputLocation(const char* value) { m_scriptOutputLocationHasBeenSet = true; m_scriptOutputLocation.assign(value); }
    inline TN3270StepOutput& WithScriptOutputLocation(const Aws::String& value) { SetScriptOutputLocation(value); return *this;}
    inline TN3270StepOutput& WithScriptOutputLocation(Aws::String&& value) { SetScriptOutputLocation(std::move(value)); return *this;}
    inline TN3270StepOutput& WithScriptOutputLocation(const char* value) { SetScriptOutputLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSetExportLocation;
    bool m_dataSetExportLocationHasBeenSet = false;

    Aws::String m_dmsOutputLocation;
    bool m_dmsOutputLocationHasBeenSet = false;

    Aws::Vector<DataSet> m_dataSetDetails;
    bool m_dataSetDetailsHasBeenSet = false;

    Aws::String m_scriptOutputLocation;
    bool m_scriptOutputLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
