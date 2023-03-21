/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AnalysisComponent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/RuleOption.h>
#include <aws/ec2/model/RuleGroupTypePair.h>
#include <aws/ec2/model/RuleGroupRuleOptionsPair.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an additional detail for a path analysis. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/vpc/latest/reachability/additional-detail-codes.html">Reachability
   * Analyzer additional detail codes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AdditionalDetail">AWS
   * API Reference</a></p>
   */
  class AdditionalDetail
  {
  public:
    AWS_EC2_API AdditionalDetail();
    AWS_EC2_API AdditionalDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AdditionalDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The additional detail code.</p>
     */
    inline const Aws::String& GetAdditionalDetailType() const{ return m_additionalDetailType; }

    /**
     * <p>The additional detail code.</p>
     */
    inline bool AdditionalDetailTypeHasBeenSet() const { return m_additionalDetailTypeHasBeenSet; }

    /**
     * <p>The additional detail code.</p>
     */
    inline void SetAdditionalDetailType(const Aws::String& value) { m_additionalDetailTypeHasBeenSet = true; m_additionalDetailType = value; }

    /**
     * <p>The additional detail code.</p>
     */
    inline void SetAdditionalDetailType(Aws::String&& value) { m_additionalDetailTypeHasBeenSet = true; m_additionalDetailType = std::move(value); }

    /**
     * <p>The additional detail code.</p>
     */
    inline void SetAdditionalDetailType(const char* value) { m_additionalDetailTypeHasBeenSet = true; m_additionalDetailType.assign(value); }

    /**
     * <p>The additional detail code.</p>
     */
    inline AdditionalDetail& WithAdditionalDetailType(const Aws::String& value) { SetAdditionalDetailType(value); return *this;}

    /**
     * <p>The additional detail code.</p>
     */
    inline AdditionalDetail& WithAdditionalDetailType(Aws::String&& value) { SetAdditionalDetailType(std::move(value)); return *this;}

    /**
     * <p>The additional detail code.</p>
     */
    inline AdditionalDetail& WithAdditionalDetailType(const char* value) { SetAdditionalDetailType(value); return *this;}


    /**
     * <p>The path component.</p>
     */
    inline const AnalysisComponent& GetComponent() const{ return m_component; }

    /**
     * <p>The path component.</p>
     */
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }

    /**
     * <p>The path component.</p>
     */
    inline void SetComponent(const AnalysisComponent& value) { m_componentHasBeenSet = true; m_component = value; }

    /**
     * <p>The path component.</p>
     */
    inline void SetComponent(AnalysisComponent&& value) { m_componentHasBeenSet = true; m_component = std::move(value); }

    /**
     * <p>The path component.</p>
     */
    inline AdditionalDetail& WithComponent(const AnalysisComponent& value) { SetComponent(value); return *this;}

    /**
     * <p>The path component.</p>
     */
    inline AdditionalDetail& WithComponent(AnalysisComponent&& value) { SetComponent(std::move(value)); return *this;}


    /**
     * <p>The VPC endpoint service.</p>
     */
    inline const AnalysisComponent& GetVpcEndpointService() const{ return m_vpcEndpointService; }

    /**
     * <p>The VPC endpoint service.</p>
     */
    inline bool VpcEndpointServiceHasBeenSet() const { return m_vpcEndpointServiceHasBeenSet; }

    /**
     * <p>The VPC endpoint service.</p>
     */
    inline void SetVpcEndpointService(const AnalysisComponent& value) { m_vpcEndpointServiceHasBeenSet = true; m_vpcEndpointService = value; }

    /**
     * <p>The VPC endpoint service.</p>
     */
    inline void SetVpcEndpointService(AnalysisComponent&& value) { m_vpcEndpointServiceHasBeenSet = true; m_vpcEndpointService = std::move(value); }

    /**
     * <p>The VPC endpoint service.</p>
     */
    inline AdditionalDetail& WithVpcEndpointService(const AnalysisComponent& value) { SetVpcEndpointService(value); return *this;}

    /**
     * <p>The VPC endpoint service.</p>
     */
    inline AdditionalDetail& WithVpcEndpointService(AnalysisComponent&& value) { SetVpcEndpointService(std::move(value)); return *this;}


    /**
     * <p>The rule options.</p>
     */
    inline const Aws::Vector<RuleOption>& GetRuleOptions() const{ return m_ruleOptions; }

    /**
     * <p>The rule options.</p>
     */
    inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }

    /**
     * <p>The rule options.</p>
     */
    inline void SetRuleOptions(const Aws::Vector<RuleOption>& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = value; }

    /**
     * <p>The rule options.</p>
     */
    inline void SetRuleOptions(Aws::Vector<RuleOption>&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = std::move(value); }

    /**
     * <p>The rule options.</p>
     */
    inline AdditionalDetail& WithRuleOptions(const Aws::Vector<RuleOption>& value) { SetRuleOptions(value); return *this;}

    /**
     * <p>The rule options.</p>
     */
    inline AdditionalDetail& WithRuleOptions(Aws::Vector<RuleOption>&& value) { SetRuleOptions(std::move(value)); return *this;}

    /**
     * <p>The rule options.</p>
     */
    inline AdditionalDetail& AddRuleOptions(const RuleOption& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(value); return *this; }

    /**
     * <p>The rule options.</p>
     */
    inline AdditionalDetail& AddRuleOptions(RuleOption&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The rule group type.</p>
     */
    inline const Aws::Vector<RuleGroupTypePair>& GetRuleGroupTypePairs() const{ return m_ruleGroupTypePairs; }

    /**
     * <p>The rule group type.</p>
     */
    inline bool RuleGroupTypePairsHasBeenSet() const { return m_ruleGroupTypePairsHasBeenSet; }

    /**
     * <p>The rule group type.</p>
     */
    inline void SetRuleGroupTypePairs(const Aws::Vector<RuleGroupTypePair>& value) { m_ruleGroupTypePairsHasBeenSet = true; m_ruleGroupTypePairs = value; }

    /**
     * <p>The rule group type.</p>
     */
    inline void SetRuleGroupTypePairs(Aws::Vector<RuleGroupTypePair>&& value) { m_ruleGroupTypePairsHasBeenSet = true; m_ruleGroupTypePairs = std::move(value); }

    /**
     * <p>The rule group type.</p>
     */
    inline AdditionalDetail& WithRuleGroupTypePairs(const Aws::Vector<RuleGroupTypePair>& value) { SetRuleGroupTypePairs(value); return *this;}

    /**
     * <p>The rule group type.</p>
     */
    inline AdditionalDetail& WithRuleGroupTypePairs(Aws::Vector<RuleGroupTypePair>&& value) { SetRuleGroupTypePairs(std::move(value)); return *this;}

    /**
     * <p>The rule group type.</p>
     */
    inline AdditionalDetail& AddRuleGroupTypePairs(const RuleGroupTypePair& value) { m_ruleGroupTypePairsHasBeenSet = true; m_ruleGroupTypePairs.push_back(value); return *this; }

    /**
     * <p>The rule group type.</p>
     */
    inline AdditionalDetail& AddRuleGroupTypePairs(RuleGroupTypePair&& value) { m_ruleGroupTypePairsHasBeenSet = true; m_ruleGroupTypePairs.push_back(std::move(value)); return *this; }


    /**
     * <p>The rule options.</p>
     */
    inline const Aws::Vector<RuleGroupRuleOptionsPair>& GetRuleGroupRuleOptionsPairs() const{ return m_ruleGroupRuleOptionsPairs; }

    /**
     * <p>The rule options.</p>
     */
    inline bool RuleGroupRuleOptionsPairsHasBeenSet() const { return m_ruleGroupRuleOptionsPairsHasBeenSet; }

    /**
     * <p>The rule options.</p>
     */
    inline void SetRuleGroupRuleOptionsPairs(const Aws::Vector<RuleGroupRuleOptionsPair>& value) { m_ruleGroupRuleOptionsPairsHasBeenSet = true; m_ruleGroupRuleOptionsPairs = value; }

    /**
     * <p>The rule options.</p>
     */
    inline void SetRuleGroupRuleOptionsPairs(Aws::Vector<RuleGroupRuleOptionsPair>&& value) { m_ruleGroupRuleOptionsPairsHasBeenSet = true; m_ruleGroupRuleOptionsPairs = std::move(value); }

    /**
     * <p>The rule options.</p>
     */
    inline AdditionalDetail& WithRuleGroupRuleOptionsPairs(const Aws::Vector<RuleGroupRuleOptionsPair>& value) { SetRuleGroupRuleOptionsPairs(value); return *this;}

    /**
     * <p>The rule options.</p>
     */
    inline AdditionalDetail& WithRuleGroupRuleOptionsPairs(Aws::Vector<RuleGroupRuleOptionsPair>&& value) { SetRuleGroupRuleOptionsPairs(std::move(value)); return *this;}

    /**
     * <p>The rule options.</p>
     */
    inline AdditionalDetail& AddRuleGroupRuleOptionsPairs(const RuleGroupRuleOptionsPair& value) { m_ruleGroupRuleOptionsPairsHasBeenSet = true; m_ruleGroupRuleOptionsPairs.push_back(value); return *this; }

    /**
     * <p>The rule options.</p>
     */
    inline AdditionalDetail& AddRuleGroupRuleOptionsPairs(RuleGroupRuleOptionsPair&& value) { m_ruleGroupRuleOptionsPairsHasBeenSet = true; m_ruleGroupRuleOptionsPairs.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline AdditionalDetail& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline AdditionalDetail& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline AdditionalDetail& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The load balancers.</p>
     */
    inline const Aws::Vector<AnalysisComponent>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>The load balancers.</p>
     */
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }

    /**
     * <p>The load balancers.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<AnalysisComponent>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>The load balancers.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<AnalysisComponent>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }

    /**
     * <p>The load balancers.</p>
     */
    inline AdditionalDetail& WithLoadBalancers(const Aws::Vector<AnalysisComponent>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>The load balancers.</p>
     */
    inline AdditionalDetail& WithLoadBalancers(Aws::Vector<AnalysisComponent>&& value) { SetLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>The load balancers.</p>
     */
    inline AdditionalDetail& AddLoadBalancers(const AnalysisComponent& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>The load balancers.</p>
     */
    inline AdditionalDetail& AddLoadBalancers(AnalysisComponent&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_additionalDetailType;
    bool m_additionalDetailTypeHasBeenSet = false;

    AnalysisComponent m_component;
    bool m_componentHasBeenSet = false;

    AnalysisComponent m_vpcEndpointService;
    bool m_vpcEndpointServiceHasBeenSet = false;

    Aws::Vector<RuleOption> m_ruleOptions;
    bool m_ruleOptionsHasBeenSet = false;

    Aws::Vector<RuleGroupTypePair> m_ruleGroupTypePairs;
    bool m_ruleGroupTypePairsHasBeenSet = false;

    Aws::Vector<RuleGroupRuleOptionsPair> m_ruleGroupRuleOptionsPairs;
    bool m_ruleGroupRuleOptionsPairsHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::Vector<AnalysisComponent> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
