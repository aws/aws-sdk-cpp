/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrafficPattern.h>
#include <aws/sagemaker/model/RecommendationJobResourceLimit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RecommendationJobContainerConfig.h>
#include <aws/sagemaker/model/RecommendationJobVpcConfig.h>
#include <aws/sagemaker/model/EndpointInputConfiguration.h>
#include <aws/sagemaker/model/EndpointInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The input configuration of the recommendation job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobInputConfig">AWS
   * API Reference</a></p>
   */
  class RecommendationJobInputConfig
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobInputConfig();
    AWS_SAGEMAKER_API RecommendationJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline const Aws::String& GetModelPackageVersionArn() const{ return m_modelPackageVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline bool ModelPackageVersionArnHasBeenSet() const { return m_modelPackageVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline void SetModelPackageVersionArn(const Aws::String& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline void SetModelPackageVersionArn(Aws::String&& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline void SetModelPackageVersionArn(const char* value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline RecommendationJobInputConfig& WithModelPackageVersionArn(const Aws::String& value) { SetModelPackageVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline RecommendationJobInputConfig& WithModelPackageVersionArn(Aws::String&& value) { SetModelPackageVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline RecommendationJobInputConfig& WithModelPackageVersionArn(const char* value) { SetModelPackageVersionArn(value); return *this;}


    /**
     * <p>Specifies the maximum duration of the job, in seconds.&gt;</p>
     */
    inline int GetJobDurationInSeconds() const{ return m_jobDurationInSeconds; }

    /**
     * <p>Specifies the maximum duration of the job, in seconds.&gt;</p>
     */
    inline bool JobDurationInSecondsHasBeenSet() const { return m_jobDurationInSecondsHasBeenSet; }

    /**
     * <p>Specifies the maximum duration of the job, in seconds.&gt;</p>
     */
    inline void SetJobDurationInSeconds(int value) { m_jobDurationInSecondsHasBeenSet = true; m_jobDurationInSeconds = value; }

    /**
     * <p>Specifies the maximum duration of the job, in seconds.&gt;</p>
     */
    inline RecommendationJobInputConfig& WithJobDurationInSeconds(int value) { SetJobDurationInSeconds(value); return *this;}


    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline const TrafficPattern& GetTrafficPattern() const{ return m_trafficPattern; }

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline bool TrafficPatternHasBeenSet() const { return m_trafficPatternHasBeenSet; }

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline void SetTrafficPattern(const TrafficPattern& value) { m_trafficPatternHasBeenSet = true; m_trafficPattern = value; }

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline void SetTrafficPattern(TrafficPattern&& value) { m_trafficPatternHasBeenSet = true; m_trafficPattern = std::move(value); }

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline RecommendationJobInputConfig& WithTrafficPattern(const TrafficPattern& value) { SetTrafficPattern(value); return *this;}

    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline RecommendationJobInputConfig& WithTrafficPattern(TrafficPattern&& value) { SetTrafficPattern(std::move(value)); return *this;}


    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline const RecommendationJobResourceLimit& GetResourceLimit() const{ return m_resourceLimit; }

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline bool ResourceLimitHasBeenSet() const { return m_resourceLimitHasBeenSet; }

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline void SetResourceLimit(const RecommendationJobResourceLimit& value) { m_resourceLimitHasBeenSet = true; m_resourceLimit = value; }

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline void SetResourceLimit(RecommendationJobResourceLimit&& value) { m_resourceLimitHasBeenSet = true; m_resourceLimit = std::move(value); }

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline RecommendationJobInputConfig& WithResourceLimit(const RecommendationJobResourceLimit& value) { SetResourceLimit(value); return *this;}

    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline RecommendationJobInputConfig& WithResourceLimit(RecommendationJobResourceLimit&& value) { SetResourceLimit(std::move(value)); return *this;}


    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline const Aws::Vector<EndpointInputConfiguration>& GetEndpointConfigurations() const{ return m_endpointConfigurations; }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline bool EndpointConfigurationsHasBeenSet() const { return m_endpointConfigurationsHasBeenSet; }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline void SetEndpointConfigurations(const Aws::Vector<EndpointInputConfiguration>& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = value; }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline void SetEndpointConfigurations(Aws::Vector<EndpointInputConfiguration>&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = std::move(value); }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline RecommendationJobInputConfig& WithEndpointConfigurations(const Aws::Vector<EndpointInputConfiguration>& value) { SetEndpointConfigurations(value); return *this;}

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline RecommendationJobInputConfig& WithEndpointConfigurations(Aws::Vector<EndpointInputConfiguration>&& value) { SetEndpointConfigurations(std::move(value)); return *this;}

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline RecommendationJobInputConfig& AddEndpointConfigurations(const EndpointInputConfiguration& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.push_back(value); return *this; }

    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline RecommendationJobInputConfig& AddEndpointConfigurations(EndpointInputConfiguration&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline RecommendationJobInputConfig& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline RecommendationJobInputConfig& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline RecommendationJobInputConfig& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}


    /**
     * <p>Specifies mandatory fields for running an Inference Recommender job. The
     * fields specified in <code>ContainerConfig</code> override the corresponding
     * fields in the model package.</p>
     */
    inline const RecommendationJobContainerConfig& GetContainerConfig() const{ return m_containerConfig; }

    /**
     * <p>Specifies mandatory fields for running an Inference Recommender job. The
     * fields specified in <code>ContainerConfig</code> override the corresponding
     * fields in the model package.</p>
     */
    inline bool ContainerConfigHasBeenSet() const { return m_containerConfigHasBeenSet; }

    /**
     * <p>Specifies mandatory fields for running an Inference Recommender job. The
     * fields specified in <code>ContainerConfig</code> override the corresponding
     * fields in the model package.</p>
     */
    inline void SetContainerConfig(const RecommendationJobContainerConfig& value) { m_containerConfigHasBeenSet = true; m_containerConfig = value; }

    /**
     * <p>Specifies mandatory fields for running an Inference Recommender job. The
     * fields specified in <code>ContainerConfig</code> override the corresponding
     * fields in the model package.</p>
     */
    inline void SetContainerConfig(RecommendationJobContainerConfig&& value) { m_containerConfigHasBeenSet = true; m_containerConfig = std::move(value); }

    /**
     * <p>Specifies mandatory fields for running an Inference Recommender job. The
     * fields specified in <code>ContainerConfig</code> override the corresponding
     * fields in the model package.</p>
     */
    inline RecommendationJobInputConfig& WithContainerConfig(const RecommendationJobContainerConfig& value) { SetContainerConfig(value); return *this;}

    /**
     * <p>Specifies mandatory fields for running an Inference Recommender job. The
     * fields specified in <code>ContainerConfig</code> override the corresponding
     * fields in the model package.</p>
     */
    inline RecommendationJobInputConfig& WithContainerConfig(RecommendationJobContainerConfig&& value) { SetContainerConfig(std::move(value)); return *this;}


    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline const Aws::Vector<EndpointInfo>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline void SetEndpoints(const Aws::Vector<EndpointInfo>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline void SetEndpoints(Aws::Vector<EndpointInfo>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline RecommendationJobInputConfig& WithEndpoints(const Aws::Vector<EndpointInfo>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline RecommendationJobInputConfig& WithEndpoints(Aws::Vector<EndpointInfo>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline RecommendationJobInputConfig& AddEndpoints(const EndpointInfo& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline RecommendationJobInputConfig& AddEndpoints(EndpointInfo&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>Inference Recommender provisions SageMaker endpoints with access to VPC in
     * the inference recommendation job.</p>
     */
    inline const RecommendationJobVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>Inference Recommender provisions SageMaker endpoints with access to VPC in
     * the inference recommendation job.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>Inference Recommender provisions SageMaker endpoints with access to VPC in
     * the inference recommendation job.</p>
     */
    inline void SetVpcConfig(const RecommendationJobVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>Inference Recommender provisions SageMaker endpoints with access to VPC in
     * the inference recommendation job.</p>
     */
    inline void SetVpcConfig(RecommendationJobVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>Inference Recommender provisions SageMaker endpoints with access to VPC in
     * the inference recommendation job.</p>
     */
    inline RecommendationJobInputConfig& WithVpcConfig(const RecommendationJobVpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>Inference Recommender provisions SageMaker endpoints with access to VPC in
     * the inference recommendation job.</p>
     */
    inline RecommendationJobInputConfig& WithVpcConfig(RecommendationJobVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_modelPackageVersionArn;
    bool m_modelPackageVersionArnHasBeenSet = false;

    int m_jobDurationInSeconds;
    bool m_jobDurationInSecondsHasBeenSet = false;

    TrafficPattern m_trafficPattern;
    bool m_trafficPatternHasBeenSet = false;

    RecommendationJobResourceLimit m_resourceLimit;
    bool m_resourceLimitHasBeenSet = false;

    Aws::Vector<EndpointInputConfiguration> m_endpointConfigurations;
    bool m_endpointConfigurationsHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    RecommendationJobContainerConfig m_containerConfig;
    bool m_containerConfigHasBeenSet = false;

    Aws::Vector<EndpointInfo> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    RecommendationJobVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
