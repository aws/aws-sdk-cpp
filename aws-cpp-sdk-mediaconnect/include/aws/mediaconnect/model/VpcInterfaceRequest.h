/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Desired VPC Interface for a Flow<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/VpcInterfaceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API VpcInterfaceRequest
  {
  public:
    VpcInterfaceRequest();
    VpcInterfaceRequest(Aws::Utils::Json::JsonView jsonValue);
    VpcInterfaceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the VPC Interface. This value must be unique within the current
     * flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the VPC Interface. This value must be unique within the current
     * flow.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the VPC Interface. This value must be unique within the current
     * flow.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the VPC Interface. This value must be unique within the current
     * flow.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the VPC Interface. This value must be unique within the current
     * flow.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the VPC Interface. This value must be unique within the current
     * flow.
     */
    inline VpcInterfaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the VPC Interface. This value must be unique within the current
     * flow.
     */
    inline VpcInterfaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the VPC Interface. This value must be unique within the current
     * flow.
     */
    inline VpcInterfaceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline VpcInterfaceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline VpcInterfaceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline VpcInterfaceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * Security Group IDs to be used on ENI.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterfaceRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterfaceRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterfaceRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterfaceRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * Security Group IDs to be used on ENI.
     */
    inline VpcInterfaceRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * Subnet must be in the AZ of the Flow
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline VpcInterfaceRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline VpcInterfaceRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * Subnet must be in the AZ of the Flow
     */
    inline VpcInterfaceRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
