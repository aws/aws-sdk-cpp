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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsm/model/HsmStatus.h>
#include <aws/cloudhsm/model/SubscriptionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudHSM
{
namespace Model
{
  /**
   * <p>Contains the output of the <a>DescribeHsm</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHsmResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSM_API DescribeHsmResult
  {
  public:
    DescribeHsmResult();
    DescribeHsmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeHsmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the HSM.</p>
     */
    inline const Aws::String& GetHsmArn() const{ return m_hsmArn; }

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline void SetHsmArn(const Aws::String& value) { m_hsmArn = value; }

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline void SetHsmArn(Aws::String&& value) { m_hsmArn = std::move(value); }

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline void SetHsmArn(const char* value) { m_hsmArn.assign(value); }

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline DescribeHsmResult& WithHsmArn(const Aws::String& value) { SetHsmArn(value); return *this;}

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline DescribeHsmResult& WithHsmArn(Aws::String&& value) { SetHsmArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline DescribeHsmResult& WithHsmArn(const char* value) { SetHsmArn(value); return *this;}


    /**
     * <p>The status of the HSM.</p>
     */
    inline const HsmStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the HSM.</p>
     */
    inline void SetStatus(const HsmStatus& value) { m_status = value; }

    /**
     * <p>The status of the HSM.</p>
     */
    inline void SetStatus(HsmStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the HSM.</p>
     */
    inline DescribeHsmResult& WithStatus(const HsmStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the HSM.</p>
     */
    inline DescribeHsmResult& WithStatus(HsmStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Contains additional information about the status of the HSM.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>Contains additional information about the status of the HSM.</p>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetails = value; }

    /**
     * <p>Contains additional information about the status of the HSM.</p>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetails = std::move(value); }

    /**
     * <p>Contains additional information about the status of the HSM.</p>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetails.assign(value); }

    /**
     * <p>Contains additional information about the status of the HSM.</p>
     */
    inline DescribeHsmResult& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>Contains additional information about the status of the HSM.</p>
     */
    inline DescribeHsmResult& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>Contains additional information about the status of the HSM.</p>
     */
    inline DescribeHsmResult& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>The Availability Zone that the HSM is in.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone that the HSM is in.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }

    /**
     * <p>The Availability Zone that the HSM is in.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone that the HSM is in.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The identifier of the elastic network interface (ENI) attached to the
     * HSM.</p>
     */
    inline const Aws::String& GetEniId() const{ return m_eniId; }

    /**
     * <p>The identifier of the elastic network interface (ENI) attached to the
     * HSM.</p>
     */
    inline void SetEniId(const Aws::String& value) { m_eniId = value; }

    /**
     * <p>The identifier of the elastic network interface (ENI) attached to the
     * HSM.</p>
     */
    inline void SetEniId(Aws::String&& value) { m_eniId = std::move(value); }

    /**
     * <p>The identifier of the elastic network interface (ENI) attached to the
     * HSM.</p>
     */
    inline void SetEniId(const char* value) { m_eniId.assign(value); }

    /**
     * <p>The identifier of the elastic network interface (ENI) attached to the
     * HSM.</p>
     */
    inline DescribeHsmResult& WithEniId(const Aws::String& value) { SetEniId(value); return *this;}

    /**
     * <p>The identifier of the elastic network interface (ENI) attached to the
     * HSM.</p>
     */
    inline DescribeHsmResult& WithEniId(Aws::String&& value) { SetEniId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the elastic network interface (ENI) attached to the
     * HSM.</p>
     */
    inline DescribeHsmResult& WithEniId(const char* value) { SetEniId(value); return *this;}


    /**
     * <p>The IP address assigned to the HSM's ENI.</p>
     */
    inline const Aws::String& GetEniIp() const{ return m_eniIp; }

    /**
     * <p>The IP address assigned to the HSM's ENI.</p>
     */
    inline void SetEniIp(const Aws::String& value) { m_eniIp = value; }

    /**
     * <p>The IP address assigned to the HSM's ENI.</p>
     */
    inline void SetEniIp(Aws::String&& value) { m_eniIp = std::move(value); }

    /**
     * <p>The IP address assigned to the HSM's ENI.</p>
     */
    inline void SetEniIp(const char* value) { m_eniIp.assign(value); }

    /**
     * <p>The IP address assigned to the HSM's ENI.</p>
     */
    inline DescribeHsmResult& WithEniIp(const Aws::String& value) { SetEniIp(value); return *this;}

    /**
     * <p>The IP address assigned to the HSM's ENI.</p>
     */
    inline DescribeHsmResult& WithEniIp(Aws::String&& value) { SetEniIp(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the HSM's ENI.</p>
     */
    inline DescribeHsmResult& WithEniIp(const char* value) { SetEniIp(value); return *this;}


    
    inline const SubscriptionType& GetSubscriptionType() const{ return m_subscriptionType; }

    
    inline void SetSubscriptionType(const SubscriptionType& value) { m_subscriptionType = value; }

    
    inline void SetSubscriptionType(SubscriptionType&& value) { m_subscriptionType = std::move(value); }

    
    inline DescribeHsmResult& WithSubscriptionType(const SubscriptionType& value) { SetSubscriptionType(value); return *this;}

    
    inline DescribeHsmResult& WithSubscriptionType(SubscriptionType&& value) { SetSubscriptionType(std::move(value)); return *this;}


    /**
     * <p>The subscription start date.</p>
     */
    inline const Aws::String& GetSubscriptionStartDate() const{ return m_subscriptionStartDate; }

    /**
     * <p>The subscription start date.</p>
     */
    inline void SetSubscriptionStartDate(const Aws::String& value) { m_subscriptionStartDate = value; }

    /**
     * <p>The subscription start date.</p>
     */
    inline void SetSubscriptionStartDate(Aws::String&& value) { m_subscriptionStartDate = std::move(value); }

    /**
     * <p>The subscription start date.</p>
     */
    inline void SetSubscriptionStartDate(const char* value) { m_subscriptionStartDate.assign(value); }

    /**
     * <p>The subscription start date.</p>
     */
    inline DescribeHsmResult& WithSubscriptionStartDate(const Aws::String& value) { SetSubscriptionStartDate(value); return *this;}

    /**
     * <p>The subscription start date.</p>
     */
    inline DescribeHsmResult& WithSubscriptionStartDate(Aws::String&& value) { SetSubscriptionStartDate(std::move(value)); return *this;}

    /**
     * <p>The subscription start date.</p>
     */
    inline DescribeHsmResult& WithSubscriptionStartDate(const char* value) { SetSubscriptionStartDate(value); return *this;}


    /**
     * <p>The subscription end date.</p>
     */
    inline const Aws::String& GetSubscriptionEndDate() const{ return m_subscriptionEndDate; }

    /**
     * <p>The subscription end date.</p>
     */
    inline void SetSubscriptionEndDate(const Aws::String& value) { m_subscriptionEndDate = value; }

    /**
     * <p>The subscription end date.</p>
     */
    inline void SetSubscriptionEndDate(Aws::String&& value) { m_subscriptionEndDate = std::move(value); }

    /**
     * <p>The subscription end date.</p>
     */
    inline void SetSubscriptionEndDate(const char* value) { m_subscriptionEndDate.assign(value); }

    /**
     * <p>The subscription end date.</p>
     */
    inline DescribeHsmResult& WithSubscriptionEndDate(const Aws::String& value) { SetSubscriptionEndDate(value); return *this;}

    /**
     * <p>The subscription end date.</p>
     */
    inline DescribeHsmResult& WithSubscriptionEndDate(Aws::String&& value) { SetSubscriptionEndDate(std::move(value)); return *this;}

    /**
     * <p>The subscription end date.</p>
     */
    inline DescribeHsmResult& WithSubscriptionEndDate(const char* value) { SetSubscriptionEndDate(value); return *this;}


    /**
     * <p>The identifier of the VPC that the HSM is in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC that the HSM is in.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The identifier of the VPC that the HSM is in.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the VPC that the HSM is in.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The identifier of the subnet that the HSM is in.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The identifier of the subnet that the HSM is in.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetId = value; }

    /**
     * <p>The identifier of the subnet that the HSM is in.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetId = std::move(value); }

    /**
     * <p>The identifier of the subnet that the HSM is in.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetId.assign(value); }

    /**
     * <p>The identifier of the subnet that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The identifier of the subnet that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subnet that the HSM is in.</p>
     */
    inline DescribeHsmResult& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The ARN of the IAM role assigned to the HSM.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The ARN of the IAM role assigned to the HSM.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArn = value; }

    /**
     * <p>The ARN of the IAM role assigned to the HSM.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role assigned to the HSM.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role assigned to the HSM.</p>
     */
    inline DescribeHsmResult& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role assigned to the HSM.</p>
     */
    inline DescribeHsmResult& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role assigned to the HSM.</p>
     */
    inline DescribeHsmResult& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The serial number of the HSM.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The serial number of the HSM.</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumber = value; }

    /**
     * <p>The serial number of the HSM.</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumber = std::move(value); }

    /**
     * <p>The serial number of the HSM.</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumber.assign(value); }

    /**
     * <p>The serial number of the HSM.</p>
     */
    inline DescribeHsmResult& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The serial number of the HSM.</p>
     */
    inline DescribeHsmResult& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number of the HSM.</p>
     */
    inline DescribeHsmResult& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>The name of the HSM vendor.</p>
     */
    inline const Aws::String& GetVendorName() const{ return m_vendorName; }

    /**
     * <p>The name of the HSM vendor.</p>
     */
    inline void SetVendorName(const Aws::String& value) { m_vendorName = value; }

    /**
     * <p>The name of the HSM vendor.</p>
     */
    inline void SetVendorName(Aws::String&& value) { m_vendorName = std::move(value); }

    /**
     * <p>The name of the HSM vendor.</p>
     */
    inline void SetVendorName(const char* value) { m_vendorName.assign(value); }

    /**
     * <p>The name of the HSM vendor.</p>
     */
    inline DescribeHsmResult& WithVendorName(const Aws::String& value) { SetVendorName(value); return *this;}

    /**
     * <p>The name of the HSM vendor.</p>
     */
    inline DescribeHsmResult& WithVendorName(Aws::String&& value) { SetVendorName(std::move(value)); return *this;}

    /**
     * <p>The name of the HSM vendor.</p>
     */
    inline DescribeHsmResult& WithVendorName(const char* value) { SetVendorName(value); return *this;}


    /**
     * <p>The HSM model type.</p>
     */
    inline const Aws::String& GetHsmType() const{ return m_hsmType; }

    /**
     * <p>The HSM model type.</p>
     */
    inline void SetHsmType(const Aws::String& value) { m_hsmType = value; }

    /**
     * <p>The HSM model type.</p>
     */
    inline void SetHsmType(Aws::String&& value) { m_hsmType = std::move(value); }

    /**
     * <p>The HSM model type.</p>
     */
    inline void SetHsmType(const char* value) { m_hsmType.assign(value); }

    /**
     * <p>The HSM model type.</p>
     */
    inline DescribeHsmResult& WithHsmType(const Aws::String& value) { SetHsmType(value); return *this;}

    /**
     * <p>The HSM model type.</p>
     */
    inline DescribeHsmResult& WithHsmType(Aws::String&& value) { SetHsmType(std::move(value)); return *this;}

    /**
     * <p>The HSM model type.</p>
     */
    inline DescribeHsmResult& WithHsmType(const char* value) { SetHsmType(value); return *this;}


    /**
     * <p>The HSM software version.</p>
     */
    inline const Aws::String& GetSoftwareVersion() const{ return m_softwareVersion; }

    /**
     * <p>The HSM software version.</p>
     */
    inline void SetSoftwareVersion(const Aws::String& value) { m_softwareVersion = value; }

    /**
     * <p>The HSM software version.</p>
     */
    inline void SetSoftwareVersion(Aws::String&& value) { m_softwareVersion = std::move(value); }

    /**
     * <p>The HSM software version.</p>
     */
    inline void SetSoftwareVersion(const char* value) { m_softwareVersion.assign(value); }

    /**
     * <p>The HSM software version.</p>
     */
    inline DescribeHsmResult& WithSoftwareVersion(const Aws::String& value) { SetSoftwareVersion(value); return *this;}

    /**
     * <p>The HSM software version.</p>
     */
    inline DescribeHsmResult& WithSoftwareVersion(Aws::String&& value) { SetSoftwareVersion(std::move(value)); return *this;}

    /**
     * <p>The HSM software version.</p>
     */
    inline DescribeHsmResult& WithSoftwareVersion(const char* value) { SetSoftwareVersion(value); return *this;}


    /**
     * <p>The public SSH key.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }

    /**
     * <p>The public SSH key.</p>
     */
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKey = value; }

    /**
     * <p>The public SSH key.</p>
     */
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKey = std::move(value); }

    /**
     * <p>The public SSH key.</p>
     */
    inline void SetSshPublicKey(const char* value) { m_sshPublicKey.assign(value); }

    /**
     * <p>The public SSH key.</p>
     */
    inline DescribeHsmResult& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The public SSH key.</p>
     */
    inline DescribeHsmResult& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public SSH key.</p>
     */
    inline DescribeHsmResult& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}


    /**
     * <p>The date and time that the SSH key was last updated.</p>
     */
    inline const Aws::String& GetSshKeyLastUpdated() const{ return m_sshKeyLastUpdated; }

    /**
     * <p>The date and time that the SSH key was last updated.</p>
     */
    inline void SetSshKeyLastUpdated(const Aws::String& value) { m_sshKeyLastUpdated = value; }

    /**
     * <p>The date and time that the SSH key was last updated.</p>
     */
    inline void SetSshKeyLastUpdated(Aws::String&& value) { m_sshKeyLastUpdated = std::move(value); }

    /**
     * <p>The date and time that the SSH key was last updated.</p>
     */
    inline void SetSshKeyLastUpdated(const char* value) { m_sshKeyLastUpdated.assign(value); }

    /**
     * <p>The date and time that the SSH key was last updated.</p>
     */
    inline DescribeHsmResult& WithSshKeyLastUpdated(const Aws::String& value) { SetSshKeyLastUpdated(value); return *this;}

    /**
     * <p>The date and time that the SSH key was last updated.</p>
     */
    inline DescribeHsmResult& WithSshKeyLastUpdated(Aws::String&& value) { SetSshKeyLastUpdated(std::move(value)); return *this;}

    /**
     * <p>The date and time that the SSH key was last updated.</p>
     */
    inline DescribeHsmResult& WithSshKeyLastUpdated(const char* value) { SetSshKeyLastUpdated(value); return *this;}


    /**
     * <p>The URI of the certificate server.</p>
     */
    inline const Aws::String& GetServerCertUri() const{ return m_serverCertUri; }

    /**
     * <p>The URI of the certificate server.</p>
     */
    inline void SetServerCertUri(const Aws::String& value) { m_serverCertUri = value; }

    /**
     * <p>The URI of the certificate server.</p>
     */
    inline void SetServerCertUri(Aws::String&& value) { m_serverCertUri = std::move(value); }

    /**
     * <p>The URI of the certificate server.</p>
     */
    inline void SetServerCertUri(const char* value) { m_serverCertUri.assign(value); }

    /**
     * <p>The URI of the certificate server.</p>
     */
    inline DescribeHsmResult& WithServerCertUri(const Aws::String& value) { SetServerCertUri(value); return *this;}

    /**
     * <p>The URI of the certificate server.</p>
     */
    inline DescribeHsmResult& WithServerCertUri(Aws::String&& value) { SetServerCertUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the certificate server.</p>
     */
    inline DescribeHsmResult& WithServerCertUri(const char* value) { SetServerCertUri(value); return *this;}


    /**
     * <p>The date and time that the server certificate was last updated.</p>
     */
    inline const Aws::String& GetServerCertLastUpdated() const{ return m_serverCertLastUpdated; }

    /**
     * <p>The date and time that the server certificate was last updated.</p>
     */
    inline void SetServerCertLastUpdated(const Aws::String& value) { m_serverCertLastUpdated = value; }

    /**
     * <p>The date and time that the server certificate was last updated.</p>
     */
    inline void SetServerCertLastUpdated(Aws::String&& value) { m_serverCertLastUpdated = std::move(value); }

    /**
     * <p>The date and time that the server certificate was last updated.</p>
     */
    inline void SetServerCertLastUpdated(const char* value) { m_serverCertLastUpdated.assign(value); }

    /**
     * <p>The date and time that the server certificate was last updated.</p>
     */
    inline DescribeHsmResult& WithServerCertLastUpdated(const Aws::String& value) { SetServerCertLastUpdated(value); return *this;}

    /**
     * <p>The date and time that the server certificate was last updated.</p>
     */
    inline DescribeHsmResult& WithServerCertLastUpdated(Aws::String&& value) { SetServerCertLastUpdated(std::move(value)); return *this;}

    /**
     * <p>The date and time that the server certificate was last updated.</p>
     */
    inline DescribeHsmResult& WithServerCertLastUpdated(const char* value) { SetServerCertLastUpdated(value); return *this;}


    /**
     * <p>The list of partitions on the HSM.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitions() const{ return m_partitions; }

    /**
     * <p>The list of partitions on the HSM.</p>
     */
    inline void SetPartitions(const Aws::Vector<Aws::String>& value) { m_partitions = value; }

    /**
     * <p>The list of partitions on the HSM.</p>
     */
    inline void SetPartitions(Aws::Vector<Aws::String>&& value) { m_partitions = std::move(value); }

    /**
     * <p>The list of partitions on the HSM.</p>
     */
    inline DescribeHsmResult& WithPartitions(const Aws::Vector<Aws::String>& value) { SetPartitions(value); return *this;}

    /**
     * <p>The list of partitions on the HSM.</p>
     */
    inline DescribeHsmResult& WithPartitions(Aws::Vector<Aws::String>&& value) { SetPartitions(std::move(value)); return *this;}

    /**
     * <p>The list of partitions on the HSM.</p>
     */
    inline DescribeHsmResult& AddPartitions(const Aws::String& value) { m_partitions.push_back(value); return *this; }

    /**
     * <p>The list of partitions on the HSM.</p>
     */
    inline DescribeHsmResult& AddPartitions(Aws::String&& value) { m_partitions.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of partitions on the HSM.</p>
     */
    inline DescribeHsmResult& AddPartitions(const char* value) { m_partitions.push_back(value); return *this; }

  private:

    Aws::String m_hsmArn;

    HsmStatus m_status;

    Aws::String m_statusDetails;

    Aws::String m_availabilityZone;

    Aws::String m_eniId;

    Aws::String m_eniIp;

    SubscriptionType m_subscriptionType;

    Aws::String m_subscriptionStartDate;

    Aws::String m_subscriptionEndDate;

    Aws::String m_vpcId;

    Aws::String m_subnetId;

    Aws::String m_iamRoleArn;

    Aws::String m_serialNumber;

    Aws::String m_vendorName;

    Aws::String m_hsmType;

    Aws::String m_softwareVersion;

    Aws::String m_sshPublicKey;

    Aws::String m_sshKeyLastUpdated;

    Aws::String m_serverCertUri;

    Aws::String m_serverCertLastUpdated;

    Aws::Vector<Aws::String> m_partitions;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
