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
    AWS_APPTEST_API TN3270StepOutput() = default;
    AWS_APPTEST_API TN3270StepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TN3270StepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data set export location of the TN3270 step output.</p>
     */
    inline const Aws::String& GetDataSetExportLocation() const { return m_dataSetExportLocation; }
    inline bool DataSetExportLocationHasBeenSet() const { return m_dataSetExportLocationHasBeenSet; }
    template<typename DataSetExportLocationT = Aws::String>
    void SetDataSetExportLocation(DataSetExportLocationT&& value) { m_dataSetExportLocationHasBeenSet = true; m_dataSetExportLocation = std::forward<DataSetExportLocationT>(value); }
    template<typename DataSetExportLocationT = Aws::String>
    TN3270StepOutput& WithDataSetExportLocation(DataSetExportLocationT&& value) { SetDataSetExportLocation(std::forward<DataSetExportLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output location of the TN3270 step output.</p>
     */
    inline const Aws::String& GetDmsOutputLocation() const { return m_dmsOutputLocation; }
    inline bool DmsOutputLocationHasBeenSet() const { return m_dmsOutputLocationHasBeenSet; }
    template<typename DmsOutputLocationT = Aws::String>
    void SetDmsOutputLocation(DmsOutputLocationT&& value) { m_dmsOutputLocationHasBeenSet = true; m_dmsOutputLocation = std::forward<DmsOutputLocationT>(value); }
    template<typename DmsOutputLocationT = Aws::String>
    TN3270StepOutput& WithDmsOutputLocation(DmsOutputLocationT&& value) { SetDmsOutputLocation(std::forward<DmsOutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set details of the TN3270 step output.</p>
     */
    inline const Aws::Vector<DataSet>& GetDataSetDetails() const { return m_dataSetDetails; }
    inline bool DataSetDetailsHasBeenSet() const { return m_dataSetDetailsHasBeenSet; }
    template<typename DataSetDetailsT = Aws::Vector<DataSet>>
    void SetDataSetDetails(DataSetDetailsT&& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails = std::forward<DataSetDetailsT>(value); }
    template<typename DataSetDetailsT = Aws::Vector<DataSet>>
    TN3270StepOutput& WithDataSetDetails(DataSetDetailsT&& value) { SetDataSetDetails(std::forward<DataSetDetailsT>(value)); return *this;}
    template<typename DataSetDetailsT = DataSet>
    TN3270StepOutput& AddDataSetDetails(DataSetDetailsT&& value) { m_dataSetDetailsHasBeenSet = true; m_dataSetDetails.emplace_back(std::forward<DataSetDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The script output location of the TN3270 step output.</p>
     */
    inline const Aws::String& GetScriptOutputLocation() const { return m_scriptOutputLocation; }
    inline bool ScriptOutputLocationHasBeenSet() const { return m_scriptOutputLocationHasBeenSet; }
    template<typename ScriptOutputLocationT = Aws::String>
    void SetScriptOutputLocation(ScriptOutputLocationT&& value) { m_scriptOutputLocationHasBeenSet = true; m_scriptOutputLocation = std::forward<ScriptOutputLocationT>(value); }
    template<typename ScriptOutputLocationT = Aws::String>
    TN3270StepOutput& WithScriptOutputLocation(ScriptOutputLocationT&& value) { SetScriptOutputLocation(std::forward<ScriptOutputLocationT>(value)); return *this;}
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
