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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details of an Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2InstanceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsEc2InstanceDetails
  {
  public:
    AwsEc2InstanceDetails();
    AwsEc2InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsEc2InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance type of the instance. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The instance type of the instance. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The instance type of the instance. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The instance type of the instance. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The instance type of the instance. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The instance type of the instance. </p>
     */
    inline AwsEc2InstanceDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The instance type of the instance. </p>
     */
    inline AwsEc2InstanceDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The instance type of the instance. </p>
     */
    inline AwsEc2InstanceDetails& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV4Addresses() const{ return m_ipV4Addresses; }

    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline bool IpV4AddressesHasBeenSet() const { return m_ipV4AddressesHasBeenSet; }

    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline void SetIpV4Addresses(const Aws::Vector<Aws::String>& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = value; }

    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline void SetIpV4Addresses(Aws::Vector<Aws::String>&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = std::move(value); }

    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithIpV4Addresses(const Aws::Vector<Aws::String>& value) { SetIpV4Addresses(value); return *this;}

    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithIpV4Addresses(Aws::Vector<Aws::String>&& value) { SetIpV4Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& AddIpV4Addresses(const Aws::String& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& AddIpV4Addresses(Aws::String&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& AddIpV4Addresses(const char* value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(value); return *this; }


    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV6Addresses() const{ return m_ipV6Addresses; }

    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }

    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline void SetIpV6Addresses(const Aws::Vector<Aws::String>& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = value; }

    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline void SetIpV6Addresses(Aws::Vector<Aws::String>&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithIpV6Addresses(const Aws::Vector<Aws::String>& value) { SetIpV6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithIpV6Addresses(Aws::Vector<Aws::String>&& value) { SetIpV6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& AddIpV6Addresses(const Aws::String& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& AddIpV6Addresses(Aws::String&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& AddIpV6Addresses(const char* value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(value); return *this; }


    /**
     * <p>The key name associated with the instance.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The key name associated with the instance.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The key name associated with the instance.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The key name associated with the instance.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The key name associated with the instance.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The key name associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The key name associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The key name associated with the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline const Aws::String& GetIamInstanceProfileArn() const{ return m_iamInstanceProfileArn; }

    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline bool IamInstanceProfileArnHasBeenSet() const { return m_iamInstanceProfileArnHasBeenSet; }

    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline void SetIamInstanceProfileArn(const Aws::String& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = value; }

    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline void SetIamInstanceProfileArn(Aws::String&& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = std::move(value); }

    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline void SetIamInstanceProfileArn(const char* value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn.assign(value); }

    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithIamInstanceProfileArn(const Aws::String& value) { SetIamInstanceProfileArn(value); return *this;}

    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithIamInstanceProfileArn(Aws::String&& value) { SetIamInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline AwsEc2InstanceDetails& WithIamInstanceProfileArn(const char* value) { SetIamInstanceProfileArn(value); return *this;}


    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline AwsEc2InstanceDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline AwsEc2InstanceDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline AwsEc2InstanceDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline AwsEc2InstanceDetails& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline AwsEc2InstanceDetails& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline AwsEc2InstanceDetails& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The date/time the instance was launched.</p>
     */
    inline const Aws::String& GetLaunchedAt() const{ return m_launchedAt; }

    /**
     * <p>The date/time the instance was launched.</p>
     */
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }

    /**
     * <p>The date/time the instance was launched.</p>
     */
    inline void SetLaunchedAt(const Aws::String& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }

    /**
     * <p>The date/time the instance was launched.</p>
     */
    inline void SetLaunchedAt(Aws::String&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }

    /**
     * <p>The date/time the instance was launched.</p>
     */
    inline void SetLaunchedAt(const char* value) { m_launchedAtHasBeenSet = true; m_launchedAt.assign(value); }

    /**
     * <p>The date/time the instance was launched.</p>
     */
    inline AwsEc2InstanceDetails& WithLaunchedAt(const Aws::String& value) { SetLaunchedAt(value); return *this;}

    /**
     * <p>The date/time the instance was launched.</p>
     */
    inline AwsEc2InstanceDetails& WithLaunchedAt(Aws::String&& value) { SetLaunchedAt(std::move(value)); return *this;}

    /**
     * <p>The date/time the instance was launched.</p>
     */
    inline AwsEc2InstanceDetails& WithLaunchedAt(const char* value) { SetLaunchedAt(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::Vector<Aws::String> m_ipV4Addresses;
    bool m_ipV4AddressesHasBeenSet;

    Aws::Vector<Aws::String> m_ipV6Addresses;
    bool m_ipV6AddressesHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;

    Aws::String m_iamInstanceProfileArn;
    bool m_iamInstanceProfileArnHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_launchedAt;
    bool m_launchedAtHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
