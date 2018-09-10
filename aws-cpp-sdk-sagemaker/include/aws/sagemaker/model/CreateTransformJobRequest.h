﻿/*
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
     * a transform job. This is good for algorithms that implement multiple workers on
     * larger instances . The default value is <code>1</code>. To allow Amazon
     * SageMaker to determine the appropriate number for
     * <code>MaxConcurrentTransforms</code>, set the value to <code>0</code>.</p>
     */
    inline int GetMaxConcurrentTransforms() const{ return m_maxConcurrentTransforms; }

    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. This is good for algorithms that implement multiple workers on
     * larger instances . The default value is <code>1</code>. To allow Amazon
     * SageMaker to determine the appropriate number for
     * <code>MaxConcurrentTransforms</code>, set the value to <code>0</code>.</p>
     */
    inline void SetMaxConcurrentTransforms(int value) { m_maxConcurrentTransformsHasBeenSet = true; m_maxConcurrentTransforms = value; }

    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. This is good for algorithms that implement multiple workers on
     * larger instances . The default value is <code>1</code>. To allow Amazon
     * SageMaker to determine the appropriate number for
     * <code>MaxConcurrentTransforms</code>, set the value to <code>0</code>.</p>
     */
    inline CreateTransformJobRequest& WithMaxConcurrentTransforms(int value) { SetMaxConcurrentTransforms(value); return *this;}


    /**
     * <p>The maximum payload size allowed, in MB. A payload is the data portion of a
     * record (without metadata). The value in <code>MaxPayloadInMB</code> must be
     * greater or equal to the size of a single record. You can approximate the size of
     * a record by dividing the size of your dataset by the number of records. Then
     * multiply this value by the number of records you want in a mini-batch. It is
     * recommended to enter a value slightly larger than this to ensure the records fit
     * within the maximum payload size. The default value is <code>6</code> MB. For an
     * unlimited payload size, set the value to <code>0</code>.</p>
     */
    inline int GetMaxPayloadInMB() const{ return m_maxPayloadInMB; }

    /**
     * <p>The maximum payload size allowed, in MB. A payload is the data portion of a
     * record (without metadata). The value in <code>MaxPayloadInMB</code> must be
     * greater or equal to the size of a single record. You can approximate the size of
     * a record by dividing the size of your dataset by the number of records. Then
     * multiply this value by the number of records you want in a mini-batch. It is
     * recommended to enter a value slightly larger than this to ensure the records fit
     * within the maximum payload size. The default value is <code>6</code> MB. For an
     * unlimited payload size, set the value to <code>0</code>.</p>
     */
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }

    /**
     * <p>The maximum payload size allowed, in MB. A payload is the data portion of a
     * record (without metadata). The value in <code>MaxPayloadInMB</code> must be
     * greater or equal to the size of a single record. You can approximate the size of
     * a record by dividing the size of your dataset by the number of records. Then
     * multiply this value by the number of records you want in a mini-batch. It is
     * recommended to enter a value slightly larger than this to ensure the records fit
     * within the maximum payload size. The default value is <code>6</code> MB. For an
     * unlimited payload size, set the value to <code>0</code>.</p>
     */
    inline CreateTransformJobRequest& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}


    /**
     * <p>Determines the number of records included in a single mini-batch.
     * <code>SingleRecord</code> means only one record is used per mini-batch.
     * <code>MultiRecord</code> means a mini-batch is set to contain as many records
     * that can fit within the <code>MaxPayloadInMB</code> limit.</p> <p>Batch
     * transform will automatically split your input data into whatever payload size is
     * specified if you set <code>SplitType</code> to <code>Line</code> and
     * <code>BatchStrategy</code> to <code>MultiRecord</code>. There's no need to split
     * the dataset into smaller files or to use larger payload sizes unless the records
     * in your dataset are very large.</p>
     */
    inline const BatchStrategy& GetBatchStrategy() const{ return m_batchStrategy; }

    /**
     * <p>Determines the number of records included in a single mini-batch.
     * <code>SingleRecord</code> means only one record is used per mini-batch.
     * <code>MultiRecord</code> means a mini-batch is set to contain as many records
     * that can fit within the <code>MaxPayloadInMB</code> limit.</p> <p>Batch
     * transform will automatically split your input data into whatever payload size is
     * specified if you set <code>SplitType</code> to <code>Line</code> and
     * <code>BatchStrategy</code> to <code>MultiRecord</code>. There's no need to split
     * the dataset into smaller files or to use larger payload sizes unless the records
     * in your dataset are very large.</p>
     */
    inline void SetBatchStrategy(const BatchStrategy& value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = value; }

    /**
     * <p>Determines the number of records included in a single mini-batch.
     * <code>SingleRecord</code> means only one record is used per mini-batch.
     * <code>MultiRecord</code> means a mini-batch is set to contain as many records
     * that can fit within the <code>MaxPayloadInMB</code> limit.</p> <p>Batch
     * transform will automatically split your input data into whatever payload size is
     * specified if you set <code>SplitType</code> to <code>Line</code> and
     * <code>BatchStrategy</code> to <code>MultiRecord</code>. There's no need to split
     * the dataset into smaller files or to use larger payload sizes unless the records
     * in your dataset are very large.</p>
     */
    inline void SetBatchStrategy(BatchStrategy&& value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = std::move(value); }

    /**
     * <p>Determines the number of records included in a single mini-batch.
     * <code>SingleRecord</code> means only one record is used per mini-batch.
     * <code>MultiRecord</code> means a mini-batch is set to contain as many records
     * that can fit within the <code>MaxPayloadInMB</code> limit.</p> <p>Batch
     * transform will automatically split your input data into whatever payload size is
     * specified if you set <code>SplitType</code> to <code>Line</code> and
     * <code>BatchStrategy</code> to <code>MultiRecord</code>. There's no need to split
     * the dataset into smaller files or to use larger payload sizes unless the records
     * in your dataset are very large.</p>
     */
    inline CreateTransformJobRequest& WithBatchStrategy(const BatchStrategy& value) { SetBatchStrategy(value); return *this;}

    /**
     * <p>Determines the number of records included in a single mini-batch.
     * <code>SingleRecord</code> means only one record is used per mini-batch.
     * <code>MultiRecord</code> means a mini-batch is set to contain as many records
     * that can fit within the <code>MaxPayloadInMB</code> limit.</p> <p>Batch
     * transform will automatically split your input data into whatever payload size is
     * specified if you set <code>SplitType</code> to <code>Line</code> and
     * <code>BatchStrategy</code> to <code>MultiRecord</code>. There's no need to split
     * the dataset into smaller files or to use larger payload sizes unless the records
     * in your dataset are very large.</p>
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
     * <p>An array of key-value pairs. Adding tags is optional. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. Adding tags is optional. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. Adding tags is optional. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. Adding tags is optional. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateTransformJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. Adding tags is optional. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateTransformJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. Adding tags is optional. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateTransformJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. Adding tags is optional. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
