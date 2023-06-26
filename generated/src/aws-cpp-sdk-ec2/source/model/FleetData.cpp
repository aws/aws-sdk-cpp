/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetData.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

FleetData::FleetData() : 
    m_activityStatus(FleetActivityStatus::NOT_SET),
    m_activityStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_fleetState(FleetStateCode::NOT_SET),
    m_fleetStateHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_excessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
    m_fulfilledCapacity(0.0),
    m_fulfilledCapacityHasBeenSet(false),
    m_fulfilledOnDemandCapacity(0.0),
    m_fulfilledOnDemandCapacityHasBeenSet(false),
    m_launchTemplateConfigsHasBeenSet(false),
    m_targetCapacitySpecificationHasBeenSet(false),
    m_terminateInstancesWithExpiration(false),
    m_terminateInstancesWithExpirationHasBeenSet(false),
    m_type(FleetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_replaceUnhealthyInstances(false),
    m_replaceUnhealthyInstancesHasBeenSet(false),
    m_spotOptionsHasBeenSet(false),
    m_onDemandOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

FleetData::FleetData(const XmlNode& xmlNode) : 
    m_activityStatus(FleetActivityStatus::NOT_SET),
    m_activityStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_fleetState(FleetStateCode::NOT_SET),
    m_fleetStateHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_excessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
    m_fulfilledCapacity(0.0),
    m_fulfilledCapacityHasBeenSet(false),
    m_fulfilledOnDemandCapacity(0.0),
    m_fulfilledOnDemandCapacityHasBeenSet(false),
    m_launchTemplateConfigsHasBeenSet(false),
    m_targetCapacitySpecificationHasBeenSet(false),
    m_terminateInstancesWithExpiration(false),
    m_terminateInstancesWithExpirationHasBeenSet(false),
    m_type(FleetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_replaceUnhealthyInstances(false),
    m_replaceUnhealthyInstancesHasBeenSet(false),
    m_spotOptionsHasBeenSet(false),
    m_onDemandOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_contextHasBeenSet(false)
{
  *this = xmlNode;
}

FleetData& FleetData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode activityStatusNode = resultNode.FirstChild("activityStatus");
    if(!activityStatusNode.IsNull())
    {
      m_activityStatus = FleetActivityStatusMapper::GetFleetActivityStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(activityStatusNode.GetText()).c_str()).c_str());
      m_activityStatusHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode fleetIdNode = resultNode.FirstChild("fleetId");
    if(!fleetIdNode.IsNull())
    {
      m_fleetId = Aws::Utils::Xml::DecodeEscapedXmlText(fleetIdNode.GetText());
      m_fleetIdHasBeenSet = true;
    }
    XmlNode fleetStateNode = resultNode.FirstChild("fleetState");
    if(!fleetStateNode.IsNull())
    {
      m_fleetState = FleetStateCodeMapper::GetFleetStateCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fleetStateNode.GetText()).c_str()).c_str());
      m_fleetStateHasBeenSet = true;
    }
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode excessCapacityTerminationPolicyNode = resultNode.FirstChild("excessCapacityTerminationPolicy");
    if(!excessCapacityTerminationPolicyNode.IsNull())
    {
      m_excessCapacityTerminationPolicy = FleetExcessCapacityTerminationPolicyMapper::GetFleetExcessCapacityTerminationPolicyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(excessCapacityTerminationPolicyNode.GetText()).c_str()).c_str());
      m_excessCapacityTerminationPolicyHasBeenSet = true;
    }
    XmlNode fulfilledCapacityNode = resultNode.FirstChild("fulfilledCapacity");
    if(!fulfilledCapacityNode.IsNull())
    {
      m_fulfilledCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fulfilledCapacityNode.GetText()).c_str()).c_str());
      m_fulfilledCapacityHasBeenSet = true;
    }
    XmlNode fulfilledOnDemandCapacityNode = resultNode.FirstChild("fulfilledOnDemandCapacity");
    if(!fulfilledOnDemandCapacityNode.IsNull())
    {
      m_fulfilledOnDemandCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fulfilledOnDemandCapacityNode.GetText()).c_str()).c_str());
      m_fulfilledOnDemandCapacityHasBeenSet = true;
    }
    XmlNode launchTemplateConfigsNode = resultNode.FirstChild("launchTemplateConfigs");
    if(!launchTemplateConfigsNode.IsNull())
    {
      XmlNode launchTemplateConfigsMember = launchTemplateConfigsNode.FirstChild("item");
      while(!launchTemplateConfigsMember.IsNull())
      {
        m_launchTemplateConfigs.push_back(launchTemplateConfigsMember);
        launchTemplateConfigsMember = launchTemplateConfigsMember.NextNode("item");
      }

      m_launchTemplateConfigsHasBeenSet = true;
    }
    XmlNode targetCapacitySpecificationNode = resultNode.FirstChild("targetCapacitySpecification");
    if(!targetCapacitySpecificationNode.IsNull())
    {
      m_targetCapacitySpecification = targetCapacitySpecificationNode;
      m_targetCapacitySpecificationHasBeenSet = true;
    }
    XmlNode terminateInstancesWithExpirationNode = resultNode.FirstChild("terminateInstancesWithExpiration");
    if(!terminateInstancesWithExpirationNode.IsNull())
    {
      m_terminateInstancesWithExpiration = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(terminateInstancesWithExpirationNode.GetText()).c_str()).c_str());
      m_terminateInstancesWithExpirationHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = FleetTypeMapper::GetFleetTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode validFromNode = resultNode.FirstChild("validFrom");
    if(!validFromNode.IsNull())
    {
      m_validFrom = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validFromNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validFromHasBeenSet = true;
    }
    XmlNode validUntilNode = resultNode.FirstChild("validUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validUntilNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validUntilHasBeenSet = true;
    }
    XmlNode replaceUnhealthyInstancesNode = resultNode.FirstChild("replaceUnhealthyInstances");
    if(!replaceUnhealthyInstancesNode.IsNull())
    {
      m_replaceUnhealthyInstances = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replaceUnhealthyInstancesNode.GetText()).c_str()).c_str());
      m_replaceUnhealthyInstancesHasBeenSet = true;
    }
    XmlNode spotOptionsNode = resultNode.FirstChild("spotOptions");
    if(!spotOptionsNode.IsNull())
    {
      m_spotOptions = spotOptionsNode;
      m_spotOptionsHasBeenSet = true;
    }
    XmlNode onDemandOptionsNode = resultNode.FirstChild("onDemandOptions");
    if(!onDemandOptionsNode.IsNull())
    {
      m_onDemandOptions = onDemandOptionsNode;
      m_onDemandOptionsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode errorsNode = resultNode.FirstChild("errorSet");
    if(!errorsNode.IsNull())
    {
      XmlNode errorsMember = errorsNode.FirstChild("item");
      while(!errorsMember.IsNull())
      {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("item");
      }

      m_errorsHasBeenSet = true;
    }
    XmlNode instancesNode = resultNode.FirstChild("fleetInstanceSet");
    if(!instancesNode.IsNull())
    {
      XmlNode instancesMember = instancesNode.FirstChild("item");
      while(!instancesMember.IsNull())
      {
        m_instances.push_back(instancesMember);
        instancesMember = instancesMember.NextNode("item");
      }

      m_instancesHasBeenSet = true;
    }
    XmlNode contextNode = resultNode.FirstChild("context");
    if(!contextNode.IsNull())
    {
      m_context = Aws::Utils::Xml::DecodeEscapedXmlText(contextNode.GetText());
      m_contextHasBeenSet = true;
    }
  }

  return *this;
}

