/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/VideoExtractionCategory.h>
#include <aws/bedrock-data-automation/model/VideoBoundingBox.h>
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
   * <p>Standard Extraction Configuration of Video</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/VideoStandardExtraction">AWS
   * API Reference</a></p>
   */
  class VideoStandardExtraction
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardExtraction();
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardExtraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardExtraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const VideoExtractionCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const VideoExtractionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(VideoExtractionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline VideoStandardExtraction& WithCategory(const VideoExtractionCategory& value) { SetCategory(value); return *this;}
    inline VideoStandardExtraction& WithCategory(VideoExtractionCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VideoBoundingBox& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const VideoBoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(VideoBoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline VideoStandardExtraction& WithBoundingBox(const VideoBoundingBox& value) { SetBoundingBox(value); return *this;}
    inline VideoStandardExtraction& WithBoundingBox(VideoBoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}
    ///@}
  private:

    VideoExtractionCategory m_category;
    bool m_categoryHasBeenSet = false;

    VideoBoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
