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
  class AWS_ELASTICSEARCHSERVICE_API ZoneAwarenessConfig
  {
  public:
    ZoneAwarenessConfig();
    ZoneAwarenessConfig(Aws::Utils::Json::JsonView jsonValue);
    ZoneAwarenessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_availabilityZoneCountHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
