/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

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
   * <p>The zone awareness configuration for an Amazon OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ZoneAwarenessConfig">AWS
   * API Reference</a></p>
   */
  class ZoneAwarenessConfig
  {
  public:
    AWS_OPENSEARCHSERVICE_API ZoneAwarenessConfig();
    AWS_OPENSEARCHSERVICE_API ZoneAwarenessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ZoneAwarenessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If you enabled multiple Availability Zones, this value is the number of zones
     * that you want the domain to use. Valid values are <code>2</code> and
     * <code>3</code>. If your domain is provisioned within a VPC, this value be equal
     * to number of subnets.</p>
     */
    inline int GetAvailabilityZoneCount() const{ return m_availabilityZoneCount; }

    /**
     * <p>If you enabled multiple Availability Zones, this value is the number of zones
     * that you want the domain to use. Valid values are <code>2</code> and
     * <code>3</code>. If your domain is provisioned within a VPC, this value be equal
     * to number of subnets.</p>
     */
    inline bool AvailabilityZoneCountHasBeenSet() const { return m_availabilityZoneCountHasBeenSet; }

    /**
     * <p>If you enabled multiple Availability Zones, this value is the number of zones
     * that you want the domain to use. Valid values are <code>2</code> and
     * <code>3</code>. If your domain is provisioned within a VPC, this value be equal
     * to number of subnets.</p>
     */
    inline void SetAvailabilityZoneCount(int value) { m_availabilityZoneCountHasBeenSet = true; m_availabilityZoneCount = value; }

    /**
     * <p>If you enabled multiple Availability Zones, this value is the number of zones
     * that you want the domain to use. Valid values are <code>2</code> and
     * <code>3</code>. If your domain is provisioned within a VPC, this value be equal
     * to number of subnets.</p>
     */
    inline ZoneAwarenessConfig& WithAvailabilityZoneCount(int value) { SetAvailabilityZoneCount(value); return *this;}

  private:

    int m_availabilityZoneCount;
    bool m_availabilityZoneCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
