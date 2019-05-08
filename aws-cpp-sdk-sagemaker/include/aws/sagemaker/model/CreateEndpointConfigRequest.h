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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_SAGEMAKER_API CreateEndpointConfigRequest : public SageMakerRequest
  {
  public:
    CreateEndpointConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpointConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }

    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline CreateEndpointConfigRequest& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline CreateEndpointConfigRequest& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline CreateEndpointConfigRequest& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    /**
     * <p>An list of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetProductionVariants() const{ return m_productionVariants; }

    /**
     * <p>An list of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline bool ProductionVariantsHasBeenSet() const { return m_productionVariantsHasBeenSet; }

    /**
     * <p>An list of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline void SetProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = value; }

    /**
     * <p>An list of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline void SetProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::move(value); }

    /**
     * <p>An list of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline CreateEndpointConfigRequest& WithProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetProductionVariants(value); return *this;}

    /**
     * <p>An list of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline CreateEndpointConfigRequest& WithProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetProductionVariants(std::move(value)); return *this;}

    /**
     * <p>An list of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline CreateEndpointConfigRequest& AddProductionVariants(const ProductionVariant& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(value); return *this; }

    /**
     * <p>An list of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline CreateEndpointConfigRequest& AddProductionVariants(ProductionVariant&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateEndpointConfigRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateEndpointConfigRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateEndpointConfigRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateEndpointConfigRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of a AWS Key Management Service key that
     * Amazon SageMaker uses to encrypt data on the storage volume attached to the ML
     * compute instance that hosts the endpoint.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of a AWS Key Management Service key that
     * Amazon SageMaker uses to encrypt data on the storage volume attached to the ML
     * compute instance that hosts the endpoint.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a AWS Key Management Service key that
     * Amazon SageMaker uses to encrypt data on the storage volume attached to the ML
     * compute instance that hosts the endpoint.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a AWS Key Management Service key that
     * Amazon SageMaker uses to encrypt data on the storage volume attached to the ML
     * compute instance that hosts the endpoint.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a AWS Key Management Service key that
     * Amazon SageMaker uses to encrypt data on the storage volume attached to the ML
     * compute instance that hosts the endpoint.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a AWS Key Management Service key that
     * Amazon SageMaker uses to encrypt data on the storage volume attached to the ML
     * compute instance that hosts the endpoint.</p>
     */
    inline CreateEndpointConfigRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a AWS Key Management Service key that
     * Amazon SageMaker uses to encrypt data on the storage volume attached to the ML
     * compute instance that hosts the endpoint.</p>
     */
    inline CreateEndpointConfigRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a AWS Key Management Service key that
     * Amazon SageMaker uses to encrypt data on the storage volume attached to the ML
     * compute instance that hosts the endpoint.</p>
     */
    inline CreateEndpointConfigRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet;

    Aws::Vector<ProductionVariant> m_productionVariants;
    bool m_productionVariantsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
