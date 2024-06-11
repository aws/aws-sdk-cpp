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
  class UpdateBatchPredictionRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API UpdateBatchPredictionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBatchPrediction"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> during creation.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }
    inline bool BatchPredictionIdHasBeenSet() const { return m_batchPredictionIdHasBeenSet; }
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = value; }
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::move(value); }
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId.assign(value); }
    inline UpdateBatchPredictionRequest& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}
    inline UpdateBatchPredictionRequest& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}
    inline UpdateBatchPredictionRequest& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new user-supplied name or description of the
     * <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetBatchPredictionName() const{ return m_batchPredictionName; }
    inline bool BatchPredictionNameHasBeenSet() const { return m_batchPredictionNameHasBeenSet; }
    inline void SetBatchPredictionName(const Aws::String& value) { m_batchPredictionNameHasBeenSet = true; m_batchPredictionName = value; }
    inline void SetBatchPredictionName(Aws::String&& value) { m_batchPredictionNameHasBeenSet = true; m_batchPredictionName = std::move(value); }
    inline void SetBatchPredictionName(const char* value) { m_batchPredictionNameHasBeenSet = true; m_batchPredictionName.assign(value); }
    inline UpdateBatchPredictionRequest& WithBatchPredictionName(const Aws::String& value) { SetBatchPredictionName(value); return *this;}
    inline UpdateBatchPredictionRequest& WithBatchPredictionName(Aws::String&& value) { SetBatchPredictionName(std::move(value)); return *this;}
    inline UpdateBatchPredictionRequest& WithBatchPredictionName(const char* value) { SetBatchPredictionName(value); return *this;}
    ///@}
  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet = false;

    Aws::String m_batchPredictionName;
    bool m_batchPredictionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
