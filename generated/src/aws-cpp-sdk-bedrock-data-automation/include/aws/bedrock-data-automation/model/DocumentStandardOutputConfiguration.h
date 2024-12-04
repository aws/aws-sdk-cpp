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
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardOutputConfiguration();
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentStandardExtraction& GetExtraction() const{ return m_extraction; }
    inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
    inline void SetExtraction(const DocumentStandardExtraction& value) { m_extractionHasBeenSet = true; m_extraction = value; }
    inline void SetExtraction(DocumentStandardExtraction&& value) { m_extractionHasBeenSet = true; m_extraction = std::move(value); }
    inline DocumentStandardOutputConfiguration& WithExtraction(const DocumentStandardExtraction& value) { SetExtraction(value); return *this;}
    inline DocumentStandardOutputConfiguration& WithExtraction(DocumentStandardExtraction&& value) { SetExtraction(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentStandardGenerativeField& GetGenerativeField() const{ return m_generativeField; }
    inline bool GenerativeFieldHasBeenSet() const { return m_generativeFieldHasBeenSet; }
    inline void SetGenerativeField(const DocumentStandardGenerativeField& value) { m_generativeFieldHasBeenSet = true; m_generativeField = value; }
    inline void SetGenerativeField(DocumentStandardGenerativeField&& value) { m_generativeFieldHasBeenSet = true; m_generativeField = std::move(value); }
    inline DocumentStandardOutputConfiguration& WithGenerativeField(const DocumentStandardGenerativeField& value) { SetGenerativeField(value); return *this;}
    inline DocumentStandardOutputConfiguration& WithGenerativeField(DocumentStandardGenerativeField&& value) { SetGenerativeField(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentOutputFormat& GetOutputFormat() const{ return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(const DocumentOutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline void SetOutputFormat(DocumentOutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }
    inline DocumentStandardOutputConfiguration& WithOutputFormat(const DocumentOutputFormat& value) { SetOutputFormat(value); return *this;}
    inline DocumentStandardOutputConfiguration& WithOutputFormat(DocumentOutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}
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