void FleetData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_activityStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStatus=" << FleetActivityStatusMapper::GetNameForFleetActivityStatus(m_activityStatus) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_fleetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".FleetId=" << StringUtils::URLEncode(m_fleetId.c_str()) << "&";
  }

  if(m_fleetStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".FleetState=" << FleetStateCodeMapper::GetNameForFleetStateCode(m_fleetState) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExcessCapacityTerminationPolicy=" << FleetExcessCapacityTerminationPolicyMapper::GetNameForFleetExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy) << "&";
  }

  if(m_fulfilledCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".FulfilledCapacity=" << StringUtils::URLEncode(m_fulfilledCapacity) << "&";
  }

  if(m_fulfilledOnDemandCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".FulfilledOnDemandCapacity=" << StringUtils::URLEncode(m_fulfilledOnDemandCapacity) << "&";
  }

  if(m_launchTemplateConfigsHasBeenSet)
  {
      unsigned launchTemplateConfigsIdx = 1;
      for(auto& item : m_launchTemplateConfigs)
      {
        Aws::StringStream launchTemplateConfigsSs;
        launchTemplateConfigsSs << location << index << locationValue << ".LaunchTemplateConfigs." << launchTemplateConfigsIdx++;
        item.OutputToStream(oStream, launchTemplateConfigsSs.str().c_str());
      }
  }

  if(m_targetCapacitySpecificationHasBeenSet)
  {
      Aws::StringStream targetCapacitySpecificationLocationAndMemberSs;
      targetCapacitySpecificationLocationAndMemberSs << location << index << locationValue << ".TargetCapacitySpecification";
      m_targetCapacitySpecification.OutputToStream(oStream, targetCapacitySpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
      oStream << location << index << locationValue << ".TerminateInstancesWithExpiration=" << std::boolalpha << m_terminateInstancesWithExpiration << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << FleetTypeMapper::GetNameForFleetType(m_type) << "&";
  }

  if(m_validFromHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validUntilHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_replaceUnhealthyInstancesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplaceUnhealthyInstances=" << std::boolalpha << m_replaceUnhealthyInstances << "&";
  }

  if(m_spotOptionsHasBeenSet)
  {
      Aws::StringStream spotOptionsLocationAndMemberSs;
      spotOptionsLocationAndMemberSs << location << index << locationValue << ".SpotOptions";
      m_spotOptions.OutputToStream(oStream, spotOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_onDemandOptionsHasBeenSet)
  {
      Aws::StringStream onDemandOptionsLocationAndMemberSs;
      onDemandOptionsLocationAndMemberSs << location << index << locationValue << ".OnDemandOptions";
      m_onDemandOptions.OutputToStream(oStream, onDemandOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_errorsHasBeenSet)
  {
      unsigned errorsIdx = 1;
      for(auto& item : m_errors)
      {
        Aws::StringStream errorsSs;
        errorsSs << location << index << locationValue << ".ErrorSet." << errorsIdx++;
        item.OutputToStream(oStream, errorsSs.str().c_str());
      }
  }

  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location << index << locationValue << ".FleetInstanceSet." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }

  if(m_contextHasBeenSet)
  {
      oStream << location << index << locationValue << ".Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }

}

void FleetData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_activityStatusHasBeenSet)
  {
      oStream << location << ".ActivityStatus=" << FleetActivityStatusMapper::GetNameForFleetActivityStatus(m_activityStatus) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_fleetIdHasBeenSet)
  {
      oStream << location << ".FleetId=" << StringUtils::URLEncode(m_fleetId.c_str()) << "&";
  }
  if(m_fleetStateHasBeenSet)
  {
      oStream << location << ".FleetState=" << FleetStateCodeMapper::GetNameForFleetStateCode(m_fleetState) << "&";
  }
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
      oStream << location << ".ExcessCapacityTerminationPolicy=" << FleetExcessCapacityTerminationPolicyMapper::GetNameForFleetExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy) << "&";
  }
  if(m_fulfilledCapacityHasBeenSet)
  {
        oStream << location << ".FulfilledCapacity=" << StringUtils::URLEncode(m_fulfilledCapacity) << "&";
  }
  if(m_fulfilledOnDemandCapacityHasBeenSet)
  {
        oStream << location << ".FulfilledOnDemandCapacity=" << StringUtils::URLEncode(m_fulfilledOnDemandCapacity) << "&";
  }
  if(m_launchTemplateConfigsHasBeenSet)
  {
      unsigned launchTemplateConfigsIdx = 1;
      for(auto& item : m_launchTemplateConfigs)
      {
        Aws::StringStream launchTemplateConfigsSs;
        launchTemplateConfigsSs << location <<  ".LaunchTemplateConfigs." << launchTemplateConfigsIdx++;
        item.OutputToStream(oStream, launchTemplateConfigsSs.str().c_str());
      }
  }
  if(m_targetCapacitySpecificationHasBeenSet)
  {
      Aws::String targetCapacitySpecificationLocationAndMember(location);
      targetCapacitySpecificationLocationAndMember += ".TargetCapacitySpecification";
      m_targetCapacitySpecification.OutputToStream(oStream, targetCapacitySpecificationLocationAndMember.c_str());
  }
  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
      oStream << location << ".TerminateInstancesWithExpiration=" << std::boolalpha << m_terminateInstancesWithExpiration << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << FleetTypeMapper::GetNameForFleetType(m_type) << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_validUntilHasBeenSet)
  {
      oStream << location << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_replaceUnhealthyInstancesHasBeenSet)
  {
      oStream << location << ".ReplaceUnhealthyInstances=" << std::boolalpha << m_replaceUnhealthyInstances << "&";
  }
  if(m_spotOptionsHasBeenSet)
  {
      Aws::String spotOptionsLocationAndMember(location);
      spotOptionsLocationAndMember += ".SpotOptions";
      m_spotOptions.OutputToStream(oStream, spotOptionsLocationAndMember.c_str());
  }
  if(m_onDemandOptionsHasBeenSet)
  {
      Aws::String onDemandOptionsLocationAndMember(location);
      onDemandOptionsLocationAndMember += ".OnDemandOptions";
      m_onDemandOptions.OutputToStream(oStream, onDemandOptionsLocationAndMember.c_str());
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_errorsHasBeenSet)
  {
      unsigned errorsIdx = 1;
      for(auto& item : m_errors)
      {
        Aws::StringStream errorsSs;
        errorsSs << location <<  ".ErrorSet." << errorsIdx++;
        item.OutputToStream(oStream, errorsSs.str().c_str());
      }
  }
  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location <<  ".FleetInstanceSet." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }
  if(m_contextHasBeenSet)
  {
      oStream << location << ".Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
