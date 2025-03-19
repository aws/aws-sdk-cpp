/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class UpdateMLModelRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API UpdateMLModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMLModel"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    UpdateMLModelRequest& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelName() const { return m_mLModelName; }
    inline bool MLModelNameHasBeenSet() const { return m_mLModelNameHasBeenSet; }
    template<typename MLModelNameT = Aws::String>
    void SetMLModelName(MLModelNameT&& value) { m_mLModelNameHasBeenSet = true; m_mLModelName = std::forward<MLModelNameT>(value); }
    template<typename MLModelNameT = Aws::String>
    UpdateMLModelRequest& WithMLModelName(MLModelNameT&& value) { SetMLModelName(std::forward<MLModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ScoreThreshold</code> used in binary classification
     * <code>MLModel</code> that marks the boundary between a positive prediction and a
     * negative prediction.</p> <p>Output values greater than or equal to the
     * <code>ScoreThreshold</code> receive a positive result from the
     * <code>MLModel</code>, such as <code>true</code>. Output values less than the
     * <code>ScoreThreshold</code> receive a negative response from the
     * <code>MLModel</code>, such as <code>false</code>.</p>
     */
    inline double GetScoreThreshold() const { return m_scoreThreshold; }
    inline bool ScoreThresholdHasBeenSet() const { return m_scoreThresholdHasBeenSet; }
    inline void SetScoreThreshold(double value) { m_scoreThresholdHasBeenSet = true; m_scoreThreshold = value; }
    inline UpdateMLModelRequest& WithScoreThreshold(double value) { SetScoreThreshold(value); return *this;}
    ///@}
  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    Aws::String m_mLModelName;
    bool m_mLModelNameHasBeenSet = false;

    double m_scoreThreshold{0.0};
    bool m_scoreThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
