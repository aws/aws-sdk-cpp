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
    AWS_EC2_API AdditionalDetail() = default;
    AWS_EC2_API AdditionalDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AdditionalDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The additional detail code.</p>
     */
    inline const Aws::String& GetAdditionalDetailType() const { return m_additionalDetailType; }
    inline bool AdditionalDetailTypeHasBeenSet() const { return m_additionalDetailTypeHasBeenSet; }
    template<typename AdditionalDetailTypeT = Aws::String>
    void SetAdditionalDetailType(AdditionalDetailTypeT&& value) { m_additionalDetailTypeHasBeenSet = true; m_additionalDetailType = std::forward<AdditionalDetailTypeT>(value); }
    template<typename AdditionalDetailTypeT = Aws::String>
    AdditionalDetail& WithAdditionalDetailType(AdditionalDetailTypeT&& value) { SetAdditionalDetailType(std::forward<AdditionalDetailTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path component.</p>
     */
    inline const AnalysisComponent& GetComponent() const { return m_component; }
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
    template<typename ComponentT = AnalysisComponent>
    void SetComponent(ComponentT&& value) { m_componentHasBeenSet = true; m_component = std::forward<ComponentT>(value); }
    template<typename ComponentT = AnalysisComponent>
    AdditionalDetail& WithComponent(ComponentT&& value) { SetComponent(std::forward<ComponentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint service.</p>
     */
    inline const AnalysisComponent& GetVpcEndpointService() const { return m_vpcEndpointService; }
    inline bool VpcEndpointServiceHasBeenSet() const { return m_vpcEndpointServiceHasBeenSet; }
    template<typename VpcEndpointServiceT = AnalysisComponent>
    void SetVpcEndpointService(VpcEndpointServiceT&& value) { m_vpcEndpointServiceHasBeenSet = true; m_vpcEndpointService = std::forward<VpcEndpointServiceT>(value); }
    template<typename VpcEndpointServiceT = AnalysisComponent>
    AdditionalDetail& WithVpcEndpointService(VpcEndpointServiceT&& value) { SetVpcEndpointService(std::forward<VpcEndpointServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule options.</p>
     */
    inline const Aws::Vector<RuleOption>& GetRuleOptions() const { return m_ruleOptions; }
    inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }
    template<typename RuleOptionsT = Aws::Vector<RuleOption>>
    void SetRuleOptions(RuleOptionsT&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = std::forward<RuleOptionsT>(value); }
    template<typename RuleOptionsT = Aws::Vector<RuleOption>>
    AdditionalDetail& WithRuleOptions(RuleOptionsT&& value) { SetRuleOptions(std::forward<RuleOptionsT>(value)); return *this;}
    template<typename RuleOptionsT = RuleOption>
    AdditionalDetail& AddRuleOptions(RuleOptionsT&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.emplace_back(std::forward<RuleOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rule group type.</p>
     */
    inline const Aws::Vector<RuleGroupTypePair>& GetRuleGroupTypePairs() const { return m_ruleGroupTypePairs; }
    inline bool RuleGroupTypePairsHasBeenSet() const { return m_ruleGroupTypePairsHasBeenSet; }
    template<typename RuleGroupTypePairsT = Aws::Vector<RuleGroupTypePair>>
    void SetRuleGroupTypePairs(RuleGroupTypePairsT&& value) { m_ruleGroupTypePairsHasBeenSet = true; m_ruleGroupTypePairs = std::forward<RuleGroupTypePairsT>(value); }
    template<typename RuleGroupTypePairsT = Aws::Vector<RuleGroupTypePair>>
    AdditionalDetail& WithRuleGroupTypePairs(RuleGroupTypePairsT&& value) { SetRuleGroupTypePairs(std::forward<RuleGroupTypePairsT>(value)); return *this;}
    template<typename RuleGroupTypePairsT = RuleGroupTypePair>
    AdditionalDetail& AddRuleGroupTypePairs(RuleGroupTypePairsT&& value) { m_ruleGroupTypePairsHasBeenSet = true; m_ruleGroupTypePairs.emplace_back(std::forward<RuleGroupTypePairsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rule options.</p>
     */
    inline const Aws::Vector<RuleGroupRuleOptionsPair>& GetRuleGroupRuleOptionsPairs() const { return m_ruleGroupRuleOptionsPairs; }
    inline bool RuleGroupRuleOptionsPairsHasBeenSet() const { return m_ruleGroupRuleOptionsPairsHasBeenSet; }
    template<typename RuleGroupRuleOptionsPairsT = Aws::Vector<RuleGroupRuleOptionsPair>>
    void SetRuleGroupRuleOptionsPairs(RuleGroupRuleOptionsPairsT&& value) { m_ruleGroupRuleOptionsPairsHasBeenSet = true; m_ruleGroupRuleOptionsPairs = std::forward<RuleGroupRuleOptionsPairsT>(value); }
    template<typename RuleGroupRuleOptionsPairsT = Aws::Vector<RuleGroupRuleOptionsPair>>
    AdditionalDetail& WithRuleGroupRuleOptionsPairs(RuleGroupRuleOptionsPairsT&& value) { SetRuleGroupRuleOptionsPairs(std::forward<RuleGroupRuleOptionsPairsT>(value)); return *this;}
    template<typename RuleGroupRuleOptionsPairsT = RuleGroupRuleOptionsPair>
    AdditionalDetail& AddRuleGroupRuleOptionsPairs(RuleGroupRuleOptionsPairsT&& value) { m_ruleGroupRuleOptionsPairsHasBeenSet = true; m_ruleGroupRuleOptionsPairs.emplace_back(std::forward<RuleGroupRuleOptionsPairsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    AdditionalDetail& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load balancers.</p>
     */
    inline const Aws::Vector<AnalysisComponent>& GetLoadBalancers() const { return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    template<typename LoadBalancersT = Aws::Vector<AnalysisComponent>>
    void SetLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::forward<LoadBalancersT>(value); }
    template<typename LoadBalancersT = Aws::Vector<AnalysisComponent>>
    AdditionalDetail& WithLoadBalancers(LoadBalancersT&& value) { SetLoadBalancers(std::forward<LoadBalancersT>(value)); return *this;}
    template<typename LoadBalancersT = AnalysisComponent>
    AdditionalDetail& AddLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.emplace_back(std::forward<LoadBalancersT>(value)); return *this; }
    ///@}
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
