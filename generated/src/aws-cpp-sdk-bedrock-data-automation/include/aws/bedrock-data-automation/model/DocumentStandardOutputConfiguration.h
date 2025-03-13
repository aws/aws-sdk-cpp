/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DocumentStandardExtraction.h>
#include <aws/bedrock-data-automation/model/DocumentStandardGenerativeField.h>
#include <aws/bedrock-data-automation/model/DocumentOutputFormat.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Standard Output Configuration of Document</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DocumentStandardOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class DocumentStandardOutputConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardOutputConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentStandardExtraction& GetExtraction() const { return m_extraction; }
    inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
    template<typename ExtractionT = DocumentStandardExtraction>
    void SetExtraction(ExtractionT&& value) { m_extractionHasBeenSet = true; m_extraction = std::forward<ExtractionT>(value); }
    template<typename ExtractionT = DocumentStandardExtraction>
    DocumentStandardOutputConfiguration& WithExtraction(ExtractionT&& value) { SetExtraction(std::forward<ExtractionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentStandardGenerativeField& GetGenerativeField() const { return m_generativeField; }
    inline bool GenerativeFieldHasBeenSet() const { return m_generativeFieldHasBeenSet; }
    template<typename GenerativeFieldT = DocumentStandardGenerativeField>
    void SetGenerativeField(GenerativeFieldT&& value) { m_generativeFieldHasBeenSet = true; m_generativeField = std::forward<GenerativeFieldT>(value); }
    template<typename GenerativeFieldT = DocumentStandardGenerativeField>
    DocumentStandardOutputConfiguration& WithGenerativeField(GenerativeFieldT&& value) { SetGenerativeField(std::forward<GenerativeFieldT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentOutputFormat& GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    template<typename OutputFormatT = DocumentOutputFormat>
    void SetOutputFormat(OutputFormatT&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::forward<OutputFormatT>(value); }
    template<typename OutputFormatT = DocumentOutputFormat>
    DocumentStandardOutputConfiguration& WithOutputFormat(OutputFormatT&& value) { SetOutputFormat(std::forward<OutputFormatT>(value)); return *this;}
    ///@}
  private:

    DocumentStandardExtraction m_extraction;
    bool m_extractionHasBeenSet = false;

    DocumentStandardGenerativeField m_generativeField;
    bool m_generativeFieldHasBeenSet = false;

    DocumentOutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
