/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/Rule.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class DescribeRulesResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeRulesResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the rules.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>Information about the rules.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rules = value; }

    /**
     * <p>Information about the rules.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rules = std::move(value); }

    /**
     * <p>Information about the rules.</p>
     */
    inline DescribeRulesResult& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Information about the rules.</p>
     */
    inline DescribeRulesResult& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>Information about the rules.</p>
     */
    inline DescribeRulesResult& AddRules(const Rule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>Information about the rules.</p>
     */
    inline DescribeRulesResult& AddRules(Rule&& value) { m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeRulesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeRulesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeRulesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeRulesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeRulesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Rule> m_rules;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
