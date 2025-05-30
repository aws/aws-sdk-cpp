﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ConfidenceLevel.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p> The configuration of an ML Detect Security Profile. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MachineLearningDetectionConfig">AWS
   * API Reference</a></p>
   */
  class MachineLearningDetectionConfig
  {
  public:
    AWS_IOT_API MachineLearningDetectionConfig() = default;
    AWS_IOT_API MachineLearningDetectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MachineLearningDetectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The sensitivity of anomalous behavior evaluation. Can be <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>. </p>
     */
    inline ConfidenceLevel GetConfidenceLevel() const { return m_confidenceLevel; }
    inline bool ConfidenceLevelHasBeenSet() const { return m_confidenceLevelHasBeenSet; }
    inline void SetConfidenceLevel(ConfidenceLevel value) { m_confidenceLevelHasBeenSet = true; m_confidenceLevel = value; }
    inline MachineLearningDetectionConfig& WithConfidenceLevel(ConfidenceLevel value) { SetConfidenceLevel(value); return *this;}
    ///@}
  private:

    ConfidenceLevel m_confidenceLevel{ConfidenceLevel::NOT_SET};
    bool m_confidenceLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
