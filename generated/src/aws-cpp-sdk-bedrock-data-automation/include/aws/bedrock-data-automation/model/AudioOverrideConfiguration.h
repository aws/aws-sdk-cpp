/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/ModalityProcessingConfiguration.h>
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
   * <p>Override Configuration of Audio</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/AudioOverrideConfiguration">AWS
   * API Reference</a></p>
   */
  class AudioOverrideConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API AudioOverrideConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API AudioOverrideConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API AudioOverrideConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ModalityProcessingConfiguration& GetModalityProcessing() const { return m_modalityProcessing; }
    inline bool ModalityProcessingHasBeenSet() const { return m_modalityProcessingHasBeenSet; }
    template<typename ModalityProcessingT = ModalityProcessingConfiguration>
    void SetModalityProcessing(ModalityProcessingT&& value) { m_modalityProcessingHasBeenSet = true; m_modalityProcessing = std::forward<ModalityProcessingT>(value); }
    template<typename ModalityProcessingT = ModalityProcessingConfiguration>
    AudioOverrideConfiguration& WithModalityProcessing(ModalityProcessingT&& value) { SetModalityProcessing(std::forward<ModalityProcessingT>(value)); return *this;}
    ///@}
  private:

    ModalityProcessingConfiguration m_modalityProcessing;
    bool m_modalityProcessingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
