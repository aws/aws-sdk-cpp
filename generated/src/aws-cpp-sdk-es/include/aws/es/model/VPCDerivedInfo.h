/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Options to specify the subnets and security groups for VPC endpoint. For more
   * information, see <a
   * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
   * target="_blank"> VPC Endpoints for Amazon Elasticsearch Service
   * Domains</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/VPCDerivedInfo">AWS
   * API Reference</a></p>
   */
  class VPCDerivedInfo
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API VPCDerivedInfo();
    AWS_ELASTICSEARCHSERVICE_API VPCDerivedInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API VPCDerivedInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC Id for the Elasticsearch domain. Exists only if the domain was
     * created with VPCOptions.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }

    /**
     * <p>The VPC Id for the Elasticsearch domain. Exists only if the domain was
     * created with VPCOptions.</p>
     */
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }

    /**
     * <p>The VPC Id for the Elasticsearch domain. Exists only if the domain was
     * created with VPCOptions.</p>
     */
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }

    /**
     * <p>The VPC Id for the Elasticsearch domain. Exists only if the domain was
     * created with VPCOptions.</p>
     */
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }

    /**
     * <p>The VPC Id for the Elasticsearch domain. Exists only if the domain was
     * created with VPCOptions.</p>
     */
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }

    /**
     * <p>The VPC Id for the Elasticsearch domain. Exists only if the domain was
     * created with VPCOptions.</p>
     */
    inline VPCDerivedInfo& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}

    /**
     * <p>The VPC Id for the Elasticsearch domain. Exists only if the domain was
     * created with VPCOptions.</p>
     */
    inline VPCDerivedInfo& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}

    /**
     * <p>The VPC Id for the Elasticsearch domain. Exists only if the domain was
     * created with VPCOptions.</p>
     */
    inline VPCDerivedInfo& WithVPCId(const char* value) { SetVPCId(value); return *this;}


    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the subnets for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline VPCDerivedInfo& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline VPCDerivedInfo& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline VPCDerivedInfo& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline VPCDerivedInfo& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The availability zones for the Elasticsearch domain. Exists only if the
     * domain was created with VPCOptions.</p>
     */
    inline VPCDerivedInfo& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the security groups for VPC endpoint.</p>
     */
    inline VPCDerivedInfo& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
