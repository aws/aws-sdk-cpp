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
#include <aws/sagemaker/model/ContainerDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
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
  class AWS_SAGEMAKER_API CreateModelRequest : public SageMakerRequest
  {
  public:
    CreateModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModel"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the new model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the new model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the new model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the new model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the new model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the new model.</p>
     */
    inline CreateModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the new model.</p>
     */
    inline CreateModelRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the new model.</p>
     */
    inline CreateModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The location of the primary docker image containing inference code,
     * associated artifacts, and custom environment map that the inference code uses
     * when the model is deployed for predictions. </p>
     */
    inline const ContainerDefinition& GetPrimaryContainer() const{ return m_primaryContainer; }

    /**
     * <p>The location of the primary docker image containing inference code,
     * associated artifacts, and custom environment map that the inference code uses
     * when the model is deployed for predictions. </p>
     */
    inline bool PrimaryContainerHasBeenSet() const { return m_primaryContainerHasBeenSet; }

    /**
     * <p>The location of the primary docker image containing inference code,
     * associated artifacts, and custom environment map that the inference code uses
     * when the model is deployed for predictions. </p>
     */
    inline void SetPrimaryContainer(const ContainerDefinition& value) { m_primaryContainerHasBeenSet = true; m_primaryContainer = value; }

    /**
     * <p>The location of the primary docker image containing inference code,
     * associated artifacts, and custom environment map that the inference code uses
     * when the model is deployed for predictions. </p>
     */
    inline void SetPrimaryContainer(ContainerDefinition&& value) { m_primaryContainerHasBeenSet = true; m_primaryContainer = std::move(value); }

    /**
     * <p>The location of the primary docker image containing inference code,
     * associated artifacts, and custom environment map that the inference code uses
     * when the model is deployed for predictions. </p>
     */
    inline CreateModelRequest& WithPrimaryContainer(const ContainerDefinition& value) { SetPrimaryContainer(value); return *this;}

    /**
     * <p>The location of the primary docker image containing inference code,
     * associated artifacts, and custom environment map that the inference code uses
     * when the model is deployed for predictions. </p>
     */
    inline CreateModelRequest& WithPrimaryContainer(ContainerDefinition&& value) { SetPrimaryContainer(std::move(value)); return *this;}


    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainers() const{ return m_containers; }

    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline void SetContainers(const Aws::Vector<ContainerDefinition>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline void SetContainers(Aws::Vector<ContainerDefinition>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline CreateModelRequest& WithContainers(const Aws::Vector<ContainerDefinition>& value) { SetContainers(value); return *this;}

    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline CreateModelRequest& WithContainers(Aws::Vector<ContainerDefinition>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline CreateModelRequest& AddContainers(const ContainerDefinition& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline CreateModelRequest& AddContainers(ContainerDefinition&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access model artifacts and docker image for deployment on ML compute
     * instances or for batch transform jobs. Deploying on ML compute instances is part
     * of model hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access model artifacts and docker image for deployment on ML compute
     * instances or for batch transform jobs. Deploying on ML compute instances is part
     * of model hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access model artifacts and docker image for deployment on ML compute
     * instances or for batch transform jobs. Deploying on ML compute instances is part
     * of model hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access model artifacts and docker image for deployment on ML compute
     * instances or for batch transform jobs. Deploying on ML compute instances is part
     * of model hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access model artifacts and docker image for deployment on ML compute
     * instances or for batch transform jobs. Deploying on ML compute instances is part
     * of model hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access model artifacts and docker image for deployment on ML compute
     * instances or for batch transform jobs. Deploying on ML compute instances is part
     * of model hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline CreateModelRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access model artifacts and docker image for deployment on ML compute
     * instances or for batch transform jobs. Deploying on ML compute instances is part
     * of model hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline CreateModelRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access model artifacts and docker image for deployment on ML compute
     * instances or for batch transform jobs. Deploying on ML compute instances is part
     * of model hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline CreateModelRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateModelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateModelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateModelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateModelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your model to connect to. Control
     * access to and from your model container by configuring the VPC.
     * <code>VpcConfig</code> is used in hosting services and in batch transform. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-vpc.html">Protect
     * Data in Batch Transform Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your model to connect to. Control
     * access to and from your model container by configuring the VPC.
     * <code>VpcConfig</code> is used in hosting services and in batch transform. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-vpc.html">Protect
     * Data in Batch Transform Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your model to connect to. Control
     * access to and from your model container by configuring the VPC.
     * <code>VpcConfig</code> is used in hosting services and in batch transform. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-vpc.html">Protect
     * Data in Batch Transform Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your model to connect to. Control
     * access to and from your model container by configuring the VPC.
     * <code>VpcConfig</code> is used in hosting services and in batch transform. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-vpc.html">Protect
     * Data in Batch Transform Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your model to connect to. Control
     * access to and from your model container by configuring the VPC.
     * <code>VpcConfig</code> is used in hosting services and in batch transform. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-vpc.html">Protect
     * Data in Batch Transform Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline CreateModelRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your model to connect to. Control
     * access to and from your model container by configuring the VPC.
     * <code>VpcConfig</code> is used in hosting services and in batch transform. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-vpc.html">Protect
     * Data in Batch Transform Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline CreateModelRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p> <note> <p>The Semantic Segmentation
     * built-in algorithm does not support network isolation.</p> </note>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p> <note> <p>The Semantic Segmentation
     * built-in algorithm does not support network isolation.</p> </note>
     */
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }

    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p> <note> <p>The Semantic Segmentation
     * built-in algorithm does not support network isolation.</p> </note>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }

    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p> <note> <p>The Semantic Segmentation
     * built-in algorithm does not support network isolation.</p> </note>
     */
    inline CreateModelRequest& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;

    ContainerDefinition m_primaryContainer;
    bool m_primaryContainerHasBeenSet;

    Aws::Vector<ContainerDefinition> m_containers;
    bool m_containersHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
