/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>The VPC configuration provisioned for the host.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/VpcConfiguration">AWS
   * API Reference</a></p>
   */
  class VpcConfiguration
  {
  public:
    AWS_CODESTARCONNECTIONS_API VpcConfiguration();
    AWS_CODESTARCONNECTIONS_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon VPC connected to the infrastructure where your provider
     * type is installed.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the Amazon VPC connected to the infrastructure where your provider
     * type is installed.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon VPC connected to the infrastructure where your provider
     * type is installed.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the Amazon VPC connected to the infrastructure where your provider
     * type is installed.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the Amazon VPC connected to the infrastructure where your provider
     * type is installed.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the Amazon VPC connected to the infrastructure where your provider
     * type is installed.</p>
     */
    inline VpcConfiguration& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the Amazon VPC connected to the infrastructure where your provider
     * type is installed.</p>
     */
    inline VpcConfiguration& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon VPC connected to the infrastructure where your provider
     * type is installed.</p>
     */
    inline VpcConfiguration& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the subnet or subnets associated with the Amazon VPC connected to
     * the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the security group or security groups associated with the Amazon
     * VPC connected to the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The value of the Transport Layer Security (TLS) certificate associated with
     * the infrastructure where your provider type is installed.</p>
     */
    inline const Aws::String& GetTlsCertificate() const{ return m_tlsCertificate; }

    /**
     * <p>The value of the Transport Layer Security (TLS) certificate associated with
     * the infrastructure where your provider type is installed.</p>
     */
    inline bool TlsCertificateHasBeenSet() const { return m_tlsCertificateHasBeenSet; }

    /**
     * <p>The value of the Transport Layer Security (TLS) certificate associated with
     * the infrastructure where your provider type is installed.</p>
     */
    inline void SetTlsCertificate(const Aws::String& value) { m_tlsCertificateHasBeenSet = true; m_tlsCertificate = value; }

    /**
     * <p>The value of the Transport Layer Security (TLS) certificate associated with
     * the infrastructure where your provider type is installed.</p>
     */
    inline void SetTlsCertificate(Aws::String&& value) { m_tlsCertificateHasBeenSet = true; m_tlsCertificate = std::move(value); }

    /**
     * <p>The value of the Transport Layer Security (TLS) certificate associated with
     * the infrastructure where your provider type is installed.</p>
     */
    inline void SetTlsCertificate(const char* value) { m_tlsCertificateHasBeenSet = true; m_tlsCertificate.assign(value); }

    /**
     * <p>The value of the Transport Layer Security (TLS) certificate associated with
     * the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& WithTlsCertificate(const Aws::String& value) { SetTlsCertificate(value); return *this;}

    /**
     * <p>The value of the Transport Layer Security (TLS) certificate associated with
     * the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& WithTlsCertificate(Aws::String&& value) { SetTlsCertificate(std::move(value)); return *this;}

    /**
     * <p>The value of the Transport Layer Security (TLS) certificate associated with
     * the infrastructure where your provider type is installed.</p>
     */
    inline VpcConfiguration& WithTlsCertificate(const char* value) { SetTlsCertificate(value); return *this;}

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_tlsCertificate;
    bool m_tlsCertificateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
