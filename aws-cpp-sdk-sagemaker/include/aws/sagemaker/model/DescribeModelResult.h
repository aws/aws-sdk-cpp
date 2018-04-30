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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContainerDefinition.h>
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
  class AWS_SAGEMAKER_API DescribeModelResult
  {
  public:
    DescribeModelResult();
    DescribeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of the Amazon SageMaker model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>Name of the Amazon SageMaker model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>Name of the Amazon SageMaker model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>Name of the Amazon SageMaker model.</p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>Name of the Amazon SageMaker model.</p>
     */
    inline DescribeModelResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>Name of the Amazon SageMaker model.</p>
     */
    inline DescribeModelResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>Name of the Amazon SageMaker model.</p>
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
     * <p>A object that specifies the VPC that this model has access to. For more
     * information, see <a>host-vpc</a> </p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>A object that specifies the VPC that this model has access to. For more
     * information, see <a>host-vpc</a> </p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }

    /**
     * <p>A object that specifies the VPC that this model has access to. For more
     * information, see <a>host-vpc</a> </p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>A object that specifies the VPC that this model has access to. For more
     * information, see <a>host-vpc</a> </p>
     */
    inline DescribeModelResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>A object that specifies the VPC that this model has access to. For more
     * information, see <a>host-vpc</a> </p>
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

  private:

    Aws::String m_modelName;

    ContainerDefinition m_primaryContainer;

    Aws::String m_executionRoleArn;

    VpcConfig m_vpcConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_modelArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
