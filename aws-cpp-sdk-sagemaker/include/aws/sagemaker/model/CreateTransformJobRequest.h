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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/BatchStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/TransformInput.h>
#include <aws/sagemaker/model/TransformOutput.h>
#include <aws/sagemaker/model/TransformResources.h>
#include <aws/sagemaker/model/DataProcessing.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateTransformJobRequest : public SageMakerRequest
  {
  public:
    CreateTransformJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransformJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the transform job. The name must be unique within an AWS Region
     * in an AWS account. </p>
     */
    inline const Aws::String& GetTransformJobName() const{ return m_transformJobName; }

    /**
     * <p>The name of the transform job. The name must be unique within an AWS Region
     * in an AWS account. </p>
     */
    inline bool TransformJobNameHasBeenSet() const { return m_transformJobNameHasBeenSet; }

    /**
     * <p>The name of the transform job. The name must be unique within an AWS Region
     * in an AWS account. </p>
     */
    inline void SetTransformJobName(const Aws::String& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = value; }

    /**
     * <p>The name of the transform job. The name must be unique within an AWS Region
     * in an AWS account. </p>
     */
    inline void SetTransformJobName(Aws::String&& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = std::move(value); }

    /**
     * <p>The name of the transform job. The name must be unique within an AWS Region
     * in an AWS account. </p>
     */
    inline void SetTransformJobName(const char* value) { m_transformJobNameHasBeenSet = true; m_transformJobName.assign(value); }

    /**
     * <p>The name of the transform job. The name must be unique within an AWS Region
     * in an AWS account. </p>
     */
    inline CreateTransformJobRequest& WithTransformJobName(const Aws::String& value) { SetTransformJobName(value); return *this;}

    /**
     * <p>The name of the transform job. The name must be unique within an AWS Region
     * in an AWS account. </p>
     */
    inline CreateTransformJobRequest& WithTransformJobName(Aws::String&& value) { SetTransformJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform job. The name must be unique within an AWS Region
     * in an AWS account. </p>
     */
    inline CreateTransformJobRequest& WithTransformJobName(const char* value) { SetTransformJobName(value); return *this;}


    /**
     * <p>The name of the model that you want to use for the transform job.
     * <code>ModelName</code> must be the name of an existing Amazon SageMaker model
     * within an AWS Region in an AWS account.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model that you want to use for the transform job.
     * <code>ModelName</code> must be the name of an existing Amazon SageMaker model
     * within an AWS Region in an AWS account.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model that you want to use for the transform job.
     * <code>ModelName</code> must be the name of an existing Amazon SageMaker model
     * within an AWS Region in an AWS account.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model that you want to use for the transform job.
     * <code>ModelName</code> must be the name of an existing Amazon SageMaker model
     * within an AWS Region in an AWS account.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model that you want to use for the transform job.
     * <code>ModelName</code> must be the name of an existing Amazon SageMaker model
     * within an AWS Region in an AWS account.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model that you want to use for the transform job.
     * <code>ModelName</code> must be the name of an existing Amazon SageMaker model
     * within an AWS Region in an AWS account.</p>
     */
    inline CreateTransformJobRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model that you want to use for the transform job.
     * <code>ModelName</code> must be the name of an existing Amazon SageMaker model
     * within an AWS Region in an AWS account.</p>
     */
    inline CreateTransformJobRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model that you want to use for the transform job.
     * <code>ModelName</code> must be the name of an existing Amazon SageMaker model
     * within an AWS Region in an AWS account.</p>
     */
    inline CreateTransformJobRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to
     * <code>0</code> or left unset, Amazon SageMaker checks the optional
     * execution-parameters to determine the optimal settings for your chosen
     * algorithm. If the execution-parameters endpoint is not enabled, the default
     * value is <code>1</code>. For more information on execution-parameters, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-batch-code.html#your-algorithms-batch-code-how-containe-serves-requests">How
     * Containers Serve Requests</a>. For built-in algorithms, you don't need to set a
     * value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline int GetMaxConcurrentTransforms() const{ return m_maxConcurrentTransforms; }

    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to
     * <code>0</code> or left unset, Amazon SageMaker checks the optional
     * execution-parameters to determine the optimal settings for your chosen
     * algorithm. If the execution-parameters endpoint is not enabled, the default
     * value is <code>1</code>. For more information on execution-parameters, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-batch-code.html#your-algorithms-batch-code-how-containe-serves-requests">How
     * Containers Serve Requests</a>. For built-in algorithms, you don't need to set a
     * value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline bool MaxConcurrentTransformsHasBeenSet() const { return m_maxConcurrentTransformsHasBeenSet; }

    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to
     * <code>0</code> or left unset, Amazon SageMaker checks the optional
     * execution-parameters to determine the optimal settings for your chosen
     * algorithm. If the execution-parameters endpoint is not enabled, the default
     * value is <code>1</code>. For more information on execution-parameters, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-batch-code.html#your-algorithms-batch-code-how-containe-serves-requests">How
     * Containers Serve Requests</a>. For built-in algorithms, you don't need to set a
     * value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline void SetMaxConcurrentTransforms(int value) { m_maxConcurrentTransformsHasBeenSet = true; m_maxConcurrentTransforms = value; }

    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to
     * <code>0</code> or left unset, Amazon SageMaker checks the optional
     * execution-parameters to determine the optimal settings for your chosen
     * algorithm. If the execution-parameters endpoint is not enabled, the default
     * value is <code>1</code>. For more information on execution-parameters, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-batch-code.html#your-algorithms-batch-code-how-containe-serves-requests">How
     * Containers Serve Requests</a>. For built-in algorithms, you don't need to set a
     * value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline CreateTransformJobRequest& WithMaxConcurrentTransforms(int value) { SetMaxConcurrentTransforms(value); return *this;}


    /**
     * <p>The maximum allowed size of the payload, in MB. A <i>payload</i> is the data
     * portion of a record (without metadata). The value in <code>MaxPayloadInMB</code>
     * must be greater than, or equal to, the size of a single record. To estimate the
     * size of a record in MB, divide the size of your dataset by the number of
     * records. To ensure that the records fit within the maximum payload size, we
     * recommend using a slightly larger value. The default value is <code>6</code> MB.
     * </p> <p>For cases where the payload might be arbitrarily large and is
     * transmitted using HTTP chunked encoding, set the value to <code>0</code>. This
     * feature works only in supported algorithms. Currently, Amazon SageMaker built-in
     * algorithms do not support HTTP chunked encoding.</p>
     */
    inline int GetMaxPayloadInMB() const{ return m_maxPayloadInMB; }

    /**
     * <p>The maximum allowed size of the payload, in MB. A <i>payload</i> is the data
     * portion of a record (without metadata). The value in <code>MaxPayloadInMB</code>
     * must be greater than, or equal to, the size of a single record. To estimate the
     * size of a record in MB, divide the size of your dataset by the number of
     * records. To ensure that the records fit within the maximum payload size, we
     * recommend using a slightly larger value. The default value is <code>6</code> MB.
     * </p> <p>For cases where the payload might be arbitrarily large and is
     * transmitted using HTTP chunked encoding, set the value to <code>0</code>. This
     * feature works only in supported algorithms. Currently, Amazon SageMaker built-in
     * algorithms do not support HTTP chunked encoding.</p>
     */
    inline bool MaxPayloadInMBHasBeenSet() const { return m_maxPayloadInMBHasBeenSet; }

    /**
     * <p>The maximum allowed size of the payload, in MB. A <i>payload</i> is the data
     * portion of a record (without metadata). The value in <code>MaxPayloadInMB</code>
     * must be greater than, or equal to, the size of a single record. To estimate the
     * size of a record in MB, divide the size of your dataset by the number of
     * records. To ensure that the records fit within the maximum payload size, we
     * recommend using a slightly larger value. The default value is <code>6</code> MB.
     * </p> <p>For cases where the payload might be arbitrarily large and is
     * transmitted using HTTP chunked encoding, set the value to <code>0</code>. This
     * feature works only in supported algorithms. Currently, Amazon SageMaker built-in
     * algorithms do not support HTTP chunked encoding.</p>
     */
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }

    /**
     * <p>The maximum allowed size of the payload, in MB. A <i>payload</i> is the data
     * portion of a record (without metadata). The value in <code>MaxPayloadInMB</code>
     * must be greater than, or equal to, the size of a single record. To estimate the
     * size of a record in MB, divide the size of your dataset by the number of
     * records. To ensure that the records fit within the maximum payload size, we
     * recommend using a slightly larger value. The default value is <code>6</code> MB.
     * </p> <p>For cases where the payload might be arbitrarily large and is
     * transmitted using HTTP chunked encoding, set the value to <code>0</code>. This
     * feature works only in supported algorithms. Currently, Amazon SageMaker built-in
     * algorithms do not support HTTP chunked encoding.</p>
     */
    inline CreateTransformJobRequest& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}


    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p> <p>To
     * use only one record when making an HTTP invocation request to a container, set
     * <code>BatchStrategy</code> to <code>SingleRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p> <p>To fit as many records in a
     * mini-batch as can fit within the <code>MaxPayloadInMB</code> limit, set
     * <code>BatchStrategy</code> to <code>MultiRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p>
     */
    inline const BatchStrategy& GetBatchStrategy() const{ return m_batchStrategy; }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p> <p>To
     * use only one record when making an HTTP invocation request to a container, set
     * <code>BatchStrategy</code> to <code>SingleRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p> <p>To fit as many records in a
     * mini-batch as can fit within the <code>MaxPayloadInMB</code> limit, set
     * <code>BatchStrategy</code> to <code>MultiRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p>
     */
    inline bool BatchStrategyHasBeenSet() const { return m_batchStrategyHasBeenSet; }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p> <p>To
     * use only one record when making an HTTP invocation request to a container, set
     * <code>BatchStrategy</code> to <code>SingleRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p> <p>To fit as many records in a
     * mini-batch as can fit within the <code>MaxPayloadInMB</code> limit, set
     * <code>BatchStrategy</code> to <code>MultiRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p>
     */
    inline void SetBatchStrategy(const BatchStrategy& value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = value; }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p> <p>To
     * use only one record when making an HTTP invocation request to a container, set
     * <code>BatchStrategy</code> to <code>SingleRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p> <p>To fit as many records in a
     * mini-batch as can fit within the <code>MaxPayloadInMB</code> limit, set
     * <code>BatchStrategy</code> to <code>MultiRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p>
     */
    inline void SetBatchStrategy(BatchStrategy&& value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = std::move(value); }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p> <p>To
     * use only one record when making an HTTP invocation request to a container, set
     * <code>BatchStrategy</code> to <code>SingleRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p> <p>To fit as many records in a
     * mini-batch as can fit within the <code>MaxPayloadInMB</code> limit, set
     * <code>BatchStrategy</code> to <code>MultiRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p>
     */
    inline CreateTransformJobRequest& WithBatchStrategy(const BatchStrategy& value) { SetBatchStrategy(value); return *this;}

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p> <p>To
     * use only one record when making an HTTP invocation request to a container, set
     * <code>BatchStrategy</code> to <code>SingleRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p> <p>To fit as many records in a
     * mini-batch as can fit within the <code>MaxPayloadInMB</code> limit, set
     * <code>BatchStrategy</code> to <code>MultiRecord</code> and
     * <code>SplitType</code> to <code>Line</code>.</p>
     */
    inline CreateTransformJobRequest& WithBatchStrategy(BatchStrategy&& value) { SetBatchStrategy(std::move(value)); return *this;}


    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline CreateTransformJobRequest& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }


    /**
     * <p>Describes the input source and the way the transform job consumes it.</p>
     */
    inline const TransformInput& GetTransformInput() const{ return m_transformInput; }

    /**
     * <p>Describes the input source and the way the transform job consumes it.</p>
     */
    inline bool TransformInputHasBeenSet() const { return m_transformInputHasBeenSet; }

    /**
     * <p>Describes the input source and the way the transform job consumes it.</p>
     */
    inline void SetTransformInput(const TransformInput& value) { m_transformInputHasBeenSet = true; m_transformInput = value; }

    /**
     * <p>Describes the input source and the way the transform job consumes it.</p>
     */
    inline void SetTransformInput(TransformInput&& value) { m_transformInputHasBeenSet = true; m_transformInput = std::move(value); }

    /**
     * <p>Describes the input source and the way the transform job consumes it.</p>
     */
    inline CreateTransformJobRequest& WithTransformInput(const TransformInput& value) { SetTransformInput(value); return *this;}

    /**
     * <p>Describes the input source and the way the transform job consumes it.</p>
     */
    inline CreateTransformJobRequest& WithTransformInput(TransformInput&& value) { SetTransformInput(std::move(value)); return *this;}


    /**
     * <p>Describes the results of the transform job.</p>
     */
    inline const TransformOutput& GetTransformOutput() const{ return m_transformOutput; }

    /**
     * <p>Describes the results of the transform job.</p>
     */
    inline bool TransformOutputHasBeenSet() const { return m_transformOutputHasBeenSet; }

    /**
     * <p>Describes the results of the transform job.</p>
     */
    inline void SetTransformOutput(const TransformOutput& value) { m_transformOutputHasBeenSet = true; m_transformOutput = value; }

    /**
     * <p>Describes the results of the transform job.</p>
     */
    inline void SetTransformOutput(TransformOutput&& value) { m_transformOutputHasBeenSet = true; m_transformOutput = std::move(value); }

    /**
     * <p>Describes the results of the transform job.</p>
     */
    inline CreateTransformJobRequest& WithTransformOutput(const TransformOutput& value) { SetTransformOutput(value); return *this;}

    /**
     * <p>Describes the results of the transform job.</p>
     */
    inline CreateTransformJobRequest& WithTransformOutput(TransformOutput&& value) { SetTransformOutput(std::move(value)); return *this;}


    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline const TransformResources& GetTransformResources() const{ return m_transformResources; }

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline bool TransformResourcesHasBeenSet() const { return m_transformResourcesHasBeenSet; }

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline void SetTransformResources(const TransformResources& value) { m_transformResourcesHasBeenSet = true; m_transformResources = value; }

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline void SetTransformResources(TransformResources&& value) { m_transformResourcesHasBeenSet = true; m_transformResources = std::move(value); }

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline CreateTransformJobRequest& WithTransformResources(const TransformResources& value) { SetTransformResources(value); return *this;}

    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline CreateTransformJobRequest& WithTransformResources(TransformResources&& value) { SetTransformResources(std::move(value)); return *this;}


    /**
     * <p>The data structure used for combining the input data and inference in the
     * output file. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html">Batch
     * Transform I/O Join</a>.</p>
     */
    inline const DataProcessing& GetDataProcessing() const{ return m_dataProcessing; }

    /**
     * <p>The data structure used for combining the input data and inference in the
     * output file. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html">Batch
     * Transform I/O Join</a>.</p>
     */
    inline bool DataProcessingHasBeenSet() const { return m_dataProcessingHasBeenSet; }

    /**
     * <p>The data structure used for combining the input data and inference in the
     * output file. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html">Batch
     * Transform I/O Join</a>.</p>
     */
    inline void SetDataProcessing(const DataProcessing& value) { m_dataProcessingHasBeenSet = true; m_dataProcessing = value; }

    /**
     * <p>The data structure used for combining the input data and inference in the
     * output file. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html">Batch
     * Transform I/O Join</a>.</p>
     */
    inline void SetDataProcessing(DataProcessing&& value) { m_dataProcessingHasBeenSet = true; m_dataProcessing = std::move(value); }

    /**
     * <p>The data structure used for combining the input data and inference in the
     * output file. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html">Batch
     * Transform I/O Join</a>.</p>
     */
    inline CreateTransformJobRequest& WithDataProcessing(const DataProcessing& value) { SetDataProcessing(value); return *this;}

    /**
     * <p>The data structure used for combining the input data and inference in the
     * output file. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-io-join.html">Batch
     * Transform I/O Join</a>.</p>
     */
    inline CreateTransformJobRequest& WithDataProcessing(DataProcessing&& value) { SetDataProcessing(std::move(value)); return *this;}


    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateTransformJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateTransformJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateTransformJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateTransformJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transformJobName;
    bool m_transformJobNameHasBeenSet;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;

    int m_maxConcurrentTransforms;
    bool m_maxConcurrentTransformsHasBeenSet;

    int m_maxPayloadInMB;
    bool m_maxPayloadInMBHasBeenSet;

    BatchStrategy m_batchStrategy;
    bool m_batchStrategyHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet;

    TransformInput m_transformInput;
    bool m_transformInputHasBeenSet;

    TransformOutput m_transformOutput;
    bool m_transformOutputHasBeenSet;

    TransformResources m_transformResources;
    bool m_transformResourcesHasBeenSet;

    DataProcessing m_dataProcessing;
    bool m_dataProcessingHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
