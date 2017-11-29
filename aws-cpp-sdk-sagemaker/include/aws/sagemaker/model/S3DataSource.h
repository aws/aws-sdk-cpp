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
#include <aws/sagemaker/model/S3DataType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/S3DataDistribution.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes the S3 data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/S3DataSource">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API S3DataSource
  {
  public:
    S3DataSource();
    S3DataSource(const Aws::Utils::Json::JsonValue& jsonValue);
    S3DataSource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If you choose <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name
     * prefix. Amazon SageMaker uses all objects with the specified key name prefix for
     * model training. </p> <p>If you choose <code>ManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is a manifest file containing a
     * list of object keys that you want Amazon SageMaker to use for model training.
     * </p>
     */
    inline const S3DataType& GetS3DataType() const{ return m_s3DataType; }

    /**
     * <p>If you choose <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name
     * prefix. Amazon SageMaker uses all objects with the specified key name prefix for
     * model training. </p> <p>If you choose <code>ManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is a manifest file containing a
     * list of object keys that you want Amazon SageMaker to use for model training.
     * </p>
     */
    inline void SetS3DataType(const S3DataType& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }

    /**
     * <p>If you choose <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name
     * prefix. Amazon SageMaker uses all objects with the specified key name prefix for
     * model training. </p> <p>If you choose <code>ManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is a manifest file containing a
     * list of object keys that you want Amazon SageMaker to use for model training.
     * </p>
     */
    inline void SetS3DataType(S3DataType&& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = std::move(value); }

    /**
     * <p>If you choose <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name
     * prefix. Amazon SageMaker uses all objects with the specified key name prefix for
     * model training. </p> <p>If you choose <code>ManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is a manifest file containing a
     * list of object keys that you want Amazon SageMaker to use for model training.
     * </p>
     */
    inline S3DataSource& WithS3DataType(const S3DataType& value) { SetS3DataType(value); return *this;}

    /**
     * <p>If you choose <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name
     * prefix. Amazon SageMaker uses all objects with the specified key name prefix for
     * model training. </p> <p>If you choose <code>ManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is a manifest file containing a
     * list of object keys that you want Amazon SageMaker to use for model training.
     * </p>
     */
    inline S3DataSource& WithS3DataType(S3DataType&& value) { SetS3DataType(std::move(value)); return *this;}


    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example: </p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix</code>.
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> The manifest is an S3
     * object which is a JSON file with the following format: </p> <p> <code>[</code>
     * </p> <p> <code> {"prefix": "s3://customer_bucket/some/prefix/"},</code> </p> <p>
     * <code> "relative/path/to/custdata-1",</code> </p> <p> <code>
     * "relative/path/custdata-2",</code> </p> <p> <code> ...</code> </p> <p> <code>
     * ]</code> </p> <p> The preceding JSON matches the following <code>s3Uris</code>:
     * </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-1</code> </p>
     * <p> <code>...</code> </p> <p> The complete set of <code>s3uris</code> in this
     * manifest constitutes the input data for the channel for this datasource. The
     * object that each <code>s3uris</code> points to must readable by the IAM role
     * that Amazon SageMaker uses to perform tasks on your behalf. </p> </li> </ul>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example: </p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix</code>.
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> The manifest is an S3
     * object which is a JSON file with the following format: </p> <p> <code>[</code>
     * </p> <p> <code> {"prefix": "s3://customer_bucket/some/prefix/"},</code> </p> <p>
     * <code> "relative/path/to/custdata-1",</code> </p> <p> <code>
     * "relative/path/custdata-2",</code> </p> <p> <code> ...</code> </p> <p> <code>
     * ]</code> </p> <p> The preceding JSON matches the following <code>s3Uris</code>:
     * </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-1</code> </p>
     * <p> <code>...</code> </p> <p> The complete set of <code>s3uris</code> in this
     * manifest constitutes the input data for the channel for this datasource. The
     * object that each <code>s3uris</code> points to must readable by the IAM role
     * that Amazon SageMaker uses to perform tasks on your behalf. </p> </li> </ul>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example: </p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix</code>.
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> The manifest is an S3
     * object which is a JSON file with the following format: </p> <p> <code>[</code>
     * </p> <p> <code> {"prefix": "s3://customer_bucket/some/prefix/"},</code> </p> <p>
     * <code> "relative/path/to/custdata-1",</code> </p> <p> <code>
     * "relative/path/custdata-2",</code> </p> <p> <code> ...</code> </p> <p> <code>
     * ]</code> </p> <p> The preceding JSON matches the following <code>s3Uris</code>:
     * </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-1</code> </p>
     * <p> <code>...</code> </p> <p> The complete set of <code>s3uris</code> in this
     * manifest constitutes the input data for the channel for this datasource. The
     * object that each <code>s3uris</code> points to must readable by the IAM role
     * that Amazon SageMaker uses to perform tasks on your behalf. </p> </li> </ul>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example: </p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix</code>.
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> The manifest is an S3
     * object which is a JSON file with the following format: </p> <p> <code>[</code>
     * </p> <p> <code> {"prefix": "s3://customer_bucket/some/prefix/"},</code> </p> <p>
     * <code> "relative/path/to/custdata-1",</code> </p> <p> <code>
     * "relative/path/custdata-2",</code> </p> <p> <code> ...</code> </p> <p> <code>
     * ]</code> </p> <p> The preceding JSON matches the following <code>s3Uris</code>:
     * </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-1</code> </p>
     * <p> <code>...</code> </p> <p> The complete set of <code>s3uris</code> in this
     * manifest constitutes the input data for the channel for this datasource. The
     * object that each <code>s3uris</code> points to must readable by the IAM role
     * that Amazon SageMaker uses to perform tasks on your behalf. </p> </li> </ul>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example: </p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix</code>.
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> The manifest is an S3
     * object which is a JSON file with the following format: </p> <p> <code>[</code>
     * </p> <p> <code> {"prefix": "s3://customer_bucket/some/prefix/"},</code> </p> <p>
     * <code> "relative/path/to/custdata-1",</code> </p> <p> <code>
     * "relative/path/custdata-2",</code> </p> <p> <code> ...</code> </p> <p> <code>
     * ]</code> </p> <p> The preceding JSON matches the following <code>s3Uris</code>:
     * </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-1</code> </p>
     * <p> <code>...</code> </p> <p> The complete set of <code>s3uris</code> in this
     * manifest constitutes the input data for the channel for this datasource. The
     * object that each <code>s3uris</code> points to must readable by the IAM role
     * that Amazon SageMaker uses to perform tasks on your behalf. </p> </li> </ul>
     */
    inline S3DataSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example: </p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix</code>.
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> The manifest is an S3
     * object which is a JSON file with the following format: </p> <p> <code>[</code>
     * </p> <p> <code> {"prefix": "s3://customer_bucket/some/prefix/"},</code> </p> <p>
     * <code> "relative/path/to/custdata-1",</code> </p> <p> <code>
     * "relative/path/custdata-2",</code> </p> <p> <code> ...</code> </p> <p> <code>
     * ]</code> </p> <p> The preceding JSON matches the following <code>s3Uris</code>:
     * </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-1</code> </p>
     * <p> <code>...</code> </p> <p> The complete set of <code>s3uris</code> in this
     * manifest constitutes the input data for the channel for this datasource. The
     * object that each <code>s3uris</code> points to must readable by the IAM role
     * that Amazon SageMaker uses to perform tasks on your behalf. </p> </li> </ul>
     */
    inline S3DataSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example: </p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix</code>.
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> The manifest is an S3
     * object which is a JSON file with the following format: </p> <p> <code>[</code>
     * </p> <p> <code> {"prefix": "s3://customer_bucket/some/prefix/"},</code> </p> <p>
     * <code> "relative/path/to/custdata-1",</code> </p> <p> <code>
     * "relative/path/custdata-2",</code> </p> <p> <code> ...</code> </p> <p> <code>
     * ]</code> </p> <p> The preceding JSON matches the following <code>s3Uris</code>:
     * </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-1</code> </p>
     * <p> <code>...</code> </p> <p> The complete set of <code>s3uris</code> in this
     * manifest constitutes the input data for the channel for this datasource. The
     * object that each <code>s3uris</code> points to must readable by the IAM role
     * that Amazon SageMaker uses to perform tasks on your behalf. </p> </li> </ul>
     */
    inline S3DataSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>If you want Amazon SageMaker to replicate the entire dataset on each ML
     * compute instance that is launched for model training, specify
     * <code>FullyReplicated</code>. </p> <p>If you want Amazon SageMaker to replicate
     * a subset of data on each ML compute instance that is launched for model
     * training, specify <code>ShardedByS3Key</code>. If there are <i>n</i> ML compute
     * instances launched for a training job, each instance gets approximately
     * 1/<i>n</i> of the number of S3 objects. In this case, model training on each
     * machine uses only the subset of training data. </p> <p>Don't choose more ML
     * compute instances for training than available S3 objects. If you do, some nodes
     * won't get any data and you will pay for nodes that aren't getting any training
     * data. This applies in both FILE and PIPE modes. Keep this in mind when
     * developing algorithms. </p> <p>In distributed training, where you use multiple
     * ML compute EC2 instances, you might choose <code>ShardedByS3Key</code>. If the
     * algorithm requires copying training data to the ML storage volume (when
     * <code>TrainingInputMode</code> is set to <code>File</code>), this copies
     * 1/<i>n</i> of the number of objects. </p>
     */
    inline const S3DataDistribution& GetS3DataDistributionType() const{ return m_s3DataDistributionType; }

    /**
     * <p>If you want Amazon SageMaker to replicate the entire dataset on each ML
     * compute instance that is launched for model training, specify
     * <code>FullyReplicated</code>. </p> <p>If you want Amazon SageMaker to replicate
     * a subset of data on each ML compute instance that is launched for model
     * training, specify <code>ShardedByS3Key</code>. If there are <i>n</i> ML compute
     * instances launched for a training job, each instance gets approximately
     * 1/<i>n</i> of the number of S3 objects. In this case, model training on each
     * machine uses only the subset of training data. </p> <p>Don't choose more ML
     * compute instances for training than available S3 objects. If you do, some nodes
     * won't get any data and you will pay for nodes that aren't getting any training
     * data. This applies in both FILE and PIPE modes. Keep this in mind when
     * developing algorithms. </p> <p>In distributed training, where you use multiple
     * ML compute EC2 instances, you might choose <code>ShardedByS3Key</code>. If the
     * algorithm requires copying training data to the ML storage volume (when
     * <code>TrainingInputMode</code> is set to <code>File</code>), this copies
     * 1/<i>n</i> of the number of objects. </p>
     */
    inline void SetS3DataDistributionType(const S3DataDistribution& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }

    /**
     * <p>If you want Amazon SageMaker to replicate the entire dataset on each ML
     * compute instance that is launched for model training, specify
     * <code>FullyReplicated</code>. </p> <p>If you want Amazon SageMaker to replicate
     * a subset of data on each ML compute instance that is launched for model
     * training, specify <code>ShardedByS3Key</code>. If there are <i>n</i> ML compute
     * instances launched for a training job, each instance gets approximately
     * 1/<i>n</i> of the number of S3 objects. In this case, model training on each
     * machine uses only the subset of training data. </p> <p>Don't choose more ML
     * compute instances for training than available S3 objects. If you do, some nodes
     * won't get any data and you will pay for nodes that aren't getting any training
     * data. This applies in both FILE and PIPE modes. Keep this in mind when
     * developing algorithms. </p> <p>In distributed training, where you use multiple
     * ML compute EC2 instances, you might choose <code>ShardedByS3Key</code>. If the
     * algorithm requires copying training data to the ML storage volume (when
     * <code>TrainingInputMode</code> is set to <code>File</code>), this copies
     * 1/<i>n</i> of the number of objects. </p>
     */
    inline void SetS3DataDistributionType(S3DataDistribution&& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = std::move(value); }

    /**
     * <p>If you want Amazon SageMaker to replicate the entire dataset on each ML
     * compute instance that is launched for model training, specify
     * <code>FullyReplicated</code>. </p> <p>If you want Amazon SageMaker to replicate
     * a subset of data on each ML compute instance that is launched for model
     * training, specify <code>ShardedByS3Key</code>. If there are <i>n</i> ML compute
     * instances launched for a training job, each instance gets approximately
     * 1/<i>n</i> of the number of S3 objects. In this case, model training on each
     * machine uses only the subset of training data. </p> <p>Don't choose more ML
     * compute instances for training than available S3 objects. If you do, some nodes
     * won't get any data and you will pay for nodes that aren't getting any training
     * data. This applies in both FILE and PIPE modes. Keep this in mind when
     * developing algorithms. </p> <p>In distributed training, where you use multiple
     * ML compute EC2 instances, you might choose <code>ShardedByS3Key</code>. If the
     * algorithm requires copying training data to the ML storage volume (when
     * <code>TrainingInputMode</code> is set to <code>File</code>), this copies
     * 1/<i>n</i> of the number of objects. </p>
     */
    inline S3DataSource& WithS3DataDistributionType(const S3DataDistribution& value) { SetS3DataDistributionType(value); return *this;}

    /**
     * <p>If you want Amazon SageMaker to replicate the entire dataset on each ML
     * compute instance that is launched for model training, specify
     * <code>FullyReplicated</code>. </p> <p>If you want Amazon SageMaker to replicate
     * a subset of data on each ML compute instance that is launched for model
     * training, specify <code>ShardedByS3Key</code>. If there are <i>n</i> ML compute
     * instances launched for a training job, each instance gets approximately
     * 1/<i>n</i> of the number of S3 objects. In this case, model training on each
     * machine uses only the subset of training data. </p> <p>Don't choose more ML
     * compute instances for training than available S3 objects. If you do, some nodes
     * won't get any data and you will pay for nodes that aren't getting any training
     * data. This applies in both FILE and PIPE modes. Keep this in mind when
     * developing algorithms. </p> <p>In distributed training, where you use multiple
     * ML compute EC2 instances, you might choose <code>ShardedByS3Key</code>. If the
     * algorithm requires copying training data to the ML storage volume (when
     * <code>TrainingInputMode</code> is set to <code>File</code>), this copies
     * 1/<i>n</i> of the number of objects. </p>
     */
    inline S3DataSource& WithS3DataDistributionType(S3DataDistribution&& value) { SetS3DataDistributionType(std::move(value)); return *this;}

  private:

    S3DataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;

    S3DataDistribution m_s3DataDistributionType;
    bool m_s3DataDistributionTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
