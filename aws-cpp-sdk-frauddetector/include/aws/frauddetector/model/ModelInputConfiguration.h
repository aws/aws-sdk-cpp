/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/ModelInputDataFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The model input configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelInputConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API ModelInputConfiguration
  {
  public:
    ModelInputConfiguration();
    ModelInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ModelInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The format of the model input configuration. The format differs depending on
     * if it is passed through to SageMaker or constructed by Amazon Fraud
     * Detector.</p>
     */
    inline const ModelInputDataFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the model input configuration. The format differs depending on
     * if it is passed through to SageMaker or constructed by Amazon Fraud
     * Detector.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> The format of the model input configuration. The format differs depending on
     * if it is passed through to SageMaker or constructed by Amazon Fraud
     * Detector.</p>
     */
    inline void SetFormat(const ModelInputDataFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> The format of the model input configuration. The format differs depending on
     * if it is passed through to SageMaker or constructed by Amazon Fraud
     * Detector.</p>
     */
    inline void SetFormat(ModelInputDataFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> The format of the model input configuration. The format differs depending on
     * if it is passed through to SageMaker or constructed by Amazon Fraud
     * Detector.</p>
     */
    inline ModelInputConfiguration& WithFormat(const ModelInputDataFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the model input configuration. The format differs depending on
     * if it is passed through to SageMaker or constructed by Amazon Fraud
     * Detector.</p>
     */
    inline ModelInputConfiguration& WithFormat(ModelInputDataFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p> For an opaque-model, the input to the model will be a ByteBuffer blob
     * provided in the getPrediction request, and will be passed to SageMaker as-is.
     * For non-opaque models, the input will be constructed by Amazon Fraud Detector
     * based on the model-configuration. </p>
     */
    inline bool GetIsOpaque() const{ return m_isOpaque; }

    /**
     * <p> For an opaque-model, the input to the model will be a ByteBuffer blob
     * provided in the getPrediction request, and will be passed to SageMaker as-is.
     * For non-opaque models, the input will be constructed by Amazon Fraud Detector
     * based on the model-configuration. </p>
     */
    inline bool IsOpaqueHasBeenSet() const { return m_isOpaqueHasBeenSet; }

    /**
     * <p> For an opaque-model, the input to the model will be a ByteBuffer blob
     * provided in the getPrediction request, and will be passed to SageMaker as-is.
     * For non-opaque models, the input will be constructed by Amazon Fraud Detector
     * based on the model-configuration. </p>
     */
    inline void SetIsOpaque(bool value) { m_isOpaqueHasBeenSet = true; m_isOpaque = value; }

    /**
     * <p> For an opaque-model, the input to the model will be a ByteBuffer blob
     * provided in the getPrediction request, and will be passed to SageMaker as-is.
     * For non-opaque models, the input will be constructed by Amazon Fraud Detector
     * based on the model-configuration. </p>
     */
    inline ModelInputConfiguration& WithIsOpaque(bool value) { SetIsOpaque(value); return *this;}


    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline const Aws::String& GetJsonInputTemplate() const{ return m_jsonInputTemplate; }

    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline bool JsonInputTemplateHasBeenSet() const { return m_jsonInputTemplateHasBeenSet; }

    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline void SetJsonInputTemplate(const Aws::String& value) { m_jsonInputTemplateHasBeenSet = true; m_jsonInputTemplate = value; }

    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline void SetJsonInputTemplate(Aws::String&& value) { m_jsonInputTemplateHasBeenSet = true; m_jsonInputTemplate = std::move(value); }

    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline void SetJsonInputTemplate(const char* value) { m_jsonInputTemplateHasBeenSet = true; m_jsonInputTemplate.assign(value); }

    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline ModelInputConfiguration& WithJsonInputTemplate(const Aws::String& value) { SetJsonInputTemplate(value); return *this;}

    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline ModelInputConfiguration& WithJsonInputTemplate(Aws::String&& value) { SetJsonInputTemplate(std::move(value)); return *this;}

    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline ModelInputConfiguration& WithJsonInputTemplate(const char* value) { SetJsonInputTemplate(value); return *this;}


    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline const Aws::String& GetCsvInputTemplate() const{ return m_csvInputTemplate; }

    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline bool CsvInputTemplateHasBeenSet() const { return m_csvInputTemplateHasBeenSet; }

    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline void SetCsvInputTemplate(const Aws::String& value) { m_csvInputTemplateHasBeenSet = true; m_csvInputTemplate = value; }

    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline void SetCsvInputTemplate(Aws::String&& value) { m_csvInputTemplateHasBeenSet = true; m_csvInputTemplate = std::move(value); }

    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline void SetCsvInputTemplate(const char* value) { m_csvInputTemplateHasBeenSet = true; m_csvInputTemplate.assign(value); }

    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline ModelInputConfiguration& WithCsvInputTemplate(const Aws::String& value) { SetCsvInputTemplate(value); return *this;}

    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline ModelInputConfiguration& WithCsvInputTemplate(Aws::String&& value) { SetCsvInputTemplate(std::move(value)); return *this;}

    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline ModelInputConfiguration& WithCsvInputTemplate(const char* value) { SetCsvInputTemplate(value); return *this;}

  private:

    ModelInputDataFormat m_format;
    bool m_formatHasBeenSet;

    bool m_isOpaque;
    bool m_isOpaqueHasBeenSet;

    Aws::String m_jsonInputTemplate;
    bool m_jsonInputTemplateHasBeenSet;

    Aws::String m_csvInputTemplate;
    bool m_csvInputTemplateHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
