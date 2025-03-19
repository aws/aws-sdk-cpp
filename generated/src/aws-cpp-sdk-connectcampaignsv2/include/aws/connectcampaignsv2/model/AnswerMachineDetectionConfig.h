/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>

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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Answering Machine Detection config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/AnswerMachineDetectionConfig">AWS
   * API Reference</a></p>
   */
  class AnswerMachineDetectionConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API AnswerMachineDetectionConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API AnswerMachineDetectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API AnswerMachineDetectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enable or disable answering machine detection</p>
     */
    inline bool GetEnableAnswerMachineDetection() const { return m_enableAnswerMachineDetection; }
    inline bool EnableAnswerMachineDetectionHasBeenSet() const { return m_enableAnswerMachineDetectionHasBeenSet; }
    inline void SetEnableAnswerMachineDetection(bool value) { m_enableAnswerMachineDetectionHasBeenSet = true; m_enableAnswerMachineDetection = value; }
    inline AnswerMachineDetectionConfig& WithEnableAnswerMachineDetection(bool value) { SetEnableAnswerMachineDetection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable await answer machine prompt</p>
     */
    inline bool GetAwaitAnswerMachinePrompt() const { return m_awaitAnswerMachinePrompt; }
    inline bool AwaitAnswerMachinePromptHasBeenSet() const { return m_awaitAnswerMachinePromptHasBeenSet; }
    inline void SetAwaitAnswerMachinePrompt(bool value) { m_awaitAnswerMachinePromptHasBeenSet = true; m_awaitAnswerMachinePrompt = value; }
    inline AnswerMachineDetectionConfig& WithAwaitAnswerMachinePrompt(bool value) { SetAwaitAnswerMachinePrompt(value); return *this;}
    ///@}
  private:

    bool m_enableAnswerMachineDetection{false};
    bool m_enableAnswerMachineDetectionHasBeenSet = false;

    bool m_awaitAnswerMachinePrompt{false};
    bool m_awaitAnswerMachinePromptHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
