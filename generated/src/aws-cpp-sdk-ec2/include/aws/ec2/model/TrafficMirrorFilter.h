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
    AWS_EC2_API TrafficMirrorFilter();
    AWS_EC2_API TrafficMirrorFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrafficMirrorFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }
    inline TrafficMirrorFilter& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}
    inline TrafficMirrorFilter& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}
    inline TrafficMirrorFilter& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRule>& GetIngressFilterRules() const{ return m_ingressFilterRules; }
    inline bool IngressFilterRulesHasBeenSet() const { return m_ingressFilterRulesHasBeenSet; }
    inline void SetIngressFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules = value; }
    inline void SetIngressFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules = std::move(value); }
    inline TrafficMirrorFilter& WithIngressFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { SetIngressFilterRules(value); return *this;}
    inline TrafficMirrorFilter& WithIngressFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { SetIngressFilterRules(std::move(value)); return *this;}
    inline TrafficMirrorFilter& AddIngressFilterRules(const TrafficMirrorFilterRule& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules.push_back(value); return *this; }
    inline TrafficMirrorFilter& AddIngressFilterRules(TrafficMirrorFilterRule&& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRule>& GetEgressFilterRules() const{ return m_egressFilterRules; }
    inline bool EgressFilterRulesHasBeenSet() const { return m_egressFilterRulesHasBeenSet; }
    inline void SetEgressFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules = value; }
    inline void SetEgressFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules = std::move(value); }
    inline TrafficMirrorFilter& WithEgressFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { SetEgressFilterRules(value); return *this;}
    inline TrafficMirrorFilter& WithEgressFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { SetEgressFilterRules(std::move(value)); return *this;}
    inline TrafficMirrorFilter& AddEgressFilterRules(const TrafficMirrorFilterRule& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules.push_back(value); return *this; }
    inline TrafficMirrorFilter& AddEgressFilterRules(TrafficMirrorFilterRule&& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetNetworkServices() const{ return m_networkServices; }
    inline bool NetworkServicesHasBeenSet() const { return m_networkServicesHasBeenSet; }
    inline void SetNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { m_networkServicesHasBeenSet = true; m_networkServices = value; }
    inline void SetNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { m_networkServicesHasBeenSet = true; m_networkServices = std::move(value); }
    inline TrafficMirrorFilter& WithNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { SetNetworkServices(value); return *this;}
    inline TrafficMirrorFilter& WithNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { SetNetworkServices(std::move(value)); return *this;}
    inline TrafficMirrorFilter& AddNetworkServices(const TrafficMirrorNetworkService& value) { m_networkServicesHasBeenSet = true; m_networkServices.push_back(value); return *this; }
    inline TrafficMirrorFilter& AddNetworkServices(TrafficMirrorNetworkService&& value) { m_networkServicesHasBeenSet = true; m_networkServices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TrafficMirrorFilter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TrafficMirrorFilter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TrafficMirrorFilter& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TrafficMirrorFilter& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TrafficMirrorFilter& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TrafficMirrorFilter& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TrafficMirrorFilter& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
