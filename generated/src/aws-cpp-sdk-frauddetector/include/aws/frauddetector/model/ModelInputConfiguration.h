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
    AWS_FRAUDDETECTOR_API ModelInputConfiguration() = default;
    AWS_FRAUDDETECTOR_API ModelInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event type name.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    ModelInputConfiguration& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the model input configuration. The format differs depending on
     * if it is passed through to SageMaker or constructed by Amazon Fraud
     * Detector.</p>
     */
    inline ModelInputDataFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(ModelInputDataFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline ModelInputConfiguration& WithFormat(ModelInputDataFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event variables.</p>
     */
    inline bool GetUseEventVariables() const { return m_useEventVariables; }
    inline bool UseEventVariablesHasBeenSet() const { return m_useEventVariablesHasBeenSet; }
    inline void SetUseEventVariables(bool value) { m_useEventVariablesHasBeenSet = true; m_useEventVariables = value; }
    inline ModelInputConfiguration& WithUseEventVariables(bool value) { SetUseEventVariables(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Template for constructing the JSON input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline const Aws::String& GetJsonInputTemplate() const { return m_jsonInputTemplate; }
    inline bool JsonInputTemplateHasBeenSet() const { return m_jsonInputTemplateHasBeenSet; }
    template<typename JsonInputTemplateT = Aws::String>
    void SetJsonInputTemplate(JsonInputTemplateT&& value) { m_jsonInputTemplateHasBeenSet = true; m_jsonInputTemplate = std::forward<JsonInputTemplateT>(value); }
    template<typename JsonInputTemplateT = Aws::String>
    ModelInputConfiguration& WithJsonInputTemplate(JsonInputTemplateT&& value) { SetJsonInputTemplate(std::forward<JsonInputTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Template for constructing the CSV input-data sent to SageMaker. At
     * event-evaluation, the placeholders for variable-names in the template will be
     * replaced with the variable values before being sent to SageMaker. </p>
     */
    inline const Aws::String& GetCsvInputTemplate() const { return m_csvInputTemplate; }
    inline bool CsvInputTemplateHasBeenSet() const { return m_csvInputTemplateHasBeenSet; }
    template<typename CsvInputTemplateT = Aws::String>
    void SetCsvInputTemplate(CsvInputTemplateT&& value) { m_csvInputTemplateHasBeenSet = true; m_csvInputTemplate = std::forward<CsvInputTemplateT>(value); }
    template<typename CsvInputTemplateT = Aws::String>
    ModelInputConfiguration& WithCsvInputTemplate(CsvInputTemplateT&& value) { SetCsvInputTemplate(std::forward<CsvInputTemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    ModelInputDataFormat m_format{ModelInputDataFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    bool m_useEventVariables{false};
    bool m_useEventVariablesHasBeenSet = false;

    Aws::String m_jsonInputTemplate;
    bool m_jsonInputTemplateHasBeenSet = false;

    Aws::String m_csvInputTemplate;
    bool m_csvInputTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
