/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>

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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>Answering Machine Detection config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/AnswerMachineDetectionConfig">AWS
   * API Reference</a></p>
   */
  class AnswerMachineDetectionConfig
  {
  public:
    AWS_CONNECTCAMPAIGNS_API AnswerMachineDetectionConfig();
    AWS_CONNECTCAMPAIGNS_API AnswerMachineDetectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API AnswerMachineDetectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enable or disable answering machine detection</p>
     */
    inline bool GetEnableAnswerMachineDetection() const{ return m_enableAnswerMachineDetection; }

    /**
     * <p>Enable or disable answering machine detection</p>
     */
    inline bool EnableAnswerMachineDetectionHasBeenSet() const { return m_enableAnswerMachineDetectionHasBeenSet; }

    /**
     * <p>Enable or disable answering machine detection</p>
     */
    inline void SetEnableAnswerMachineDetection(bool value) { m_enableAnswerMachineDetectionHasBeenSet = true; m_enableAnswerMachineDetection = value; }

    /**
     * <p>Enable or disable answering machine detection</p>
     */
    inline AnswerMachineDetectionConfig& WithEnableAnswerMachineDetection(bool value) { SetEnableAnswerMachineDetection(value); return *this;}

  private:

    bool m_enableAnswerMachineDetection;
    bool m_enableAnswerMachineDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
