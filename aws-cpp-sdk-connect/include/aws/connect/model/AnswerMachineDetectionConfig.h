/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration of the answering machine detection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AnswerMachineDetectionConfig">AWS
   * API Reference</a></p>
   */
  class AnswerMachineDetectionConfig
  {
  public:
    AWS_CONNECT_API AnswerMachineDetectionConfig();
    AWS_CONNECT_API AnswerMachineDetectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AnswerMachineDetectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The flag to indicate if answer machine detection analysis needs to be
     * performed for a voice call. If set to <code>true</code>,
     * <code>TrafficType</code> must be set as <code>CAMPAIGN</code>. </p>
     */
    inline bool GetEnableAnswerMachineDetection() const{ return m_enableAnswerMachineDetection; }

    /**
     * <p>The flag to indicate if answer machine detection analysis needs to be
     * performed for a voice call. If set to <code>true</code>,
     * <code>TrafficType</code> must be set as <code>CAMPAIGN</code>. </p>
     */
    inline bool EnableAnswerMachineDetectionHasBeenSet() const { return m_enableAnswerMachineDetectionHasBeenSet; }

    /**
     * <p>The flag to indicate if answer machine detection analysis needs to be
     * performed for a voice call. If set to <code>true</code>,
     * <code>TrafficType</code> must be set as <code>CAMPAIGN</code>. </p>
     */
    inline void SetEnableAnswerMachineDetection(bool value) { m_enableAnswerMachineDetectionHasBeenSet = true; m_enableAnswerMachineDetection = value; }

    /**
     * <p>The flag to indicate if answer machine detection analysis needs to be
     * performed for a voice call. If set to <code>true</code>,
     * <code>TrafficType</code> must be set as <code>CAMPAIGN</code>. </p>
     */
    inline AnswerMachineDetectionConfig& WithEnableAnswerMachineDetection(bool value) { SetEnableAnswerMachineDetection(value); return *this;}


    /**
     * <p>Wait for the answering machine prompt.</p>
     */
    inline bool GetAwaitAnswerMachinePrompt() const{ return m_awaitAnswerMachinePrompt; }

    /**
     * <p>Wait for the answering machine prompt.</p>
     */
    inline bool AwaitAnswerMachinePromptHasBeenSet() const { return m_awaitAnswerMachinePromptHasBeenSet; }

    /**
     * <p>Wait for the answering machine prompt.</p>
     */
    inline void SetAwaitAnswerMachinePrompt(bool value) { m_awaitAnswerMachinePromptHasBeenSet = true; m_awaitAnswerMachinePrompt = value; }

    /**
     * <p>Wait for the answering machine prompt.</p>
     */
    inline AnswerMachineDetectionConfig& WithAwaitAnswerMachinePrompt(bool value) { SetAwaitAnswerMachinePrompt(value); return *this;}

  private:

    bool m_enableAnswerMachineDetection;
    bool m_enableAnswerMachineDetectionHasBeenSet = false;

    bool m_awaitAnswerMachinePrompt;
    bool m_awaitAnswerMachinePromptHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
