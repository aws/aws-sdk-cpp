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
  class AWS_EC2_API TrafficMirrorFilter
  {
  public:
    TrafficMirrorFilter();
    TrafficMirrorFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficMirrorFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}


    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRule>& GetIngressFilterRules() const{ return m_ingressFilterRules; }

    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline bool IngressFilterRulesHasBeenSet() const { return m_ingressFilterRulesHasBeenSet; }

    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline void SetIngressFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules = value; }

    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline void SetIngressFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules = std::move(value); }

    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithIngressFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { SetIngressFilterRules(value); return *this;}

    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithIngressFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { SetIngressFilterRules(std::move(value)); return *this;}

    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline TrafficMirrorFilter& AddIngressFilterRules(const TrafficMirrorFilterRule& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules.push_back(value); return *this; }

    /**
     * <p>Information about the ingress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline TrafficMirrorFilter& AddIngressFilterRules(TrafficMirrorFilterRule&& value) { m_ingressFilterRulesHasBeenSet = true; m_ingressFilterRules.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRule>& GetEgressFilterRules() const{ return m_egressFilterRules; }

    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline bool EgressFilterRulesHasBeenSet() const { return m_egressFilterRulesHasBeenSet; }

    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline void SetEgressFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules = value; }

    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline void SetEgressFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules = std::move(value); }

    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithEgressFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { SetEgressFilterRules(value); return *this;}

    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithEgressFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { SetEgressFilterRules(std::move(value)); return *this;}

    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline TrafficMirrorFilter& AddEgressFilterRules(const TrafficMirrorFilterRule& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules.push_back(value); return *this; }

    /**
     * <p>Information about the egress rules that are associated with the Traffic
     * Mirror filter.</p>
     */
    inline TrafficMirrorFilter& AddEgressFilterRules(TrafficMirrorFilterRule&& value) { m_egressFilterRulesHasBeenSet = true; m_egressFilterRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline const Aws::Vector<TrafficMirrorNetworkService>& GetNetworkServices() const{ return m_networkServices; }

    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline bool NetworkServicesHasBeenSet() const { return m_networkServicesHasBeenSet; }

    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline void SetNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { m_networkServicesHasBeenSet = true; m_networkServices = value; }

    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline void SetNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { m_networkServicesHasBeenSet = true; m_networkServices = std::move(value); }

    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline TrafficMirrorFilter& WithNetworkServices(const Aws::Vector<TrafficMirrorNetworkService>& value) { SetNetworkServices(value); return *this;}

    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline TrafficMirrorFilter& WithNetworkServices(Aws::Vector<TrafficMirrorNetworkService>&& value) { SetNetworkServices(std::move(value)); return *this;}

    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline TrafficMirrorFilter& AddNetworkServices(const TrafficMirrorNetworkService& value) { m_networkServicesHasBeenSet = true; m_networkServices.push_back(value); return *this; }

    /**
     * <p>The network service traffic that is associated with the Traffic Mirror
     * filter.</p>
     */
    inline TrafficMirrorFilter& AddNetworkServices(TrafficMirrorNetworkService&& value) { m_networkServicesHasBeenSet = true; m_networkServices.push_back(std::move(value)); return *this; }


    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorFilter& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet;

    Aws::Vector<TrafficMirrorFilterRule> m_ingressFilterRules;
    bool m_ingressFilterRulesHasBeenSet;

    Aws::Vector<TrafficMirrorFilterRule> m_egressFilterRules;
    bool m_egressFilterRulesHasBeenSet;

    Aws::Vector<TrafficMirrorNetworkService> m_networkServices;
    bool m_networkServicesHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
