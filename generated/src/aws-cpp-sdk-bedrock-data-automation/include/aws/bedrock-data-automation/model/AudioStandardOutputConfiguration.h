/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/AudioStandardExtraction.h>
#include <aws/bedrock-data-automation/model/AudioStandardGenerativeField.h>
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
   * <p>Standard Output Configuration of Audio</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/AudioStandardOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class AudioStandardOutputConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API AudioStandardOutputConfiguration();
    AWS_BEDROCKDATAAUTOMATION_API AudioStandardOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API AudioStandardOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AudioStandardExtraction& GetExtraction() const{ return m_extraction; }
    inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
    inline void SetExtraction(const AudioStandardExtraction& value) { m_extractionHasBeenSet = true; m_extraction = value; }
    inline void SetExtraction(AudioStandardExtraction&& value) { m_extractionHasBeenSet = true; m_extraction = std::move(value); }
    inline AudioStandardOutputConfiguration& WithExtraction(const AudioStandardExtraction& value) { SetExtraction(value); return *this;}
    inline AudioStandardOutputConfiguration& WithExtraction(AudioStandardExtraction&& value) { SetExtraction(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudioStandardGenerativeField& GetGenerativeField() const{ return m_generativeField; }
    inline bool GenerativeFieldHasBeenSet() const { return m_generativeFieldHasBeenSet; }
    inline void SetGenerativeField(const AudioStandardGenerativeField& value) { m_generativeFieldHasBeenSet = true; m_generativeField = value; }
    inline void SetGenerativeField(AudioStandardGenerativeField&& value) { m_generativeFieldHasBeenSet = true; m_generativeField = std::move(value); }
    inline AudioStandardOutputConfiguration& WithGenerativeField(const AudioStandardGenerativeField& value) { SetGenerativeField(value); return *this;}
    inline AudioStandardOutputConfiguration& WithGenerativeField(AudioStandardGenerativeField&& value) { SetGenerativeField(std::move(value)); return *this;}
    ///@}
  private:

    AudioStandardExtraction m_extraction;
    bool m_extractionHasBeenSet = false;

    AudioStandardGenerativeField m_generativeField;
    bool m_generativeFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
