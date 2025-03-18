/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DocumentExtractionGranularity.h>
#include <aws/bedrock-data-automation/model/DocumentBoundingBox.h>
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
   * <p>Standard Extraction Configuration of Document</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DocumentStandardExtraction">AWS
   * API Reference</a></p>
   */
  class DocumentStandardExtraction
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardExtraction() = default;
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardExtraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentStandardExtraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentExtractionGranularity& GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    template<typename GranularityT = DocumentExtractionGranularity>
    void SetGranularity(GranularityT&& value) { m_granularityHasBeenSet = true; m_granularity = std::forward<GranularityT>(value); }
    template<typename GranularityT = DocumentExtractionGranularity>
    DocumentStandardExtraction& WithGranularity(GranularityT&& value) { SetGranularity(std::forward<GranularityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentBoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = DocumentBoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = DocumentBoundingBox>
    DocumentStandardExtraction& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}
  private:

    DocumentExtractionGranularity m_granularity;
    bool m_granularityHasBeenSet = false;

    DocumentBoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
