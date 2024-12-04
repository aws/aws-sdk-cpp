/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/State.h>
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
   * <p>Bounding Box Configuration of Video Extraction</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/VideoBoundingBox">AWS
   * API Reference</a></p>
   */
  class VideoBoundingBox
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API VideoBoundingBox();
    AWS_BEDROCKDATAAUTOMATION_API VideoBoundingBox(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API VideoBoundingBox& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const State& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VideoBoundingBox& WithState(const State& value) { SetState(value); return *this;}
    inline VideoBoundingBox& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    State m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
