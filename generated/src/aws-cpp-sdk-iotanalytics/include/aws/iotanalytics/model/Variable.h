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
    AWS_IOTANALYTICS_API Variable();
    AWS_IOTANALYTICS_API Variable(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Variable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the variable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline Variable& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline Variable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline Variable& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the variable as a string.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The value of the variable as a string.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The value of the variable as a string.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The value of the variable as a string.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The value of the variable as a string.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The value of the variable as a string.</p>
     */
    inline Variable& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The value of the variable as a string.</p>
     */
    inline Variable& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The value of the variable as a string.</p>
     */
    inline Variable& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>The value of the variable as a double (numeric).</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>The value of the variable as a double (numeric).</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>The value of the variable as a double (numeric).</p>
     */
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>The value of the variable as a double (numeric).</p>
     */
    inline Variable& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}


    /**
     * <p>The value of the variable as a structure that specifies a dataset content
     * version.</p>
     */
    inline const DatasetContentVersionValue& GetDatasetContentVersionValue() const{ return m_datasetContentVersionValue; }

    /**
     * <p>The value of the variable as a structure that specifies a dataset content
     * version.</p>
     */
    inline bool DatasetContentVersionValueHasBeenSet() const { return m_datasetContentVersionValueHasBeenSet; }

    /**
     * <p>The value of the variable as a structure that specifies a dataset content
     * version.</p>
     */
    inline void SetDatasetContentVersionValue(const DatasetContentVersionValue& value) { m_datasetContentVersionValueHasBeenSet = true; m_datasetContentVersionValue = value; }

    /**
     * <p>The value of the variable as a structure that specifies a dataset content
     * version.</p>
     */
    inline void SetDatasetContentVersionValue(DatasetContentVersionValue&& value) { m_datasetContentVersionValueHasBeenSet = true; m_datasetContentVersionValue = std::move(value); }

    /**
     * <p>The value of the variable as a structure that specifies a dataset content
     * version.</p>
     */
    inline Variable& WithDatasetContentVersionValue(const DatasetContentVersionValue& value) { SetDatasetContentVersionValue(value); return *this;}

    /**
     * <p>The value of the variable as a structure that specifies a dataset content
     * version.</p>
     */
    inline Variable& WithDatasetContentVersionValue(DatasetContentVersionValue&& value) { SetDatasetContentVersionValue(std::move(value)); return *this;}


    /**
     * <p>The value of the variable as a structure that specifies an output file
     * URI.</p>
     */
    inline const OutputFileUriValue& GetOutputFileUriValue() const{ return m_outputFileUriValue; }

    /**
     * <p>The value of the variable as a structure that specifies an output file
     * URI.</p>
     */
    inline bool OutputFileUriValueHasBeenSet() const { return m_outputFileUriValueHasBeenSet; }

    /**
     * <p>The value of the variable as a structure that specifies an output file
     * URI.</p>
     */
    inline void SetOutputFileUriValue(const OutputFileUriValue& value) { m_outputFileUriValueHasBeenSet = true; m_outputFileUriValue = value; }

    /**
     * <p>The value of the variable as a structure that specifies an output file
     * URI.</p>
     */
    inline void SetOutputFileUriValue(OutputFileUriValue&& value) { m_outputFileUriValueHasBeenSet = true; m_outputFileUriValue = std::move(value); }

    /**
     * <p>The value of the variable as a structure that specifies an output file
     * URI.</p>
     */
    inline Variable& WithOutputFileUriValue(const OutputFileUriValue& value) { SetOutputFileUriValue(value); return *this;}

    /**
     * <p>The value of the variable as a structure that specifies an output file
     * URI.</p>
     */
    inline Variable& WithOutputFileUriValue(OutputFileUriValue&& value) { SetOutputFileUriValue(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    DatasetContentVersionValue m_datasetContentVersionValue;
    bool m_datasetContentVersionValueHasBeenSet = false;

    OutputFileUriValue m_outputFileUriValue;
    bool m_outputFileUriValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
