/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>

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
   * <p>Specifies the zone awareness configuration for the domain cluster, such as
   * the number of availability zones.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ZoneAwarenessConfig">AWS
   * API Reference</a></p>
   */
  class ZoneAwarenessConfig
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ZoneAwarenessConfig();
    AWS_ELASTICSEARCHSERVICE_API ZoneAwarenessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ZoneAwarenessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An integer value to indicate the number of availability zones for a domain
     * when zone awareness is enabled. This should be equal to number of subnets if VPC
     * endpoints is enabled</p>
     */
    inline int GetAvailabilityZoneCount() const{ return m_availabilityZoneCount; }

    /**
     * <p>An integer value to indicate the number of availability zones for a domain
     * when zone awareness is enabled. This should be equal to number of subnets if VPC
     * endpoints is enabled</p>
     */
    inline bool AvailabilityZoneCountHasBeenSet() const { return m_availabilityZoneCountHasBeenSet; }

    /**
     * <p>An integer value to indicate the number of availability zones for a domain
     * when zone awareness is enabled. This should be equal to number of subnets if VPC
     * endpoints is enabled</p>
     */
    inline void SetAvailabilityZoneCount(int value) { m_availabilityZoneCountHasBeenSet = true; m_availabilityZoneCount = value; }

    /**
     * <p>An integer value to indicate the number of availability zones for a domain
     * when zone awareness is enabled. This should be equal to number of subnets if VPC
     * endpoints is enabled</p>
     */
    inline ZoneAwarenessConfig& WithAvailabilityZoneCount(int value) { SetAvailabilityZoneCount(value); return *this;}

  private:

    int m_availabilityZoneCount;
    bool m_availabilityZoneCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
