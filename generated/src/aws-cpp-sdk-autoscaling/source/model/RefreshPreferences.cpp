/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RefreshPreferences.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

RefreshPreferences::RefreshPreferences() : 
    m_minHealthyPercentage(0),
    m_minHealthyPercentageHasBeenSet(false),
    m_instanceWarmup(0),
    m_instanceWarmupHasBeenSet(false),
    m_checkpointPercentagesHasBeenSet(false),
    m_checkpointDelay(0),
    m_checkpointDelayHasBeenSet(false),
    m_skipMatching(false),
    m_skipMatchingHasBeenSet(false),
    m_autoRollback(false),
    m_autoRollbackHasBeenSet(false),
    m_scaleInProtectedInstances(ScaleInProtectedInstances::NOT_SET),
    m_scaleInProtectedInstancesHasBeenSet(false),
    m_standbyInstances(StandbyInstances::NOT_SET),
    m_standbyInstancesHasBeenSet(false),
    m_alarmSpecificationHasBeenSet(false),
    m_maxHealthyPercentage(0),
    m_maxHealthyPercentageHasBeenSet(false)
{
}

RefreshPreferences::RefreshPreferences(const XmlNode& xmlNode) : 
    m_minHealthyPercentage(0),
    m_minHealthyPercentageHasBeenSet(false),
    m_instanceWarmup(0),
    m_instanceWarmupHasBeenSet(false),
    m_checkpointPercentagesHasBeenSet(false),
    m_checkpointDelay(0),
    m_checkpointDelayHasBeenSet(false),
    m_skipMatching(false),
    m_skipMatchingHasBeenSet(false),
    m_autoRollback(false),
    m_autoRollbackHasBeenSet(false),
    m_scaleInProtectedInstances(ScaleInProtectedInstances::NOT_SET),
    m_scaleInProtectedInstancesHasBeenSet(false),
    m_standbyInstances(StandbyInstances::NOT_SET),
    m_standbyInstancesHasBeenSet(false),
    m_alarmSpecificationHasBeenSet(false),
    m_maxHealthyPercentage(0),
    m_maxHealthyPercentageHasBeenSet(false)
{
  *this = xmlNode;
}

RefreshPreferences& RefreshPreferences::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode minHealthyPercentageNode = resultNode.FirstChild("MinHealthyPercentage");
    if(!minHealthyPercentageNode.IsNull())
    {
      m_minHealthyPercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minHealthyPercentageNode.GetText()).c_str()).c_str());
      m_minHealthyPercentageHasBeenSet = true;
    }
    XmlNode instanceWarmupNode = resultNode.FirstChild("InstanceWarmup");
    if(!instanceWarmupNode.IsNull())
    {
      m_instanceWarmup = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceWarmupNode.GetText()).c_str()).c_str());
      m_instanceWarmupHasBeenSet = true;
    }
    XmlNode checkpointPercentagesNode = resultNode.FirstChild("CheckpointPercentages");
    if(!checkpointPercentagesNode.IsNull())
    {
      XmlNode checkpointPercentagesMember = checkpointPercentagesNode.FirstChild("member");
      while(!checkpointPercentagesMember.IsNull())
      {
         m_checkpointPercentages.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(checkpointPercentagesMember.GetText().c_str()).c_str()));
        checkpointPercentagesMember = checkpointPercentagesMember.NextNode("member");
      }

      m_checkpointPercentagesHasBeenSet = true;
    }
    XmlNode checkpointDelayNode = resultNode.FirstChild("CheckpointDelay");
    if(!checkpointDelayNode.IsNull())
    {
      m_checkpointDelay = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(checkpointDelayNode.GetText()).c_str()).c_str());
      m_checkpointDelayHasBeenSet = true;
    }
    XmlNode skipMatchingNode = resultNode.FirstChild("SkipMatching");
    if(!skipMatchingNode.IsNull())
    {
      m_skipMatching = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(skipMatchingNode.GetText()).c_str()).c_str());
      m_skipMatchingHasBeenSet = true;
    }
    XmlNode autoRollbackNode = resultNode.FirstChild("AutoRollback");
    if(!autoRollbackNode.IsNull())
    {
      m_autoRollback = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoRollbackNode.GetText()).c_str()).c_str());
      m_autoRollbackHasBeenSet = true;
    }
    XmlNode scaleInProtectedInstancesNode = resultNode.FirstChild("ScaleInProtectedInstances");
    if(!scaleInProtectedInstancesNode.IsNull())
    {
      m_scaleInProtectedInstances = ScaleInProtectedInstancesMapper::GetScaleInProtectedInstancesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scaleInProtectedInstancesNode.GetText()).c_str()).c_str());
      m_scaleInProtectedInstancesHasBeenSet = true;
    }
    XmlNode standbyInstancesNode = resultNode.FirstChild("StandbyInstances");
    if(!standbyInstancesNode.IsNull())
    {
      m_standbyInstances = StandbyInstancesMapper::GetStandbyInstancesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(standbyInstancesNode.GetText()).c_str()).c_str());
      m_standbyInstancesHasBeenSet = true;
    }
    XmlNode alarmSpecificationNode = resultNode.FirstChild("AlarmSpecification");
    if(!alarmSpecificationNode.IsNull())
    {
      m_alarmSpecification = alarmSpecificationNode;
      m_alarmSpecificationHasBeenSet = true;
    }
    XmlNode maxHealthyPercentageNode = resultNode.FirstChild("MaxHealthyPercentage");
    if(!maxHealthyPercentageNode.IsNull())
    {
      m_maxHealthyPercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxHealthyPercentageNode.GetText()).c_str()).c_str());
      m_maxHealthyPercentageHasBeenSet = true;
    }
  }

  return *this;
}

