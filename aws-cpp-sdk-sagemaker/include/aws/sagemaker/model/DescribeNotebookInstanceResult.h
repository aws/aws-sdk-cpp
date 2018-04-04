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
     * <p> Name of the Amazon SageMaker notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }

    /**
     * <p> Name of the Amazon SageMaker notebook instance. </p>
     */
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceName = value; }

    /**
     * <p> Name of the Amazon SageMaker notebook instance. </p>
     */
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceName = std::move(value); }

    /**
     * <p> Name of the Amazon SageMaker notebook instance. </p>
     */
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceName.assign(value); }

    /**
     * <p> Name of the Amazon SageMaker notebook instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}

    /**
     * <p> Name of the Amazon SageMaker notebook instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}

    /**
     * <p> Name of the Amazon SageMaker notebook instance. </p>
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
     * <p>If status is failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If status is failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If status is failed, the reason it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If status is failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If status is failed, the reason it failed.</p>
     */
    inline DescribeNotebookInstanceResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If status is failed, the reason it failed.</p>
     */
    inline DescribeNotebookInstanceResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If status is failed, the reason it failed.</p>
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
     * <p> Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p> Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p> Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p> Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline DescribeNotebookInstanceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline DescribeNotebookInstanceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline DescribeNotebookInstanceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p> AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p> AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p> AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> AWS KMS key ID Amazon SageMaker uses to encrypt data when storing it on the
     * ML storage volume attached to the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> Network interface IDs that Amazon SageMaker created at the time of creating
     * the instance. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p> Network interface IDs that Amazon SageMaker created at the time of creating
     * the instance. </p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceId = value; }

    /**
     * <p> Network interface IDs that Amazon SageMaker created at the time of creating
     * the instance. </p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceId = std::move(value); }

    /**
     * <p> Network interface IDs that Amazon SageMaker created at the time of creating
     * the instance. </p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceId.assign(value); }

    /**
     * <p> Network interface IDs that Amazon SageMaker created at the time of creating
     * the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p> Network interface IDs that Amazon SageMaker created at the time of creating
     * the instance. </p>
     */
    inline DescribeNotebookInstanceResult& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p> Network interface IDs that Amazon SageMaker created at the time of creating
     * the instance. </p>
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
     * information about notebook instance lifestyle configurations, see
     * <a>notebook-lifecycle-config</a>.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see
     * <a>notebook-lifecycle-config</a>.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigName = value; }

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see
     * <a>notebook-lifecycle-config</a>.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigName = std::move(value); }

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see
     * <a>notebook-lifecycle-config</a>.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigName.assign(value); }

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see
     * <a>notebook-lifecycle-config</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see
     * <a>notebook-lifecycle-config</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see
     * <a>notebook-lifecycle-config</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}


    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled, he notebook instance does not
     * have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services</i>.</p> <p>For more information, see
     * <a>appendix-notebook-and-internet-access</a>.</p>
     */
    inline const DirectInternetAccess& GetDirectInternetAccess() const{ return m_directInternetAccess; }

    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled, he notebook instance does not
     * have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services</i>.</p> <p>For more information, see
     * <a>appendix-notebook-and-internet-access</a>.</p>
     */
    inline void SetDirectInternetAccess(const DirectInternetAccess& value) { m_directInternetAccess = value; }

    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled, he notebook instance does not
     * have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services</i>.</p> <p>For more information, see
     * <a>appendix-notebook-and-internet-access</a>.</p>
     */
    inline void SetDirectInternetAccess(DirectInternetAccess&& value) { m_directInternetAccess = std::move(value); }

    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled, he notebook instance does not
     * have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services</i>.</p> <p>For more information, see
     * <a>appendix-notebook-and-internet-access</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithDirectInternetAccess(const DirectInternetAccess& value) { SetDirectInternetAccess(value); return *this;}

    /**
     * <p>Describes whether Amazon SageMaker provides internet access to the notebook
     * instance. If this value is set to <i>Disabled, he notebook instance does not
     * have internet access, and cannot connect to Amazon SageMaker training and
     * endpoint services</i>.</p> <p>For more information, see
     * <a>appendix-notebook-and-internet-access</a>.</p>
     */
    inline DescribeNotebookInstanceResult& WithDirectInternetAccess(DirectInternetAccess&& value) { SetDirectInternetAccess(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
