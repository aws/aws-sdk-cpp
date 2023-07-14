﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/ElasticLoadBalancer.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeElasticLoadBalancers</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticLoadBalancersResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeElasticLoadBalancersResult
  {
  public:
    DescribeElasticLoadBalancersResult();
    DescribeElasticLoadBalancersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeElasticLoadBalancersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>ElasticLoadBalancer</code> objects that describe the
     * specified Elastic Load Balancing instances.</p>
     */
    inline const Aws::Vector<ElasticLoadBalancer>& GetElasticLoadBalancers() const{ return m_elasticLoadBalancers; }

    /**
     * <p>A list of <code>ElasticLoadBalancer</code> objects that describe the
     * specified Elastic Load Balancing instances.</p>
     */
    inline void SetElasticLoadBalancers(const Aws::Vector<ElasticLoadBalancer>& value) { m_elasticLoadBalancers = value; }

    /**
     * <p>A list of <code>ElasticLoadBalancer</code> objects that describe the
     * specified Elastic Load Balancing instances.</p>
     */
    inline void SetElasticLoadBalancers(Aws::Vector<ElasticLoadBalancer>&& value) { m_elasticLoadBalancers = std::move(value); }

    /**
     * <p>A list of <code>ElasticLoadBalancer</code> objects that describe the
     * specified Elastic Load Balancing instances.</p>
     */
    inline DescribeElasticLoadBalancersResult& WithElasticLoadBalancers(const Aws::Vector<ElasticLoadBalancer>& value) { SetElasticLoadBalancers(value); return *this;}

    /**
     * <p>A list of <code>ElasticLoadBalancer</code> objects that describe the
     * specified Elastic Load Balancing instances.</p>
     */
    inline DescribeElasticLoadBalancersResult& WithElasticLoadBalancers(Aws::Vector<ElasticLoadBalancer>&& value) { SetElasticLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ElasticLoadBalancer</code> objects that describe the
     * specified Elastic Load Balancing instances.</p>
     */
    inline DescribeElasticLoadBalancersResult& AddElasticLoadBalancers(const ElasticLoadBalancer& value) { m_elasticLoadBalancers.push_back(value); return *this; }

    /**
     * <p>A list of <code>ElasticLoadBalancer</code> objects that describe the
     * specified Elastic Load Balancing instances.</p>
     */
    inline DescribeElasticLoadBalancersResult& AddElasticLoadBalancers(ElasticLoadBalancer&& value) { m_elasticLoadBalancers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ElasticLoadBalancer> m_elasticLoadBalancers;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
