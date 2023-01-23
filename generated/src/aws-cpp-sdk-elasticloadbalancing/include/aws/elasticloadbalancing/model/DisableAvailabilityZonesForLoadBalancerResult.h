/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancing
{
namespace Model
{
  /**
   * <p>Contains the output for
   * DisableAvailabilityZonesForLoadBalancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/RemoveAvailabilityZonesOutput">AWS
   * API Reference</a></p>
   */
  class DisableAvailabilityZonesForLoadBalancerResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API DisableAvailabilityZonesForLoadBalancerResult();
    AWS_ELASTICLOADBALANCING_API DisableAvailabilityZonesForLoadBalancerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DisableAvailabilityZonesForLoadBalancerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The remaining Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The remaining Availability Zones for the load balancer.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZones = value; }

    /**
     * <p>The remaining Availability Zones for the load balancer.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZones = std::move(value); }

    /**
     * <p>The remaining Availability Zones for the load balancer.</p>
     */
    inline DisableAvailabilityZonesForLoadBalancerResult& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The remaining Availability Zones for the load balancer.</p>
     */
    inline DisableAvailabilityZonesForLoadBalancerResult& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The remaining Availability Zones for the load balancer.</p>
     */
    inline DisableAvailabilityZonesForLoadBalancerResult& AddAvailabilityZones(const Aws::String& value) { m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The remaining Availability Zones for the load balancer.</p>
     */
    inline DisableAvailabilityZonesForLoadBalancerResult& AddAvailabilityZones(Aws::String&& value) { m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The remaining Availability Zones for the load balancer.</p>
     */
    inline DisableAvailabilityZonesForLoadBalancerResult& AddAvailabilityZones(const char* value) { m_availabilityZones.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisableAvailabilityZonesForLoadBalancerResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisableAvailabilityZonesForLoadBalancerResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_availabilityZones;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
