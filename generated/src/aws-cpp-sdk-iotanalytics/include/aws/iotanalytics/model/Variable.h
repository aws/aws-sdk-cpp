/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatasetContentVersionValue.h>
#include <aws/iotanalytics/model/OutputFileUriValue.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An instance of a variable to be passed to the <code>containerAction</code>
   * execution. Each variable must have a name and a value given by one of
   * <code>stringValue</code>, <code>datasetContentVersionValue</code>, or
   * <code>outputFileUriValue</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Variable">AWS
   * API Reference</a></p>
   */
  class Variable
  {
  public:
    AWS_IOTANALYTICS_API Variable() = default;
    AWS_IOTANALYTICS_API Variable(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Variable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Variable& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the variable as a string.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    Variable& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the variable as a double (numeric).</p>
     */
    inline double GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline Variable& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the variable as a structure that specifies a dataset content
     * version.</p>
     */
    inline const DatasetContentVersionValue& GetDatasetContentVersionValue() const { return m_datasetContentVersionValue; }
    inline bool DatasetContentVersionValueHasBeenSet() const { return m_datasetContentVersionValueHasBeenSet; }
    template<typename DatasetContentVersionValueT = DatasetContentVersionValue>
    void SetDatasetContentVersionValue(DatasetContentVersionValueT&& value) { m_datasetContentVersionValueHasBeenSet = true; m_datasetContentVersionValue = std::forward<DatasetContentVersionValueT>(value); }
    template<typename DatasetContentVersionValueT = DatasetContentVersionValue>
    Variable& WithDatasetContentVersionValue(DatasetContentVersionValueT&& value) { SetDatasetContentVersionValue(std::forward<DatasetContentVersionValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the variable as a structure that specifies an output file
     * URI.</p>
     */
    inline const OutputFileUriValue& GetOutputFileUriValue() const { return m_outputFileUriValue; }
    inline bool OutputFileUriValueHasBeenSet() const { return m_outputFileUriValueHasBeenSet; }
    template<typename OutputFileUriValueT = OutputFileUriValue>
    void SetOutputFileUriValue(OutputFileUriValueT&& value) { m_outputFileUriValueHasBeenSet = true; m_outputFileUriValue = std::forward<OutputFileUriValueT>(value); }
    template<typename OutputFileUriValueT = OutputFileUriValue>
    Variable& WithOutputFileUriValue(OutputFileUriValueT&& value) { SetOutputFileUriValue(std::forward<OutputFileUriValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    double m_doubleValue{0.0};
    bool m_doubleValueHasBeenSet = false;

    DatasetContentVersionValue m_datasetContentVersionValue;
    bool m_datasetContentVersionValueHasBeenSet = false;

    OutputFileUriValue m_outputFileUriValue;
    bool m_outputFileUriValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