void RefreshPreferences::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_minHealthyPercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinHealthyPercentage=" << m_minHealthyPercentage << "&";
  }

  if(m_instanceWarmupHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceWarmup=" << m_instanceWarmup << "&";
  }

  if(m_checkpointPercentagesHasBeenSet)
  {
      unsigned checkpointPercentagesIdx = 1;
      for(auto& item : m_checkpointPercentages)
      {
        oStream << location << index << locationValue << ".CheckpointPercentages.member." << checkpointPercentagesIdx++ << "=" << item << "&";
      }
  }

  if(m_checkpointDelayHasBeenSet)
  {
      oStream << location << index << locationValue << ".CheckpointDelay=" << m_checkpointDelay << "&";
  }

  if(m_skipMatchingHasBeenSet)
  {
      oStream << location << index << locationValue << ".SkipMatching=" << std::boolalpha << m_skipMatching << "&";
  }

  if(m_autoRollbackHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoRollback=" << std::boolalpha << m_autoRollback << "&";
  }

  if(m_scaleInProtectedInstancesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScaleInProtectedInstances=" << ScaleInProtectedInstancesMapper::GetNameForScaleInProtectedInstances(m_scaleInProtectedInstances) << "&";
  }

  if(m_standbyInstancesHasBeenSet)
  {
      oStream << location << index << locationValue << ".StandbyInstances=" << StandbyInstancesMapper::GetNameForStandbyInstances(m_standbyInstances) << "&";
  }

  if(m_alarmSpecificationHasBeenSet)
  {
      Aws::StringStream alarmSpecificationLocationAndMemberSs;
      alarmSpecificationLocationAndMemberSs << location << index << locationValue << ".AlarmSpecification";
      m_alarmSpecification.OutputToStream(oStream, alarmSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_maxHealthyPercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxHealthyPercentage=" << m_maxHealthyPercentage << "&";
  }

}

void RefreshPreferences::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_minHealthyPercentageHasBeenSet)
  {
      oStream << location << ".MinHealthyPercentage=" << m_minHealthyPercentage << "&";
  }
  if(m_instanceWarmupHasBeenSet)
  {
      oStream << location << ".InstanceWarmup=" << m_instanceWarmup << "&";
  }
  if(m_checkpointPercentagesHasBeenSet)
  {
      unsigned checkpointPercentagesIdx = 1;
      for(auto& item : m_checkpointPercentages)
      {
        oStream << location << ".CheckpointPercentages.member." << checkpointPercentagesIdx++ << "=" << item << "&";
      }
  }
  if(m_checkpointDelayHasBeenSet)
  {
      oStream << location << ".CheckpointDelay=" << m_checkpointDelay << "&";
  }
  if(m_skipMatchingHasBeenSet)
  {
      oStream << location << ".SkipMatching=" << std::boolalpha << m_skipMatching << "&";
  }
  if(m_autoRollbackHasBeenSet)
  {
      oStream << location << ".AutoRollback=" << std::boolalpha << m_autoRollback << "&";
  }
  if(m_scaleInProtectedInstancesHasBeenSet)
  {
      oStream << location << ".ScaleInProtectedInstances=" << ScaleInProtectedInstancesMapper::GetNameForScaleInProtectedInstances(m_scaleInProtectedInstances) << "&";
  }
  if(m_standbyInstancesHasBeenSet)
  {
      oStream << location << ".StandbyInstances=" << StandbyInstancesMapper::GetNameForStandbyInstances(m_standbyInstances) << "&";
  }
  if(m_alarmSpecificationHasBeenSet)
  {
      Aws::String alarmSpecificationLocationAndMember(location);
      alarmSpecificationLocationAndMember += ".AlarmSpecification";
      m_alarmSpecification.OutputToStream(oStream, alarmSpecificationLocationAndMember.c_str());
  }
  if(m_maxHealthyPercentageHasBeenSet)
  {
      oStream << location << ".MaxHealthyPercentage=" << m_maxHealthyPercentage << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
