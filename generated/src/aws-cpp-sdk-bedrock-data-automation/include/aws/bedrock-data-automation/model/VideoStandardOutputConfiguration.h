/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/VideoStandardExtraction.h>
#include <aws/bedrock-data-automation/model/VideoStandardGenerativeField.h>
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
   * <p>Standard Output Configuration of Video</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/VideoStandardOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class VideoStandardOutputConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardOutputConfiguration();
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const VideoStandardExtraction& GetExtraction() const{ return m_extraction; }
    inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
    inline void SetExtraction(const VideoStandardExtraction& value) { m_extractionHasBeenSet = true; m_extraction = value; }
    inline void SetExtraction(VideoStandardExtraction&& value) { m_extractionHasBeenSet = true; m_extraction = std::move(value); }
    inline VideoStandardOutputConfiguration& WithExtraction(const VideoStandardExtraction& value) { SetExtraction(value); return *this;}
    inline VideoStandardOutputConfiguration& WithExtraction(VideoStandardExtraction&& value) { SetExtraction(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VideoStandardGenerativeField& GetGenerativeField() const{ return m_generativeField; }
    inline bool GenerativeFieldHasBeenSet() const { return m_generativeFieldHasBeenSet; }
    inline void SetGenerativeField(const VideoStandardGenerativeField& value) { m_generativeFieldHasBeenSet = true; m_generativeField = value; }
    inline void SetGenerativeField(VideoStandardGenerativeField&& value) { m_generativeFieldHasBeenSet = true; m_generativeField = std::move(value); }
    inline VideoStandardOutputConfiguration& WithGenerativeField(const VideoStandardGenerativeField& value) { SetGenerativeField(value); return *this;}
    inline VideoStandardOutputConfiguration& WithGenerativeField(VideoStandardGenerativeField&& value) { SetGenerativeField(std::move(value)); return *this;}
    ///@}
  private:

    VideoStandardExtraction m_extraction;
    bool m_extractionHasBeenSet = false;

    VideoStandardGenerativeField m_generativeField;
    bool m_generativeFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
