/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContainerDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExecutionConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class DescribeModelResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelResult();
    AWS_SAGEMAKER_API DescribeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of the SageMaker model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>Name of the SageMaker model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>Name of the SageMaker model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>Name of the SageMaker model.</p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>Name of the SageMaker model.</p>
     */
    inline DescribeModelResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>Name of the SageMaker model.</p>
     */
    inline DescribeModelResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>Name of the SageMaker model.</p>
     */
    inline DescribeModelResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The location of the primary inference code, associated artifacts, and custom
     * environment map that the inference code uses when it is deployed in production.
     * </p>
     */
    inline const ContainerDefinition& GetPrimaryContainer() const{ return m_primaryContainer; }

    /**
     * <p>The location of the primary inference code, associated artifacts, and custom
     * environment map that the inference code uses when it is deployed in production.
     * </p>
     */
    inline void SetPrimaryContainer(const ContainerDefinition& value) { m_primaryContainer = value; }

    /**
     * <p>The location of the primary inference code, associated artifacts, and custom
     * environment map that the inference code uses when it is deployed in production.
     * </p>
     */
    inline void SetPrimaryContainer(ContainerDefinition&& value) { m_primaryContainer = std::move(value); }

    /**
     * <p>The location of the primary inference code, associated artifacts, and custom
     * environment map that the inference code uses when it is deployed in production.
     * </p>
     */
    inline DescribeModelResult& WithPrimaryContainer(const ContainerDefinition& value) { SetPrimaryContainer(value); return *this;}

    /**
     * <p>The location of the primary inference code, associated artifacts, and custom
     * environment map that the inference code uses when it is deployed in production.
     * </p>
     */
    inline DescribeModelResult& WithPrimaryContainer(ContainerDefinition&& value) { SetPrimaryContainer(std::move(value)); return *this;}


    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainers() const{ return m_containers; }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline void SetContainers(const Aws::Vector<ContainerDefinition>& value) { m_containers = value; }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline void SetContainers(Aws::Vector<ContainerDefinition>&& value) { m_containers = std::move(value); }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline DescribeModelResult& WithContainers(const Aws::Vector<ContainerDefinition>& value) { SetContainers(value); return *this;}

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline DescribeModelResult& WithContainers(Aws::Vector<ContainerDefinition>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline DescribeModelResult& AddContainers(const ContainerDefinition& value) { m_containers.push_back(value); return *this; }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline DescribeModelResult& AddContainers(ContainerDefinition&& value) { m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies details of how containers in a multi-container endpoint are
     * called.</p>
     */
    inline const InferenceExecutionConfig& GetInferenceExecutionConfig() const{ return m_inferenceExecutionConfig; }

    /**
     * <p>Specifies details of how containers in a multi-container endpoint are
     * called.</p>
     */
    inline void SetInferenceExecutionConfig(const InferenceExecutionConfig& value) { m_inferenceExecutionConfig = value; }

    /**
     * <p>Specifies details of how containers in a multi-container endpoint are
     * called.</p>
     */
    inline void SetInferenceExecutionConfig(InferenceExecutionConfig&& value) { m_inferenceExecutionConfig = std::move(value); }

    /**
     * <p>Specifies details of how containers in a multi-container endpoint are
     * called.</p>
     */
    inline DescribeModelResult& WithInferenceExecutionConfig(const InferenceExecutionConfig& value) { SetInferenceExecutionConfig(value); return *this;}

    /**
     * <p>Specifies details of how containers in a multi-container endpoint are
     * called.</p>
     */
    inline DescribeModelResult& WithInferenceExecutionConfig(InferenceExecutionConfig&& value) { SetInferenceExecutionConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline DescribeModelResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline DescribeModelResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline DescribeModelResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this model has access
     * to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> </p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this model has access
     * to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> </p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this model has access
     * to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> </p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this model has access
     * to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> </p>
     */
    inline DescribeModelResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this model has access
     * to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> </p>
     */
    inline DescribeModelResult& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the model was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the model was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the model was created.</p>
     */
    inline DescribeModelResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the model was created.</p>
     */
    inline DescribeModelResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline DescribeModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline DescribeModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline DescribeModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>If <code>True</code>, no inbound or outbound network calls can be made to or
     * from the model container.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>If <code>True</code>, no inbound or outbound network calls can be made to or
     * from the model container.</p>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolation = value; }

    /**
     * <p>If <code>True</code>, no inbound or outbound network calls can be made to or
     * from the model container.</p>
     */
    inline DescribeModelResult& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}

  private:

    Aws::String m_modelName;

    ContainerDefinition m_primaryContainer;

    Aws::Vector<ContainerDefinition> m_containers;

    InferenceExecutionConfig m_inferenceExecutionConfig;

    Aws::String m_executionRoleArn;

    VpcConfig m_vpcConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_modelArn;

    bool m_enableNetworkIsolation;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
