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
  class AWS_MACHINELEARNING_API CreateBatchPredictionRequest : public MachineLearningRequest
  {
  public:
    CreateBatchPredictionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBatchPrediction"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline bool BatchPredictionIdHasBeenSet() const { return m_batchPredictionIdHasBeenSet; }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline const Aws::String& GetBatchPredictionName() const{ return m_batchPredictionName; }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline bool BatchPredictionNameHasBeenSet() const { return m_batchPredictionNameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline void SetBatchPredictionName(const Aws::String& value) { m_batchPredictionNameHasBeenSet = true; m_batchPredictionName = value; }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline void SetBatchPredictionName(Aws::String&& value) { m_batchPredictionNameHasBeenSet = true; m_batchPredictionName = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline void SetBatchPredictionName(const char* value) { m_batchPredictionNameHasBeenSet = true; m_batchPredictionName.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionName(const Aws::String& value) { SetBatchPredictionName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionName(Aws::String&& value) { SetBatchPredictionName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.
     * <code>BatchPredictionName</code> can only use the UTF-8 character set.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionName(const char* value) { SetBatchPredictionName(value); return *this;}


    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }

    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline CreateBatchPredictionRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline CreateBatchPredictionRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that will generate predictions for the
     * group of observations. </p>
     */
    inline CreateBatchPredictionRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline const Aws::String& GetBatchPredictionDataSourceId() const{ return m_batchPredictionDataSourceId; }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline bool BatchPredictionDataSourceIdHasBeenSet() const { return m_batchPredictionDataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline void SetBatchPredictionDataSourceId(const Aws::String& value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId = value; }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline void SetBatchPredictionDataSourceId(Aws::String&& value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId = std::move(value); }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline void SetBatchPredictionDataSourceId(const char* value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId.assign(value); }

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionDataSourceId(const Aws::String& value) { SetBatchPredictionDataSourceId(value); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionDataSourceId(Aws::String&& value) { SetBatchPredictionDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline CreateBatchPredictionRequest& WithBatchPredictionDataSourceId(const char* value) { SetBatchPredictionDataSourceId(value); return *this;}


    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }

    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }

    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline void SetOutputUri(const Aws::String& value) { m_outputUriHasBeenSet = true; m_outputUri = value; }

    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline void SetOutputUri(Aws::String&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::move(value); }

    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline void SetOutputUri(const char* value) { m_outputUriHasBeenSet = true; m_outputUri.assign(value); }

    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline CreateBatchPredictionRequest& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}

    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline CreateBatchPredictionRequest& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}

    /**
     * <p>The location of an Amazon Simple Storage Service (Amazon S3) bucket or
     * directory to store the batch prediction results. The following substrings are
     * not allowed in the <code>s3 key</code> portion of the <code>outputURI</code>
     * field: ':', '//', '/./', '/../'.</p> <p>Amazon ML needs permissions to store and
     * retrieve the logs on your behalf. For information about how to set permissions,
     * see the <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon
     * Machine Learning Developer Guide</a>.</p>
     */
    inline CreateBatchPredictionRequest& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}

  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet;

    Aws::String m_batchPredictionName;
    bool m_batchPredictionNameHasBeenSet;

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;

    Aws::String m_batchPredictionDataSourceId;
    bool m_batchPredictionDataSourceIdHasBeenSet;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
