/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Options to specify the subnets and security groups for an Amazon OpenSearch
   * Service VPC endpoint. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
   * your Amazon OpenSearch Service domains using a VPC</a>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/VPCOptions">AWS
   * API Reference</a></p>
   */
  class VPCOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API VPCOptions();
    AWS_OPENSEARCHSERVICE_API VPCOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API VPCOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline VPCOptions& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline VPCOptions& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline VPCOptions& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline VPCOptions& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs associated with the VPC endpoints for the domain. If
     * your domain uses multiple Availability Zones, you need to provide two subnet
     * IDs, one per zone. Otherwise, provide only one.</p>
     */
    inline VPCOptions& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline VPCOptions& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline VPCOptions& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline VPCOptions& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline VPCOptions& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of security group IDs associated with the VPC endpoints for the
     * domain. If you do not provide a security group ID, OpenSearch Service uses the
     * default security group for the VPC.</p>
     */
    inline VPCOptions& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
