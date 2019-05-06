/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MACHINELEARNING_API UpdateMLModelRequest : public MachineLearningRequest
  {
  public:
    UpdateMLModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMLModel"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline UpdateMLModelRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline UpdateMLModelRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline UpdateMLModelRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelName() const{ return m_mLModelName; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline bool MLModelNameHasBeenSet() const { return m_mLModelNameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelName(const Aws::String& value) { m_mLModelNameHasBeenSet = true; m_mLModelName = value; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelName(Aws::String&& value) { m_mLModelNameHasBeenSet = true; m_mLModelName = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelName(const char* value) { m_mLModelNameHasBeenSet = true; m_mLModelName.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline UpdateMLModelRequest& WithMLModelName(const Aws::String& value) { SetMLModelName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline UpdateMLModelRequest& WithMLModelName(Aws::String&& value) { SetMLModelName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline UpdateMLModelRequest& WithMLModelName(const char* value) { SetMLModelName(value); return *this;}


    /**
     * <p>The <code>ScoreThreshold</code> used in binary classification
     * <code>MLModel</code> that marks the boundary between a positive prediction and a
     * negative prediction.</p> <p>Output values greater than or equal to the
     * <code>ScoreThreshold</code> receive a positive result from the
     * <code>MLModel</code>, such as <code>true</code>. Output values less than the
     * <code>ScoreThreshold</code> receive a negative response from the
     * <code>MLModel</code>, such as <code>false</code>.</p>
     */
    inline double GetScoreThreshold() const{ return m_scoreThreshold; }

    /**
     * <p>The <code>ScoreThreshold</code> used in binary classification
     * <code>MLModel</code> that marks the boundary between a positive prediction and a
     * negative prediction.</p> <p>Output values greater than or equal to the
     * <code>ScoreThreshold</code> receive a positive result from the
     * <code>MLModel</code>, such as <code>true</code>. Output values less than the
     * <code>ScoreThreshold</code> receive a negative response from the
     * <code>MLModel</code>, such as <code>false</code>.</p>
     */
    inline bool ScoreThresholdHasBeenSet() const { return m_scoreThresholdHasBeenSet; }

    /**
     * <p>The <code>ScoreThreshold</code> used in binary classification
     * <code>MLModel</code> that marks the boundary between a positive prediction and a
     * negative prediction.</p> <p>Output values greater than or equal to the
     * <code>ScoreThreshold</code> receive a positive result from the
     * <code>MLModel</code>, such as <code>true</code>. Output values less than the
     * <code>ScoreThreshold</code> receive a negative response from the
     * <code>MLModel</code>, such as <code>false</code>.</p>
     */
    inline void SetScoreThreshold(double value) { m_scoreThresholdHasBeenSet = true; m_scoreThreshold = value; }

    /**
     * <p>The <code>ScoreThreshold</code> used in binary classification
     * <code>MLModel</code> that marks the boundary between a positive prediction and a
     * negative prediction.</p> <p>Output values greater than or equal to the
     * <code>ScoreThreshold</code> receive a positive result from the
     * <code>MLModel</code>, such as <code>true</code>. Output values less than the
     * <code>ScoreThreshold</code> receive a negative response from the
     * <code>MLModel</code>, such as <code>false</code>.</p>
     */
    inline UpdateMLModelRequest& WithScoreThreshold(double value) { SetScoreThreshold(value); return *this;}

  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;

    Aws::String m_mLModelName;
    bool m_mLModelNameHasBeenSet;

    double m_scoreThreshold;
    bool m_scoreThresholdHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
