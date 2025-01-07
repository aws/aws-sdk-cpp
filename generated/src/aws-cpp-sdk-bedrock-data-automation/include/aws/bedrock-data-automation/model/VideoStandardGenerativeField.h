﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/State.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-data-automation/model/VideoStandardGenerativeFieldType.h>
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
   * <p>Standard Generative Field Configuration of Video</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/VideoStandardGenerativeField">AWS
   * API Reference</a></p>
   */
  class VideoStandardGenerativeField
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardGenerativeField();
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardGenerativeField(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardGenerativeField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const State& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VideoStandardGenerativeField& WithState(const State& value) { SetState(value); return *this;}
    inline VideoStandardGenerativeField& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<VideoStandardGenerativeFieldType>& GetTypes() const{ return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    inline void SetTypes(const Aws::Vector<VideoStandardGenerativeFieldType>& value) { m_typesHasBeenSet = true; m_types = value; }
    inline void SetTypes(Aws::Vector<VideoStandardGenerativeFieldType>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }
    inline VideoStandardGenerativeField& WithTypes(const Aws::Vector<VideoStandardGenerativeFieldType>& value) { SetTypes(value); return *this;}
    inline VideoStandardGenerativeField& WithTypes(Aws::Vector<VideoStandardGenerativeFieldType>&& value) { SetTypes(std::move(value)); return *this;}
    inline VideoStandardGenerativeField& AddTypes(const VideoStandardGenerativeFieldType& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    inline VideoStandardGenerativeField& AddTypes(VideoStandardGenerativeFieldType&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }
    ///@}
  private:

    State m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<VideoStandardGenerativeFieldType> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
