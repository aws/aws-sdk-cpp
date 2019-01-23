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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API DescribeCompanyNetworkConfigurationResult
  {
  public:
    DescribeCompanyNetworkConfigurationResult();
    DescribeCompanyNetworkConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCompanyNetworkConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The VPC with connectivity to associated websites.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC with connectivity to associated websites.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The VPC with connectivity to associated websites.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The VPC with connectivity to associated websites.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The VPC with connectivity to associated websites.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC with connectivity to associated websites.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC with connectivity to associated websites.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The subnets used for X-ENI connections from Amazon WorkLink rendering
     * containers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The subnets used for X-ENI connections from Amazon WorkLink rendering
     * containers.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }

    /**
     * <p>The subnets used for X-ENI connections from Amazon WorkLink rendering
     * containers.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }

    /**
     * <p>The subnets used for X-ENI connections from Amazon WorkLink rendering
     * containers.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The subnets used for X-ENI connections from Amazon WorkLink rendering
     * containers.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The subnets used for X-ENI connections from Amazon WorkLink rendering
     * containers.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The subnets used for X-ENI connections from Amazon WorkLink rendering
     * containers.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets used for X-ENI connections from Amazon WorkLink rendering
     * containers.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The security groups associated with access to the provided subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security groups associated with access to the provided subnets.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }

    /**
     * <p>The security groups associated with access to the provided subnets.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }

    /**
     * <p>The security groups associated with access to the provided subnets.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security groups associated with access to the provided subnets.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security groups associated with access to the provided subnets.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security groups associated with access to the provided subnets.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups associated with access to the provided subnets.</p>
     */
    inline DescribeCompanyNetworkConfigurationResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_vpcId;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::Vector<Aws::String> m_securityGroupIds;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
