/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class SetRulePrioritiesResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API SetRulePrioritiesResult();
    AWS_ELASTICLOADBALANCINGV2_API SetRulePrioritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API SetRulePrioritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline SetRulePrioritiesResult& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Information about the rules.</p>
     */
    inline SetRulePrioritiesResult& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>Information about the rules.</p>
     */
    inline SetRulePrioritiesResult& AddRules(const Rule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>Information about the rules.</p>
     */
    inline SetRulePrioritiesResult& AddRules(Rule&& value) { m_rules.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SetRulePrioritiesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SetRulePrioritiesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Rule> m_rules;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
