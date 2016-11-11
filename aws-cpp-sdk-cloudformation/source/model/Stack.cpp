/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/model/Stack.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

Stack::Stack() : 
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_changeSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_stackStatus(StackStatus::NOT_SET),
    m_stackStatusHasBeenSet(false),
    m_stackStatusReasonHasBeenSet(false),
    m_disableRollback(false),
    m_disableRollbackHasBeenSet(false),
    m_notificationARNsHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Stack::Stack(const XmlNode& xmlNode) : 
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_changeSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_stackStatus(StackStatus::NOT_SET),
    m_stackStatusHasBeenSet(false),
    m_stackStatusReasonHasBeenSet(false),
    m_disableRollback(false),
    m_disableRollbackHasBeenSet(false),
    m_notificationARNsHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

Stack& Stack::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = StringUtils::Trim(stackIdNode.GetText().c_str());
      m_stackIdHasBeenSet = true;
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = StringUtils::Trim(stackNameNode.GetText().c_str());
      m_stackNameHasBeenSet = true;
    }
    XmlNode changeSetIdNode = resultNode.FirstChild("ChangeSetId");
    if(!changeSetIdNode.IsNull())
    {
      m_changeSetId = StringUtils::Trim(changeSetIdNode.GetText().c_str());
      m_changeSetIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

      m_parametersHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(creationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode lastUpdatedTimeNode = resultNode.FirstChild("LastUpdatedTime");
    if(!lastUpdatedTimeNode.IsNull())
    {
      m_lastUpdatedTime = DateTime(StringUtils::Trim(lastUpdatedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastUpdatedTimeHasBeenSet = true;
    }
    XmlNode stackStatusNode = resultNode.FirstChild("StackStatus");
    if(!stackStatusNode.IsNull())
    {
      m_stackStatus = StackStatusMapper::GetStackStatusForName(StringUtils::Trim(stackStatusNode.GetText().c_str()).c_str());
      m_stackStatusHasBeenSet = true;
    }
    XmlNode stackStatusReasonNode = resultNode.FirstChild("StackStatusReason");
    if(!stackStatusReasonNode.IsNull())
    {
      m_stackStatusReason = StringUtils::Trim(stackStatusReasonNode.GetText().c_str());
      m_stackStatusReasonHasBeenSet = true;
    }
    XmlNode disableRollbackNode = resultNode.FirstChild("DisableRollback");
    if(!disableRollbackNode.IsNull())
    {
      m_disableRollback = StringUtils::ConvertToBool(StringUtils::Trim(disableRollbackNode.GetText().c_str()).c_str());
      m_disableRollbackHasBeenSet = true;
    }
    XmlNode notificationARNsNode = resultNode.FirstChild("NotificationARNs");
    if(!notificationARNsNode.IsNull())
    {
      XmlNode notificationARNsMember = notificationARNsNode.FirstChild("member");
      while(!notificationARNsMember.IsNull())
      {
        m_notificationARNs.push_back(StringUtils::Trim(notificationARNsMember.GetText().c_str()));
        notificationARNsMember = notificationARNsMember.NextNode("member");
      }

      m_notificationARNsHasBeenSet = true;
    }
    XmlNode timeoutInMinutesNode = resultNode.FirstChild("TimeoutInMinutes");
    if(!timeoutInMinutesNode.IsNull())
    {
      m_timeoutInMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(timeoutInMinutesNode.GetText().c_str()).c_str());
      m_timeoutInMinutesHasBeenSet = true;
    }
    XmlNode capabilitiesNode = resultNode.FirstChild("Capabilities");
    if(!capabilitiesNode.IsNull())
    {
      XmlNode capabilitiesMember = capabilitiesNode.FirstChild("member");
      while(!capabilitiesMember.IsNull())
      {
        m_capabilities.push_back(CapabilityMapper::GetCapabilityForName(StringUtils::Trim(capabilitiesMember.GetText().c_str())));
        capabilitiesMember = capabilitiesMember.NextNode("member");
      }

      m_capabilitiesHasBeenSet = true;
    }
    XmlNode outputsNode = resultNode.FirstChild("Outputs");
    if(!outputsNode.IsNull())
    {
      XmlNode outputsMember = outputsNode.FirstChild("member");
      while(!outputsMember.IsNull())
      {
        m_outputs.push_back(outputsMember);
        outputsMember = outputsMember.NextNode("member");
      }

      m_outputsHasBeenSet = true;
    }
    XmlNode roleARNNode = resultNode.FirstChild("RoleARN");
    if(!roleARNNode.IsNull())
    {
      m_roleARN = StringUtils::Trim(roleARNNode.GetText().c_str());
      m_roleARNHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("member");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("member");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void Stack::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }

  if(m_stackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_changeSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ChangeSetId=" << StringUtils::URLEncode(m_changeSetId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location << index << locationValue << ".Parameters.member." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_stackStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackStatus=" << StackStatusMapper::GetNameForStackStatus(m_stackStatus) << "&";
  }

  if(m_stackStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackStatusReason=" << StringUtils::URLEncode(m_stackStatusReason.c_str()) << "&";
  }

  if(m_disableRollbackHasBeenSet)
  {
      oStream << location << index << locationValue << ".DisableRollback=" << m_disableRollback << "&";
  }

  if(m_notificationARNsHasBeenSet)
  {
      unsigned notificationARNsIdx = 1;
      for(auto& item : m_notificationARNs)
      {
        oStream << location << index << locationValue << ".NotificationARNs.member." << notificationARNsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_timeoutInMinutesHasBeenSet)
  {
      oStream << location << index << locationValue << ".TimeoutInMinutes=" << m_timeoutInMinutes << "&";
  }

  if(m_capabilitiesHasBeenSet)
  {
      unsigned capabilitiesIdx = 1;
      for(auto& item : m_capabilities)
      {
        oStream << location << index << locationValue << ".Capabilities.member." << capabilitiesIdx++ << "=" << CapabilityMapper::GetNameForCapability(item) << "&";
      }
  }

  if(m_outputsHasBeenSet)
  {
      unsigned outputsIdx = 1;
      for(auto& item : m_outputs)
      {
        Aws::StringStream outputsSs;
        outputsSs << location << index << locationValue << ".Outputs.member." << outputsIdx++;
        item.OutputToStream(oStream, outputsSs.str().c_str());
      }
  }

  if(m_roleARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tags.member." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void Stack::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }
  if(m_stackNameHasBeenSet)
  {
      oStream << location << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }
  if(m_changeSetIdHasBeenSet)
  {
      oStream << location << ".ChangeSetId=" << StringUtils::URLEncode(m_changeSetId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location <<  ".Parameters.member." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_stackStatusHasBeenSet)
  {
      oStream << location << ".StackStatus=" << StackStatusMapper::GetNameForStackStatus(m_stackStatus) << "&";
  }
  if(m_stackStatusReasonHasBeenSet)
  {
      oStream << location << ".StackStatusReason=" << StringUtils::URLEncode(m_stackStatusReason.c_str()) << "&";
  }
  if(m_disableRollbackHasBeenSet)
  {
      oStream << location << ".DisableRollback=" << m_disableRollback << "&";
  }
  if(m_notificationARNsHasBeenSet)
  {
      unsigned notificationARNsIdx = 1;
      for(auto& item : m_notificationARNs)
      {
        oStream << location << ".NotificationARNs.member." << notificationARNsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_timeoutInMinutesHasBeenSet)
  {
      oStream << location << ".TimeoutInMinutes=" << m_timeoutInMinutes << "&";
  }
  if(m_capabilitiesHasBeenSet)
  {
      unsigned capabilitiesIdx = 1;
      for(auto& item : m_capabilities)
      {
        oStream << location << ".Capabilities.member." << capabilitiesIdx++ << "=" << CapabilityMapper::GetNameForCapability(item) << "&";
      }
  }
  if(m_outputsHasBeenSet)
  {
      unsigned outputsIdx = 1;
      for(auto& item : m_outputs)
      {
        Aws::StringStream outputsSs;
        outputsSs << location <<  ".Outputs.member." << outputsIdx++;
        item.OutputToStream(oStream, outputsSs.str().c_str());
      }
  }
  if(m_roleARNHasBeenSet)
  {
      oStream << location << ".RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tags.member." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
