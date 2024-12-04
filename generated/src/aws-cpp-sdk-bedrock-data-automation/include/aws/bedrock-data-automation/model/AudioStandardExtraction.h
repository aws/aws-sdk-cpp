/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/AudioExtractionCategory.h>
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
   * <p>Standard Extraction Configuration of Audio</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/AudioStandardExtraction">AWS
   * API Reference</a></p>
   */
  class AudioStandardExtraction
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API AudioStandardExtraction();
    AWS_BEDROCKDATAAUTOMATION_API AudioStandardExtraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API AudioStandardExtraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AudioExtractionCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const AudioExtractionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(AudioExtractionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline AudioStandardExtraction& WithCategory(const AudioExtractionCategory& value) { SetCategory(value); return *this;}
    inline AudioStandardExtraction& WithCategory(AudioExtractionCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}
  private:

    AudioExtractionCategory m_category;
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
