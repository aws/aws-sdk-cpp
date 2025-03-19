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
  class CreateBatchPredictionRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API CreateBatchPredictionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBatchPrediction"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const { return m_batchPredictionId; }
    inline bool BatchPredictionIdHasBeenSet() const { return m_batchPredictionIdHasBeenSet; }
    template<typename BatchPredictionIdT = Aws::String>
    void SetBatchPredictionId(BatchPredictionIdT&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::forward<BatchPredictionIdT>(value); }
    template<typename BatchPredictionIdT = Aws::String>
    CreateBatchPredictionRequest& WithBatchPredictionId(BatchPredictionIdT&& value) { SetBatchPredictionId(std::forward<BatchPredictionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline const Aws::String& GetBatchPredictionName() const { return m_batchPredictionName; }
    inline bool BatchPredictionNameHasBeenSet() const { return m_batchPredictionNameHasBeenSet; }
    template<typename BatchPredictionNameT = Aws::String>
    void SetBatchPredictionName(BatchPredictionNameT&& value) { m_batchPredictionNameHasBeenSet = true; m_batchPredictionName = std::forward<BatchPredictionNameT>(value); }
    template<typename BatchPredictionNameT = Aws::String>
    CreateBatchPredictionRequest& WithBatchPredictionName(BatchPredictionNameT&& value) { SetBatchPredictionName(std::forward<BatchPredictionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    CreateBatchPredictionRequest& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline const Aws::String& GetBatchPredictionDataSourceId() const { return m_batchPredictionDataSourceId; }
    inline bool BatchPredictionDataSourceIdHasBeenSet() const { return m_batchPredictionDataSourceIdHasBeenSet; }
    template<typename BatchPredictionDataSourceIdT = Aws::String>
    void SetBatchPredictionDataSourceId(BatchPredictionDataSourceIdT&& value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId = std::forward<BatchPredictionDataSourceIdT>(value); }
    template<typename BatchPredictionDataSourceIdT = Aws::String>
    CreateBatchPredictionRequest& WithBatchPredictionDataSourceId(BatchPredictionDataSourceIdT&& value) { SetBatchPredictionDataSourceId(std::forward<BatchPredictionDataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="https://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline const Aws::String& GetOutputUri() const { return m_outputUri; }
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
    template<typename OutputUriT = Aws::String>
    void SetOutputUri(OutputUriT&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::forward<OutputUriT>(value); }
    template<typename OutputUriT = Aws::String>
    CreateBatchPredictionRequest& WithOutputUri(OutputUriT&& value) { SetOutputUri(std::forward<OutputUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet = false;

    Aws::String m_batchPredictionName;
    bool m_batchPredictionNameHasBeenSet = false;

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    Aws::String m_batchPredictionDataSourceId;
    bool m_batchPredictionDataSourceIdHasBeenSet = false;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
