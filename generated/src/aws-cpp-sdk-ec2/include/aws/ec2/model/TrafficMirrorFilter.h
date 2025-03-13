/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TrafficMirrorFilterRule.h>
#include <aws/ec2/model/TrafficMirrorNetworkService.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes the Traffic Mirror filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TrafficMirrorFilter">AWS
   * API Reference</a></p>
   */
  class TrafficMirrorFilter
  {
  public:
    AWS_EC2_API TrafficMirrorFilter() = default;
    AWS_EC2_API TrafficMirrorFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrafficMirrorFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const { return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    void SetTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::forward<TrafficMirrorFilterIdT>(value); }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    TrafficMirrorFilter& WithTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { SetTrafficMirrorFilterId(std::forward<TrafficMirrorFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRule>& GetIngressFilterRules() const { return m_ingressFilterRules; }
    inline bool IngressFilterRulesHasBeenSet() const { return m_ingressFilterRulesHasBeenSet; }
    template<typename IngressFilterRulesT = Aws::Vector<TrafficMirrorFilterRule>>
    void SetIngressFilterRules(IngressFilterRulesT&& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules = std::forward<IngressFilterRulesT>(value); }
    template<typename IngressFilterRulesT = Aws::Vector<TrafficMirrorFilterRule>>
    TrafficMirrorFilter& WithIngressFilterRules(IngressFilterRulesT&& value) { SetIngressFilterRules(std::forward<IngressFilterRulesT>(value)); return *this;}
    template<typename IngressFilterRulesT = TrafficMirrorFilterRule>
    TrafficMirrorFilter& AddIngressFilterRules(IngressFilterRulesT&& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules.emplace_back(std::forward<IngressFilterRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRule>& GetEgressFilterRules() const { return m_egressFilterRules; }
    inline bool EgressFilterRulesHasBeenSet() const { return m_egressFilterRulesHasBeenSet; }
    template<typename EgressFilterRulesT = Aws::Vector<TrafficMirrorFilterRule>>
    void SetEgressFilterRules(EgressFilterRulesT&& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules = std::forward<EgressFilterRulesT>(value); }
    template<typename EgressFilterRulesT = Aws::Vector<TrafficMirrorFilterRule>>
    TrafficMirrorFilter& WithEgressFilterRules(EgressFilterRulesT&& value) { SetEgressFilterRules(std::forward<EgressFilterRulesT>(value)); return *this;}
    template<typename EgressFilterRulesT = TrafficMirrorFilterRule>
    TrafficMirrorFilter& AddEgressFilterRules(EgressFilterRulesT&& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules.emplace_back(std::forward<EgressFilterRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetNetworkServices() const { return m_networkServices; }
    inline bool NetworkServicesHasBeenSet() const { return m_networkServicesHasBeenSet; }
    template<typename NetworkServicesT = Aws::Vector<TrafficMirrorNetworkService>>
    void SetNetworkServices(NetworkServicesT&& value) { m_networkServicesHasBeenSet = true; m_networkServices = std::forward<NetworkServicesT>(value); }
    template<typename NetworkServicesT = Aws::Vector<TrafficMirrorNetworkService>>
    TrafficMirrorFilter& WithNetworkServices(NetworkServicesT&& value) { SetNetworkServices(std::forward<NetworkServicesT>(value)); return *this;}
    inline TrafficMirrorFilter& AddNetworkServices(TrafficMirrorNetworkService value) { m_networkServicesHasBeenSet = true; m_networkServices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TrafficMirrorFilter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TrafficMirrorFilter& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TrafficMirrorFilter& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    Aws::Vector<TrafficMirrorFilterRule> m_ingressFilterRules;
    bool m_ingressFilterRulesHasBeenSet = false;

    Aws::Vector<TrafficMirrorFilterRule> m_egressFilterRules;
    bool m_egressFilterRulesHasBeenSet = false;

    Aws::Vector<TrafficMirrorNetworkService> m_networkServices;
    bool m_networkServicesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
