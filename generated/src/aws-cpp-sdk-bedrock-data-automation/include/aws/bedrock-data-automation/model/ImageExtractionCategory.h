﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/State.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-data-automation/model/ImageExtractionCategoryType.h>
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
   * <p>Category of Image Extraction</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ImageExtractionCategory">AWS
   * API Reference</a></p>
   */
  class ImageExtractionCategory
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ImageExtractionCategory() = default;
    AWS_BEDROCKDATAAUTOMATION_API ImageExtractionCategory(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API ImageExtractionCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline ImageExtractionCategory& WithState(State value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<ImageExtractionCategoryType>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<ImageExtractionCategoryType>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<ImageExtractionCategoryType>>
    ImageExtractionCategory& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    inline ImageExtractionCategory& AddTypes(ImageExtractionCategoryType value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    ///@}
  private:

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<ImageExtractionCategoryType> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
