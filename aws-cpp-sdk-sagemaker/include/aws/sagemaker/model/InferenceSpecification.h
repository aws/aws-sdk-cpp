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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelPackageContainerDefinition.h>
#include <aws/sagemaker/model/TransformInstanceType.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines how to perform inference generation after a training job is
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API InferenceSpecification
  {
  public:
    InferenceSpecification();
    InferenceSpecification(Aws::Utils::Json::JsonView jsonValue);
    InferenceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline const Aws::Vector<ModelPackageContainerDefinition>& GetContainers() const{ return m_containers; }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline void SetContainers(const Aws::Vector<ModelPackageContainerDefinition>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline void SetContainers(Aws::Vector<ModelPackageContainerDefinition>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline InferenceSpecification& WithContainers(const Aws::Vector<ModelPackageContainerDefinition>& value) { SetContainers(value); return *this;}

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline InferenceSpecification& WithContainers(Aws::Vector<ModelPackageContainerDefinition>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline InferenceSpecification& AddContainers(const ModelPackageContainerDefinition& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline InferenceSpecification& AddContainers(ModelPackageContainerDefinition&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline const Aws::Vector<TransformInstanceType>& GetSupportedTransformInstanceTypes() const{ return m_supportedTransformInstanceTypes; }

    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline bool SupportedTransformInstanceTypesHasBeenSet() const { return m_supportedTransformInstanceTypesHasBeenSet; }

    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline void SetSupportedTransformInstanceTypes(const Aws::Vector<TransformInstanceType>& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes = value; }

    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline void SetSupportedTransformInstanceTypes(Aws::Vector<TransformInstanceType>&& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes = std::move(value); }

    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline InferenceSpecification& WithSupportedTransformInstanceTypes(const Aws::Vector<TransformInstanceType>& value) { SetSupportedTransformInstanceTypes(value); return *this;}

    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline InferenceSpecification& WithSupportedTransformInstanceTypes(Aws::Vector<TransformInstanceType>&& value) { SetSupportedTransformInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline InferenceSpecification& AddSupportedTransformInstanceTypes(const TransformInstanceType& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes.push_back(value); return *this; }

    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline InferenceSpecification& AddSupportedTransformInstanceTypes(TransformInstanceType&& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline const Aws::Vector<ProductionVariantInstanceType>& GetSupportedRealtimeInferenceInstanceTypes() const{ return m_supportedRealtimeInferenceInstanceTypes; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline bool SupportedRealtimeInferenceInstanceTypesHasBeenSet() const { return m_supportedRealtimeInferenceInstanceTypesHasBeenSet; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline void SetSupportedRealtimeInferenceInstanceTypes(const Aws::Vector<ProductionVariantInstanceType>& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes = value; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline void SetSupportedRealtimeInferenceInstanceTypes(Aws::Vector<ProductionVariantInstanceType>&& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes = std::move(value); }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline InferenceSpecification& WithSupportedRealtimeInferenceInstanceTypes(const Aws::Vector<ProductionVariantInstanceType>& value) { SetSupportedRealtimeInferenceInstanceTypes(value); return *this;}

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline InferenceSpecification& WithSupportedRealtimeInferenceInstanceTypes(Aws::Vector<ProductionVariantInstanceType>&& value) { SetSupportedRealtimeInferenceInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline InferenceSpecification& AddSupportedRealtimeInferenceInstanceTypes(const ProductionVariantInstanceType& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes.push_back(value); return *this; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline InferenceSpecification& AddSupportedRealtimeInferenceInstanceTypes(ProductionVariantInstanceType&& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedContentTypes() const{ return m_supportedContentTypes; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline bool SupportedContentTypesHasBeenSet() const { return m_supportedContentTypesHasBeenSet; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline void SetSupportedContentTypes(const Aws::Vector<Aws::String>& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = value; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline void SetSupportedContentTypes(Aws::Vector<Aws::String>&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = std::move(value); }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline InferenceSpecification& WithSupportedContentTypes(const Aws::Vector<Aws::String>& value) { SetSupportedContentTypes(value); return *this;}

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline InferenceSpecification& WithSupportedContentTypes(Aws::Vector<Aws::String>&& value) { SetSupportedContentTypes(std::move(value)); return *this;}

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline InferenceSpecification& AddSupportedContentTypes(const Aws::String& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline InferenceSpecification& AddSupportedContentTypes(Aws::String&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline InferenceSpecification& AddSupportedContentTypes(const char* value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }


    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedResponseMIMETypes() const{ return m_supportedResponseMIMETypes; }

    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline bool SupportedResponseMIMETypesHasBeenSet() const { return m_supportedResponseMIMETypesHasBeenSet; }

    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline void SetSupportedResponseMIMETypes(const Aws::Vector<Aws::String>& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes = value; }

    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline void SetSupportedResponseMIMETypes(Aws::Vector<Aws::String>&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes = std::move(value); }

    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline InferenceSpecification& WithSupportedResponseMIMETypes(const Aws::Vector<Aws::String>& value) { SetSupportedResponseMIMETypes(value); return *this;}

    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline InferenceSpecification& WithSupportedResponseMIMETypes(Aws::Vector<Aws::String>&& value) { SetSupportedResponseMIMETypes(std::move(value)); return *this;}

    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline InferenceSpecification& AddSupportedResponseMIMETypes(const Aws::String& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(value); return *this; }

    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline InferenceSpecification& AddSupportedResponseMIMETypes(Aws::String&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline InferenceSpecification& AddSupportedResponseMIMETypes(const char* value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(value); return *this; }

  private:

    Aws::Vector<ModelPackageContainerDefinition> m_containers;
    bool m_containersHasBeenSet;

    Aws::Vector<TransformInstanceType> m_supportedTransformInstanceTypes;
    bool m_supportedTransformInstanceTypesHasBeenSet;

    Aws::Vector<ProductionVariantInstanceType> m_supportedRealtimeInferenceInstanceTypes;
    bool m_supportedRealtimeInferenceInstanceTypesHasBeenSet;

    Aws::Vector<Aws::String> m_supportedContentTypes;
    bool m_supportedContentTypesHasBeenSet;

    Aws::Vector<Aws::String> m_supportedResponseMIMETypes;
    bool m_supportedResponseMIMETypesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
