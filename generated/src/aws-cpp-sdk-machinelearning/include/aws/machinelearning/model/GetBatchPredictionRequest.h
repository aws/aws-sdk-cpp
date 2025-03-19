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
    AWS_MACHINELEARNING_API GetBatchPredictionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBatchPrediction"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const { return m_batchPredictionId; }
    inline bool BatchPredictionIdHasBeenSet() const { return m_batchPredictionIdHasBeenSet; }
    template<typename BatchPredictionIdT = Aws::String>
    void SetBatchPredictionId(BatchPredictionIdT&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::forward<BatchPredictionIdT>(value); }
    template<typename BatchPredictionIdT = Aws::String>
    GetBatchPredictionRequest& WithBatchPredictionId(BatchPredictionIdT&& value) { SetBatchPredictionId(std::forward<BatchPredictionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
