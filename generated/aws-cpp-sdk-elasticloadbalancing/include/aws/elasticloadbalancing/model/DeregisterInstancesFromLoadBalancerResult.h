﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/Instance.h>
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
   * <p>Contains the output of DeregisterInstancesFromLoadBalancer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeregisterEndPointsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API DeregisterInstancesFromLoadBalancerResult
  {
  public:
    DeregisterInstancesFromLoadBalancerResult();
    DeregisterInstancesFromLoadBalancerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeregisterInstancesFromLoadBalancerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The remaining instances registered with the load balancer.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>The remaining instances registered with the load balancer.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instances = value; }

    /**
     * <p>The remaining instances registered with the load balancer.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instances = std::move(value); }

    /**
     * <p>The remaining instances registered with the load balancer.</p>
     */
    inline DeregisterInstancesFromLoadBalancerResult& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>The remaining instances registered with the load balancer.</p>
     */
    inline DeregisterInstancesFromLoadBalancerResult& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>The remaining instances registered with the load balancer.</p>
     */
    inline DeregisterInstancesFromLoadBalancerResult& AddInstances(const Instance& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>The remaining instances registered with the load balancer.</p>
     */
    inline DeregisterInstancesFromLoadBalancerResult& AddInstances(Instance&& value) { m_instances.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeregisterInstancesFromLoadBalancerResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeregisterInstancesFromLoadBalancerResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Instance> m_instances;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
