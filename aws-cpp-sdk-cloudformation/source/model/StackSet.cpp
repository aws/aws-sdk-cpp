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

#include <aws/cloudformation/model/StackSet.h>
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

StackSet::StackSet() : 
    m_stackSetNameHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_stackSetARNHasBeenSet(false),
    m_administrationRoleARNHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false)
{
}

StackSet::StackSet(const XmlNode& xmlNode) : 
    m_stackSetNameHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_stackSetARNHasBeenSet(false),
    m_administrationRoleARNHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false)
{
  *this = xmlNode;
}

StackSet& StackSet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackSetNameNode = resultNode.FirstChild("StackSetName");
    if(!stackSetNameNode.IsNull())
    {
      m_stackSetName = stackSetNameNode.GetText();
      m_stackSetNameHasBeenSet = true;
    }
    XmlNode stackSetIdNode = resultNode.FirstChild("StackSetId");
    if(!stackSetIdNode.IsNull())
    {
      m_stackSetId = stackSetIdNode.GetText();
      m_stackSetIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackSetStatusMapper::GetStackSetStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode templateBodyNode = resultNode.FirstChild("TemplateBody");
    if(!templateBodyNode.IsNull())
    {
      m_templateBody = templateBodyNode.GetText();
      m_templateBodyHasBeenSet = true;
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
    XmlNode stackSetARNNode = resultNode.FirstChild("StackSetARN");
    if(!stackSetARNNode.IsNull())
    {
      m_stackSetARN = stackSetARNNode.GetText();
      m_stackSetARNHasBeenSet = true;
    }
    XmlNode administrationRoleARNNode = resultNode.FirstChild("AdministrationRoleARN");
    if(!administrationRoleARNNode.IsNull())
    {
      m_administrationRoleARN = administrationRoleARNNode.GetText();
      m_administrationRoleARNHasBeenSet = true;
    }
    XmlNode executionRoleNameNode = resultNode.FirstChild("ExecutionRoleName");
    if(!executionRoleNameNode.IsNull())
    {
      m_executionRoleName = executionRoleNameNode.GetText();
      m_executionRoleNameHasBeenSet = true;
    }
  }

  return *this;
}

void StackSet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StackSetStatusMapper::GetNameForStackSetStatus(m_status) << "&";
  }

  if(m_templateBodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
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

  if(m_capabilitiesHasBeenSet)
  {
      unsigned capabilitiesIdx = 1;
      for(auto& item : m_capabilities)
      {
        oStream << location << index << locationValue << ".Capabilities.member." << capabilitiesIdx++ << "=" << CapabilityMapper::GetNameForCapability(item) << "&";
      }
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

  if(m_stackSetARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetARN=" << StringUtils::URLEncode(m_stackSetARN.c_str()) << "&";
  }

  if(m_administrationRoleARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdministrationRoleARN=" << StringUtils::URLEncode(m_administrationRoleARN.c_str()) << "&";
  }

  if(m_executionRoleNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExecutionRoleName=" << StringUtils::URLEncode(m_executionRoleName.c_str()) << "&";
  }

}

void StackSet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackSetNameHasBeenSet)
  {
      oStream << location << ".StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }
  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StackSetStatusMapper::GetNameForStackSetStatus(m_status) << "&";
  }
  if(m_templateBodyHasBeenSet)
  {
      oStream << location << ".TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
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
  if(m_capabilitiesHasBeenSet)
  {
      unsigned capabilitiesIdx = 1;
      for(auto& item : m_capabilities)
      {
        oStream << location << ".Capabilities.member." << capabilitiesIdx++ << "=" << CapabilityMapper::GetNameForCapability(item) << "&";
      }
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
  if(m_stackSetARNHasBeenSet)
  {
      oStream << location << ".StackSetARN=" << StringUtils::URLEncode(m_stackSetARN.c_str()) << "&";
  }
  if(m_administrationRoleARNHasBeenSet)
  {
      oStream << location << ".AdministrationRoleARN=" << StringUtils::URLEncode(m_administrationRoleARN.c_str()) << "&";
  }
  if(m_executionRoleNameHasBeenSet)
  {
      oStream << location << ".ExecutionRoleName=" << StringUtils::URLEncode(m_executionRoleName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
