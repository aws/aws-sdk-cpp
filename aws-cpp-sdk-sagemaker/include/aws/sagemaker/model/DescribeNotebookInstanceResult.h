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
#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <aws/sagemaker/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DirectInternetAccess.h>
#include <aws/sagemaker/model/RootAccess.h>
#include <aws/sagemaker/model/NotebookInstanceAcceleratorType.h>
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
  class AWS_SAGEMAKER_API DescribeNotebookInstanceResult
  {
  public:
    DescribeNotebookInstanceResult();
    DescribeNotebookInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeNotebookInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const{ return m_notebookInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline void SetNotebookInstanceArn(const Aws::String& value) { m_notebookInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline void SetNotebookInstanceArn(Aws::String&& value) { m_notebookInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline void SetNotebookInstanceArn(const char* value) { m_notebookInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceArn(const Aws::String& value) { SetNotebookInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceArn(Aws::String&& value) { SetNotebookInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceArn(const char* value) { SetNotebookInstanceArn(value); return *this;}


    /**
     * <p>The name of the Amazon SageMaker notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }

    /**
     * <p>The name of the Amazon SageMaker notebook instance. </p>
     */
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceName = value; }

    /**
     * <p>The name of the Amazon SageMaker notebook instance. </p>
     */
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceName = std::move(value); }

    /**
     * <p>The name of the Amazon SageMaker notebook instance. </p>
     */
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceName.assign(value); }

    /**
     * <p>The name of the Amazon SageMaker notebook instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}

    /**
     * <p>The name of the Amazon SageMaker notebook instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon SageMaker notebook instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}


    /**
     * <p>The status of the notebook instance.</p>
     */
    inline const NotebookInstanceStatus& GetNotebookInstanceStatus() const{ return m_notebookInstanceStatus; }

    /**
     * <p>The status of the notebook instance.</p>
     */
    inline void SetNotebookInstanceStatus(const NotebookInstanceStatus& value) { m_notebookInstanceStatus = value; }

    /**
     * <p>The status of the notebook instance.</p>
     */
    inline void SetNotebookInstanceStatus(NotebookInstanceStatus&& value) { m_notebookInstanceStatus = std::move(value); }

    /**
     * <p>The status of the notebook instance.</p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceStatus(const NotebookInstanceStatus& value) { SetNotebookInstanceStatus(value); return *this;}

    /**
     * <p>The status of the notebook instance.</p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceStatus(NotebookInstanceStatus&& value) { SetNotebookInstanceStatus(std::move(value)); return *this;}


    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline DescribeNotebookInstanceResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline DescribeNotebookInstanceResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline DescribeNotebookInstanceResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The type of ML compute instance running on the notebook instance.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of ML compute instance running on the notebook instance.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceType = value; }

    /**
     * <p>The type of ML compute instance running on the notebook instance.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceType = std::move(value); }

    /**
     * <p>The type of ML compute instance running on the notebook instance.</p>
     */
    inline DescribeNotebookInstanceResult& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of ML compute instance running on the notebook instance.</p>
     */
    inline DescribeNotebookInstanceResult& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetId = value; }

    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetId = std::move(value); }

    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetId.assign(value); }

    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline DescribeNotebookInstanceResult& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline DescribeNotebookInstanceResult& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline DescribeNotebookInstanceResult& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }

    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }

    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline DescribeNotebookInstanceResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline DescribeNotebookInstanceResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline DescribeNotebookInstanceResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline DescribeNotebookInstanceResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline DescribeNotebookInstanceResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline DescribeNotebookInstanceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline DescribeNotebookInstanceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline DescribeNotebookInstanceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on
     * the ML storage volume attached to the instance. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on
     * the ML storage volume attached to the instance. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on
     * the ML storage volume attached to the instance. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on
     * the ML storage volume attached to the instance. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on
     * the ML storage volume attached to the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on
     * the ML storage volume attached to the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on
     * the ML storage volume attached to the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The network interface IDs that Amazon SageMaker created at the time of
     * creating the instance. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The network interface IDs that Amazon SageMaker created at the time of
     * creating the instance. </p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceId = value; }

    /**
     * <p>The network interface IDs that Amazon SageMaker created at the time of
     * creating the instance. </p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceId = std::move(value); }

    /**
     * <p>The network interface IDs that Amazon SageMaker created at the time of
     * creating the instance. </p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceId.assign(value); }

    /**
     * <p>The network interface IDs that Amazon SageMaker created at the time of
     * creating the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The network interface IDs that Amazon SageMaker created at the time of
     * creating the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The network interface IDs that Amazon SageMaker created at the time of
     * creating the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>A timestamp. Use this parameter to retrieve the time when the notebook
     * instance was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp. Use this parameter to retrieve the time when the notebook
     * instance was last modified. </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A timestamp. Use this parameter to retrieve the time when the notebook
     * instance was last modified. </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp. Use this parameter to retrieve the time when the notebook
     * instance was last modified. </p>
     */
    inline DescribeNotebookInstanceResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp. Use this parameter to retrieve the time when the notebook
     * instance was last modified. </p>
     */
    inline DescribeNotebookInstanceResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp. Use this parameter to return the time when the notebook instance
     * was created</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp. Use this parameter to return the time when the notebook instance
     * was created</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp. Use this parameter to return the time when the notebook instance
     * was created</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp. Use this parameter to return the time when the notebook instance
     * was created</p>
     */
    inline DescribeNotebookInstanceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp. Use this parameter to return the time when the notebook instance
     * was created</p>
     */
    inline DescribeNotebookInstanceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigName = value; }

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigName = std::move(value); }

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigName.assign(value); }

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}


    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled</i>, the notebook instance does
     * not have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/appendix-additional-considerations.html#appendix-notebook-and-internet-access">Notebook
     * Instances Are Internet-Enabled by Default</a>.</p>
     */
    inline const DirectInternetAccess& GetDirectInternetAccess() const{ return m_directInternetAccess; }

    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled</i>, the notebook instance does
     * not have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/appendix-additional-considerations.html#appendix-notebook-and-internet-access">Notebook
     * Instances Are Internet-Enabled by Default</a>.</p>
     */
    inline void SetDirectInternetAccess(const DirectInternetAccess& value) { m_directInternetAccess = value; }

    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled</i>, the notebook instance does
     * not have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/appendix-additional-considerations.html#appendix-notebook-and-internet-access">Notebook
     * Instances Are Internet-Enabled by Default</a>.</p>
     */
    inline void SetDirectInternetAccess(DirectInternetAccess&& value) { m_directInternetAccess = std::move(value); }

    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled</i>, the notebook instance does
     * not have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/appendix-additional-considerations.html#appendix-notebook-and-internet-access">Notebook
     * Instances Are Internet-Enabled by Default</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithDirectInternetAccess(const DirectInternetAccess& value) { SetDirectInternetAccess(value); return *this;}

    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled</i>, the notebook instance does
     * not have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/appendix-additional-considerations.html#appendix-notebook-and-internet-access">Notebook
     * Instances Are Internet-Enabled by Default</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithDirectInternetAccess(DirectInternetAccess&& value) { SetDirectInternetAccess(std::move(value)); return *this;}


    /**
     * <p>The size, in GB, of the ML storage volume attached to the notebook
     * instance.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size, in GB, of the ML storage volume attached to the notebook
     * instance.</p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGB = value; }

    /**
     * <p>The size, in GB, of the ML storage volume attached to the notebook
     * instance.</p>
     */
    inline DescribeNotebookInstanceResult& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}


    /**
     * <p>A list of the Elastic Inference (EI) instance types associated with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline const Aws::Vector<NotebookInstanceAcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types associated with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { m_acceleratorTypes = value; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types associated with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { m_acceleratorTypes = std::move(value); }

    /**
     * <p>A list of the Elastic Inference (EI) instance types associated with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p>A list of the Elastic Inference (EI) instance types associated with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the Elastic Inference (EI) instance types associated with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline DescribeNotebookInstanceResult& AddAcceleratorTypes(const NotebookInstanceAcceleratorType& value) { m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types associated with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline DescribeNotebookInstanceResult& AddAcceleratorTypes(NotebookInstanceAcceleratorType&& value) { m_acceleratorTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline const Aws::String& GetDefaultCodeRepository() const{ return m_defaultCodeRepository; }

    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetDefaultCodeRepository(const Aws::String& value) { m_defaultCodeRepository = value; }

    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetDefaultCodeRepository(Aws::String&& value) { m_defaultCodeRepository = std::move(value); }

    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetDefaultCodeRepository(const char* value) { m_defaultCodeRepository.assign(value); }

    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithDefaultCodeRepository(const Aws::String& value) { SetDefaultCodeRepository(value); return *this;}

    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithDefaultCodeRepository(Aws::String&& value) { SetDefaultCodeRepository(std::move(value)); return *this;}

    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithDefaultCodeRepository(const char* value) { SetDefaultCodeRepository(value); return *this;}


    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const{ return m_additionalCodeRepositories; }

    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { m_additionalCodeRepositories = value; }

    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { m_additionalCodeRepositories = std::move(value); }

    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { SetAdditionalCodeRepositories(value); return *this;}

    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { SetAdditionalCodeRepositories(std::move(value)); return *this;}

    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline DescribeNotebookInstanceResult& AddAdditionalCodeRepositories(const Aws::String& value) { m_additionalCodeRepositories.push_back(value); return *this; }

    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline DescribeNotebookInstanceResult& AddAdditionalCodeRepositories(Aws::String&& value) { m_additionalCodeRepositories.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline DescribeNotebookInstanceResult& AddAdditionalCodeRepositories(const char* value) { m_additionalCodeRepositories.push_back(value); return *this; }


    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance.</p> <note> <p>Lifecycle configurations need root access to be able to
     * set up a notebook instance. Because of this, lifecycle configurations associated
     * with a notebook instance always run with root access even if you disable root
     * access for users.</p> </note>
     */
    inline const RootAccess& GetRootAccess() const{ return m_rootAccess; }

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance.</p> <note> <p>Lifecycle configurations need root access to be able to
     * set up a notebook instance. Because of this, lifecycle configurations associated
     * with a notebook instance always run with root access even if you disable root
     * access for users.</p> </note>
     */
    inline void SetRootAccess(const RootAccess& value) { m_rootAccess = value; }

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance.</p> <note> <p>Lifecycle configurations need root access to be able to
     * set up a notebook instance. Because of this, lifecycle configurations associated
     * with a notebook instance always run with root access even if you disable root
     * access for users.</p> </note>
     */
    inline void SetRootAccess(RootAccess&& value) { m_rootAccess = std::move(value); }

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance.</p> <note> <p>Lifecycle configurations need root access to be able to
     * set up a notebook instance. Because of this, lifecycle configurations associated
     * with a notebook instance always run with root access even if you disable root
     * access for users.</p> </note>
     */
    inline DescribeNotebookInstanceResult& WithRootAccess(const RootAccess& value) { SetRootAccess(value); return *this;}

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance.</p> <note> <p>Lifecycle configurations need root access to be able to
     * set up a notebook instance. Because of this, lifecycle configurations associated
     * with a notebook instance always run with root access even if you disable root
     * access for users.</p> </note>
     */
    inline DescribeNotebookInstanceResult& WithRootAccess(RootAccess&& value) { SetRootAccess(std::move(value)); return *this;}

  private:

    Aws::String m_notebookInstanceArn;

    Aws::String m_notebookInstanceName;

    NotebookInstanceStatus m_notebookInstanceStatus;

    Aws::String m_failureReason;

    Aws::String m_url;

    InstanceType m_instanceType;

    Aws::String m_subnetId;

    Aws::Vector<Aws::String> m_securityGroups;

    Aws::String m_roleArn;

    Aws::String m_kmsKeyId;

    Aws::String m_networkInterfaceId;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_notebookInstanceLifecycleConfigName;

    DirectInternetAccess m_directInternetAccess;

    int m_volumeSizeInGB;

    Aws::Vector<NotebookInstanceAcceleratorType> m_acceleratorTypes;

    Aws::String m_defaultCodeRepository;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;

    RootAccess m_rootAccess;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
