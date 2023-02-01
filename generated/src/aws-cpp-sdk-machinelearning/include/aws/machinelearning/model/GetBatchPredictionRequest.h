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
  class GetBatchPredictionRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API GetBatchPredictionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBatchPrediction"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline bool BatchPredictionIdHasBeenSet() const { return m_batchPredictionIdHasBeenSet; }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = value; }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::move(value); }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId.assign(value); }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline GetBatchPredictionRequest& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline GetBatchPredictionRequest& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline GetBatchPredictionRequest& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}

  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
