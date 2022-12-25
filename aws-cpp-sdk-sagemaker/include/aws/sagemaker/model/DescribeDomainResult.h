/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DomainStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AuthMode.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <aws/sagemaker/model/AppNetworkAccessType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DomainSettings.h>
#include <aws/sagemaker/model/AppSecurityGroupManagement.h>
#include <aws/sagemaker/model/DefaultSpaceSettings.h>
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
  class DescribeDomainResult
  {
  public:
    AWS_SAGEMAKER_API DescribeDomainResult();
    AWS_SAGEMAKER_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(const Aws::String& value) { m_domainArn = value; }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(Aws::String&& value) { m_domainArn = std::move(value); }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(const char* value) { m_domainArn.assign(value); }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline DescribeDomainResult& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline DescribeDomainResult& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline DescribeDomainResult& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}


    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline DescribeDomainResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline DescribeDomainResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline DescribeDomainResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The domain name.</p>
     */
    inline DescribeDomainResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name.</p>
     */
    inline DescribeDomainResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name.</p>
     */
    inline DescribeDomainResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The ID of the Amazon Elastic File System (EFS) managed by this Domain.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemId() const{ return m_homeEfsFileSystemId; }

    /**
     * <p>The ID of the Amazon Elastic File System (EFS) managed by this Domain.</p>
     */
    inline void SetHomeEfsFileSystemId(const Aws::String& value) { m_homeEfsFileSystemId = value; }

    /**
     * <p>The ID of the Amazon Elastic File System (EFS) managed by this Domain.</p>
     */
    inline void SetHomeEfsFileSystemId(Aws::String&& value) { m_homeEfsFileSystemId = std::move(value); }

    /**
     * <p>The ID of the Amazon Elastic File System (EFS) managed by this Domain.</p>
     */
    inline void SetHomeEfsFileSystemId(const char* value) { m_homeEfsFileSystemId.assign(value); }

    /**
     * <p>The ID of the Amazon Elastic File System (EFS) managed by this Domain.</p>
     */
    inline DescribeDomainResult& WithHomeEfsFileSystemId(const Aws::String& value) { SetHomeEfsFileSystemId(value); return *this;}

    /**
     * <p>The ID of the Amazon Elastic File System (EFS) managed by this Domain.</p>
     */
    inline DescribeDomainResult& WithHomeEfsFileSystemId(Aws::String&& value) { SetHomeEfsFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Elastic File System (EFS) managed by this Domain.</p>
     */
    inline DescribeDomainResult& WithHomeEfsFileSystemId(const char* value) { SetHomeEfsFileSystemId(value); return *this;}


    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline const Aws::String& GetSingleSignOnManagedApplicationInstanceId() const{ return m_singleSignOnManagedApplicationInstanceId; }

    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline void SetSingleSignOnManagedApplicationInstanceId(const Aws::String& value) { m_singleSignOnManagedApplicationInstanceId = value; }

    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline void SetSingleSignOnManagedApplicationInstanceId(Aws::String&& value) { m_singleSignOnManagedApplicationInstanceId = std::move(value); }

    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline void SetSingleSignOnManagedApplicationInstanceId(const char* value) { m_singleSignOnManagedApplicationInstanceId.assign(value); }

    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline DescribeDomainResult& WithSingleSignOnManagedApplicationInstanceId(const Aws::String& value) { SetSingleSignOnManagedApplicationInstanceId(value); return *this;}

    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline DescribeDomainResult& WithSingleSignOnManagedApplicationInstanceId(Aws::String&& value) { SetSingleSignOnManagedApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline DescribeDomainResult& WithSingleSignOnManagedApplicationInstanceId(const char* value) { SetSingleSignOnManagedApplicationInstanceId(value); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const DomainStatus& value) { m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(DomainStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline DescribeDomainResult& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline DescribeDomainResult& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline DescribeDomainResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline DescribeDomainResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last modified time.</p>
     */
    inline DescribeDomainResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last modified time.</p>
     */
    inline DescribeDomainResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeDomainResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeDomainResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeDomainResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The domain's authentication mode.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }

    /**
     * <p>The domain's authentication mode.</p>
     */
    inline void SetAuthMode(const AuthMode& value) { m_authMode = value; }

    /**
     * <p>The domain's authentication mode.</p>
     */
    inline void SetAuthMode(AuthMode&& value) { m_authMode = std::move(value); }

    /**
     * <p>The domain's authentication mode.</p>
     */
    inline DescribeDomainResult& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}

    /**
     * <p>The domain's authentication mode.</p>
     */
    inline DescribeDomainResult& WithAuthMode(AuthMode&& value) { SetAuthMode(std::move(value)); return *this;}


    /**
     * <p>Settings which are applied to UserProfiles in this domain if settings are not
     * explicitly specified in a given UserProfile. </p>
     */
    inline const UserSettings& GetDefaultUserSettings() const{ return m_defaultUserSettings; }

    /**
     * <p>Settings which are applied to UserProfiles in this domain if settings are not
     * explicitly specified in a given UserProfile. </p>
     */
    inline void SetDefaultUserSettings(const UserSettings& value) { m_defaultUserSettings = value; }

    /**
     * <p>Settings which are applied to UserProfiles in this domain if settings are not
     * explicitly specified in a given UserProfile. </p>
     */
    inline void SetDefaultUserSettings(UserSettings&& value) { m_defaultUserSettings = std::move(value); }

    /**
     * <p>Settings which are applied to UserProfiles in this domain if settings are not
     * explicitly specified in a given UserProfile. </p>
     */
    inline DescribeDomainResult& WithDefaultUserSettings(const UserSettings& value) { SetDefaultUserSettings(value); return *this;}

    /**
     * <p>Settings which are applied to UserProfiles in this domain if settings are not
     * explicitly specified in a given UserProfile. </p>
     */
    inline DescribeDomainResult& WithDefaultUserSettings(UserSettings&& value) { SetDefaultUserSettings(std::move(value)); return *this;}


    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline const AppNetworkAccessType& GetAppNetworkAccessType() const{ return m_appNetworkAccessType; }

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline void SetAppNetworkAccessType(const AppNetworkAccessType& value) { m_appNetworkAccessType = value; }

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline void SetAppNetworkAccessType(AppNetworkAccessType&& value) { m_appNetworkAccessType = std::move(value); }

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline DescribeDomainResult& WithAppNetworkAccessType(const AppNetworkAccessType& value) { SetAppNetworkAccessType(value); return *this;}

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline DescribeDomainResult& WithAppNetworkAccessType(AppNetworkAccessType&& value) { SetAppNetworkAccessType(std::move(value)); return *this;}


    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline DescribeDomainResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline DescribeDomainResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline DescribeDomainResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline DescribeDomainResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline DescribeDomainResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The domain's URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The domain's URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The domain's URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The domain's URL.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The domain's URL.</p>
     */
    inline DescribeDomainResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The domain's URL.</p>
     */
    inline DescribeDomainResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The domain's URL.</p>
     */
    inline DescribeDomainResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline DescribeDomainResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline DescribeDomainResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline DescribeDomainResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline DescribeDomainResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline DescribeDomainResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline DescribeDomainResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline const DomainSettings& GetDomainSettings() const{ return m_domainSettings; }

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline void SetDomainSettings(const DomainSettings& value) { m_domainSettings = value; }

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline void SetDomainSettings(DomainSettings&& value) { m_domainSettings = std::move(value); }

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline DescribeDomainResult& WithDomainSettings(const DomainSettings& value) { SetDomainSettings(value); return *this;}

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline DescribeDomainResult& WithDomainSettings(DomainSettings&& value) { SetDomainSettings(std::move(value)); return *this;}


    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline const AppSecurityGroupManagement& GetAppSecurityGroupManagement() const{ return m_appSecurityGroupManagement; }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline void SetAppSecurityGroupManagement(const AppSecurityGroupManagement& value) { m_appSecurityGroupManagement = value; }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline void SetAppSecurityGroupManagement(AppSecurityGroupManagement&& value) { m_appSecurityGroupManagement = std::move(value); }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline DescribeDomainResult& WithAppSecurityGroupManagement(const AppSecurityGroupManagement& value) { SetAppSecurityGroupManagement(value); return *this;}

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline DescribeDomainResult& WithAppSecurityGroupManagement(AppSecurityGroupManagement&& value) { SetAppSecurityGroupManagement(std::move(value)); return *this;}


    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline const Aws::String& GetSecurityGroupIdForDomainBoundary() const{ return m_securityGroupIdForDomainBoundary; }

    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline void SetSecurityGroupIdForDomainBoundary(const Aws::String& value) { m_securityGroupIdForDomainBoundary = value; }

    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline void SetSecurityGroupIdForDomainBoundary(Aws::String&& value) { m_securityGroupIdForDomainBoundary = std::move(value); }

    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline void SetSecurityGroupIdForDomainBoundary(const char* value) { m_securityGroupIdForDomainBoundary.assign(value); }

    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline DescribeDomainResult& WithSecurityGroupIdForDomainBoundary(const Aws::String& value) { SetSecurityGroupIdForDomainBoundary(value); return *this;}

    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline DescribeDomainResult& WithSecurityGroupIdForDomainBoundary(Aws::String&& value) { SetSecurityGroupIdForDomainBoundary(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline DescribeDomainResult& WithSecurityGroupIdForDomainBoundary(const char* value) { SetSecurityGroupIdForDomainBoundary(value); return *this;}


    /**
     * <p>The default settings used to create a space.</p>
     */
    inline const DefaultSpaceSettings& GetDefaultSpaceSettings() const{ return m_defaultSpaceSettings; }

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline void SetDefaultSpaceSettings(const DefaultSpaceSettings& value) { m_defaultSpaceSettings = value; }

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline void SetDefaultSpaceSettings(DefaultSpaceSettings&& value) { m_defaultSpaceSettings = std::move(value); }

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline DescribeDomainResult& WithDefaultSpaceSettings(const DefaultSpaceSettings& value) { SetDefaultSpaceSettings(value); return *this;}

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline DescribeDomainResult& WithDefaultSpaceSettings(DefaultSpaceSettings&& value) { SetDefaultSpaceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_domainArn;

    Aws::String m_domainId;

    Aws::String m_domainName;

    Aws::String m_homeEfsFileSystemId;

    Aws::String m_singleSignOnManagedApplicationInstanceId;

    DomainStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    AuthMode m_authMode;

    UserSettings m_defaultUserSettings;

    AppNetworkAccessType m_appNetworkAccessType;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::String m_url;

    Aws::String m_vpcId;

    Aws::String m_kmsKeyId;

    DomainSettings m_domainSettings;

    AppSecurityGroupManagement m_appSecurityGroupManagement;

    Aws::String m_securityGroupIdForDomainBoundary;

    DefaultSpaceSettings m_defaultSpaceSettings;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
