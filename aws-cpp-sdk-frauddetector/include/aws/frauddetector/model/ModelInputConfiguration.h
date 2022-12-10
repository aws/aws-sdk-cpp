/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelInputDataFormat.h>
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
   * <p>The Amazon SageMaker model input configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelInputConfiguration">AWS
   * API Reference</a></p>
   */
  class ModelInputConfiguration
  {
  public:
    AWS_FRAUDDETECTOR_API ModelInputConfiguration();
    AWS_FRAUDDETECTOR_API ModelInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event type name.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The event type name.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The event type name.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The event type name.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The event type name.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The event type name.</p>
     */
    inline ModelInputConfiguration& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The event type name.</p>
     */
    inline ModelInputConfiguration& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The event type name.</p>
     */
    inline ModelInputConfiguration& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


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
     * <p>The event variables.</p>
     */
    inline bool GetUseEventVariables() const{ return m_useEventVariables; }

    /**
     * <p>The event variables.</p>
     */
    inline bool UseEventVariablesHasBeenSet() const { return m_useEventVariablesHasBeenSet; }

    /**
     * <p>The event variables.</p>
     */
    inline void SetUseEventVariables(bool value) { m_useEventVariablesHasBeenSet = true; m_useEventVariables = value; }

    /**
     * <p>The event variables.</p>
     */
    inline ModelInputConfiguration& WithUseEventVariables(bool value) { SetUseEventVariables(value); return *this;}


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

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    ModelInputDataFormat m_format;
    bool m_formatHasBeenSet = false;

    bool m_useEventVariables;
    bool m_useEventVariablesHasBeenSet = false;

    Aws::String m_jsonInputTemplate;
    bool m_jsonInputTemplateHasBeenSet = false;

    Aws::String m_csvInputTemplate;
    bool m_csvInputTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
