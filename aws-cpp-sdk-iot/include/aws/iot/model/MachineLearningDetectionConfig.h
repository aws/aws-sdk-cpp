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
  class AWS_IOT_API MachineLearningDetectionConfig
  {
  public:
    MachineLearningDetectionConfig();
    MachineLearningDetectionConfig(Aws::Utils::Json::JsonView jsonValue);
    MachineLearningDetectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The sensitivity of anomalous behavior evaluation. Can be <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>. </p>
     */
    inline const ConfidenceLevel& GetConfidenceLevel() const{ return m_confidenceLevel; }

    /**
     * <p> The sensitivity of anomalous behavior evaluation. Can be <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>. </p>
     */
    inline bool ConfidenceLevelHasBeenSet() const { return m_confidenceLevelHasBeenSet; }

    /**
     * <p> The sensitivity of anomalous behavior evaluation. Can be <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>. </p>
     */
    inline void SetConfidenceLevel(const ConfidenceLevel& value) { m_confidenceLevelHasBeenSet = true; m_confidenceLevel = value; }

    /**
     * <p> The sensitivity of anomalous behavior evaluation. Can be <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>. </p>
     */
    inline void SetConfidenceLevel(ConfidenceLevel&& value) { m_confidenceLevelHasBeenSet = true; m_confidenceLevel = std::move(value); }

    /**
     * <p> The sensitivity of anomalous behavior evaluation. Can be <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>. </p>
     */
    inline MachineLearningDetectionConfig& WithConfidenceLevel(const ConfidenceLevel& value) { SetConfidenceLevel(value); return *this;}

    /**
     * <p> The sensitivity of anomalous behavior evaluation. Can be <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>. </p>
     */
    inline MachineLearningDetectionConfig& WithConfidenceLevel(ConfidenceLevel&& value) { SetConfidenceLevel(std::move(value)); return *this;}

  private:

    ConfidenceLevel m_confidenceLevel;
    bool m_confidenceLevelHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
