/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcEncryptionControl.h>
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

VpcEncryptionControl::VpcEncryptionControl(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VpcEncryptionControl& VpcEncryptionControl::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode vpcEncryptionControlIdNode = resultNode.FirstChild("vpcEncryptionControlId");
    if(!vpcEncryptionControlIdNode.IsNull())
    {
      m_vpcEncryptionControlId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcEncryptionControlIdNode.GetText());
      m_vpcEncryptionControlIdHasBeenSet = true;
    }
    XmlNode modeNode = resultNode.FirstChild("mode");
    if(!modeNode.IsNull())
    {
      m_mode = VpcEncryptionControlModeMapper::GetVpcEncryptionControlModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()));
      m_modeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = VpcEncryptionControlStateMapper::GetVpcEncryptionControlStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("stateMessage");
    if(!stateMessageNode.IsNull())
    {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
    }
    XmlNode resourceExclusionsNode = resultNode.FirstChild("resourceExclusions");
    if(!resourceExclusionsNode.IsNull())
    {
      m_resourceExclusions = resourceExclusionsNode;
      m_resourceExclusionsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void VpcEncryptionControl::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_vpcEncryptionControlIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEncryptionControlId=" << StringUtils::URLEncode(m_vpcEncryptionControlId.c_str()) << "&";
  }

  if(m_modeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Mode=" << StringUtils::URLEncode(VpcEncryptionControlModeMapper::GetNameForVpcEncryptionControlMode(m_mode)) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(VpcEncryptionControlStateMapper::GetNameForVpcEncryptionControlState(m_state)) << "&";
  }

  if(m_stateMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }

  if(m_resourceExclusionsHasBeenSet)
  {
      Aws::StringStream resourceExclusionsLocationAndMemberSs;
      resourceExclusionsLocationAndMemberSs << location << index << locationValue << ".ResourceExclusions";
      m_resourceExclusions.OutputToStream(oStream, resourceExclusionsLocationAndMemberSs.str().c_str());
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

}

void VpcEncryptionControl::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_vpcEncryptionControlIdHasBeenSet)
  {
      oStream << location << ".VpcEncryptionControlId=" << StringUtils::URLEncode(m_vpcEncryptionControlId.c_str()) << "&";
  }
  if(m_modeHasBeenSet)
  {
      oStream << location << ".Mode=" << StringUtils::URLEncode(VpcEncryptionControlModeMapper::GetNameForVpcEncryptionControlMode(m_mode)) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(VpcEncryptionControlStateMapper::GetNameForVpcEncryptionControlState(m_state)) << "&";
  }
  if(m_stateMessageHasBeenSet)
  {
      oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
  if(m_resourceExclusionsHasBeenSet)
  {
      Aws::String resourceExclusionsLocationAndMember(location);
      resourceExclusionsLocationAndMember += ".ResourceExclusions";
      m_resourceExclusions.OutputToStream(oStream, resourceExclusionsLocationAndMember.c_str());
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
