/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DataCaptureConfig.h>
#include <aws/sagemaker/model/AsyncInferenceConfig.h>
#include <aws/sagemaker/model/ExplainerConfig.h>
#include <aws/sagemaker/model/ProductionVariant.h>
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
  class CreateEndpointConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateEndpointConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpointConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the endpoint configuration. You specify this name in a
     * <a>CreateEndpoint</a> request. </p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a
     * <a>CreateEndpoint</a> request. </p>
     */
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a
     * <a>CreateEndpoint</a> request. </p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a
     * <a>CreateEndpoint</a> request. </p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a
     * <a>CreateEndpoint</a> request. </p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a
     * <a>CreateEndpoint</a> request. </p>
     */
    inline CreateEndpointConfigRequest& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>The name of the endpoint configuration. You specify this name in a
     * <a>CreateEndpoint</a> request. </p>
     */
    inline CreateEndpointConfigRequest& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint configuration. You specify this name in a
     * <a>CreateEndpoint</a> request. </p>
     */
    inline CreateEndpointConfigRequest& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetProductionVariants() const{ return m_productionVariants; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline bool ProductionVariantsHasBeenSet() const { return m_productionVariantsHasBeenSet; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline void SetProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = value; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline void SetProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::move(value); }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline CreateEndpointConfigRequest& WithProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetProductionVariants(value); return *this;}

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline CreateEndpointConfigRequest& WithProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetProductionVariants(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline CreateEndpointConfigRequest& AddProductionVariants(const ProductionVariant& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(value); return *this; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline CreateEndpointConfigRequest& AddProductionVariants(ProductionVariant&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(std::move(value)); return *this; }


    
    inline const DataCaptureConfig& GetDataCaptureConfig() const{ return m_dataCaptureConfig; }

    
    inline bool DataCaptureConfigHasBeenSet() const { return m_dataCaptureConfigHasBeenSet; }

    
    inline void SetDataCaptureConfig(const DataCaptureConfig& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = value; }

    
    inline void SetDataCaptureConfig(DataCaptureConfig&& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = std::move(value); }

    
    inline CreateEndpointConfigRequest& WithDataCaptureConfig(const DataCaptureConfig& value) { SetDataCaptureConfig(value); return *this;}

    
    inline CreateEndpointConfigRequest& WithDataCaptureConfig(DataCaptureConfig&& value) { SetDataCaptureConfig(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateEndpointConfigRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateEndpointConfigRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateEndpointConfigRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateEndpointConfigRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline CreateEndpointConfigRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline CreateEndpointConfigRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline CreateEndpointConfigRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies configuration for how an endpoint performs asynchronous inference.
     * This is a required field in order for your Endpoint to be invoked using <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_runtime_InvokeEndpointAsync.html">InvokeEndpointAsync</a>.</p>
     */
    inline const AsyncInferenceConfig& GetAsyncInferenceConfig() const{ return m_asyncInferenceConfig; }

    /**
     * <p>Specifies configuration for how an endpoint performs asynchronous inference.
     * This is a required field in order for your Endpoint to be invoked using <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_runtime_InvokeEndpointAsync.html">InvokeEndpointAsync</a>.</p>
     */
    inline bool AsyncInferenceConfigHasBeenSet() const { return m_asyncInferenceConfigHasBeenSet; }

    /**
     * <p>Specifies configuration for how an endpoint performs asynchronous inference.
     * This is a required field in order for your Endpoint to be invoked using <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_runtime_InvokeEndpointAsync.html">InvokeEndpointAsync</a>.</p>
     */
    inline void SetAsyncInferenceConfig(const AsyncInferenceConfig& value) { m_asyncInferenceConfigHasBeenSet = true; m_asyncInferenceConfig = value; }

    /**
     * <p>Specifies configuration for how an endpoint performs asynchronous inference.
     * This is a required field in order for your Endpoint to be invoked using <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_runtime_InvokeEndpointAsync.html">InvokeEndpointAsync</a>.</p>
     */
    inline void SetAsyncInferenceConfig(AsyncInferenceConfig&& value) { m_asyncInferenceConfigHasBeenSet = true; m_asyncInferenceConfig = std::move(value); }

    /**
     * <p>Specifies configuration for how an endpoint performs asynchronous inference.
     * This is a required field in order for your Endpoint to be invoked using <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_runtime_InvokeEndpointAsync.html">InvokeEndpointAsync</a>.</p>
     */
    inline CreateEndpointConfigRequest& WithAsyncInferenceConfig(const AsyncInferenceConfig& value) { SetAsyncInferenceConfig(value); return *this;}

    /**
     * <p>Specifies configuration for how an endpoint performs asynchronous inference.
     * This is a required field in order for your Endpoint to be invoked using <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_runtime_InvokeEndpointAsync.html">InvokeEndpointAsync</a>.</p>
     */
    inline CreateEndpointConfigRequest& WithAsyncInferenceConfig(AsyncInferenceConfig&& value) { SetAsyncInferenceConfig(std::move(value)); return *this;}


    /**
     * <p>A member of <code>CreateEndpointConfig</code> that enables explainers.</p>
     */
    inline const ExplainerConfig& GetExplainerConfig() const{ return m_explainerConfig; }

    /**
     * <p>A member of <code>CreateEndpointConfig</code> that enables explainers.</p>
     */
    inline bool ExplainerConfigHasBeenSet() const { return m_explainerConfigHasBeenSet; }

    /**
     * <p>A member of <code>CreateEndpointConfig</code> that enables explainers.</p>
     */
    inline void SetExplainerConfig(const ExplainerConfig& value) { m_explainerConfigHasBeenSet = true; m_explainerConfig = value; }

    /**
     * <p>A member of <code>CreateEndpointConfig</code> that enables explainers.</p>
     */
    inline void SetExplainerConfig(ExplainerConfig&& value) { m_explainerConfigHasBeenSet = true; m_explainerConfig = std::move(value); }

    /**
     * <p>A member of <code>CreateEndpointConfig</code> that enables explainers.</p>
     */
    inline CreateEndpointConfigRequest& WithExplainerConfig(const ExplainerConfig& value) { SetExplainerConfig(value); return *this;}

    /**
     * <p>A member of <code>CreateEndpointConfig</code> that enables explainers.</p>
     */
    inline CreateEndpointConfigRequest& WithExplainerConfig(ExplainerConfig&& value) { SetExplainerConfig(std::move(value)); return *this;}


    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetShadowProductionVariants() const{ return m_shadowProductionVariants; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline bool ShadowProductionVariantsHasBeenSet() const { return m_shadowProductionVariantsHasBeenSet; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline void SetShadowProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = value; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline void SetShadowProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = std::move(value); }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline CreateEndpointConfigRequest& WithShadowProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetShadowProductionVariants(value); return *this;}

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline CreateEndpointConfigRequest& WithShadowProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetShadowProductionVariants(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline CreateEndpointConfigRequest& AddShadowProductionVariants(const ProductionVariant& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.push_back(value); return *this; }

    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline CreateEndpointConfigRequest& AddShadowProductionVariants(ProductionVariant&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::Vector<ProductionVariant> m_productionVariants;
    bool m_productionVariantsHasBeenSet = false;

    DataCaptureConfig m_dataCaptureConfig;
    bool m_dataCaptureConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    AsyncInferenceConfig m_asyncInferenceConfig;
    bool m_asyncInferenceConfigHasBeenSet = false;

    ExplainerConfig m_explainerConfig;
    bool m_explainerConfigHasBeenSet = false;

    Aws::Vector<ProductionVariant> m_shadowProductionVariants;
    bool m_shadowProductionVariantsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
