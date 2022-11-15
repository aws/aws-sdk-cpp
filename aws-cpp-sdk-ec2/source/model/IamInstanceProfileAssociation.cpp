/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IamInstanceProfileAssociation.h>
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

IamInstanceProfileAssociation::IamInstanceProfileAssociation() : 
    m_associationIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_state(IamInstanceProfileAssociationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

IamInstanceProfileAssociation::IamInstanceProfileAssociation(const XmlNode& xmlNode) : 
    m_associationIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_state(IamInstanceProfileAssociationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = xmlNode;
}

IamInstanceProfileAssociation& IamInstanceProfileAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if(!associationIdNode.IsNull())
    {
      m_associationId = Aws::Utils::Xml::DecodeEscapedXmlText(associationIdNode.GetText());
      m_associationIdHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode iamInstanceProfileNode = resultNode.FirstChild("iamInstanceProfile");
    if(!iamInstanceProfileNode.IsNull())
    {
      m_iamInstanceProfile = iamInstanceProfileNode;
      m_iamInstanceProfileHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = IamInstanceProfileAssociationStateMapper::GetIamInstanceProfileAssociationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
  }

  return *this;
}

void IamInstanceProfileAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_iamInstanceProfileHasBeenSet)
  {
      Aws::StringStream iamInstanceProfileLocationAndMemberSs;
      iamInstanceProfileLocationAndMemberSs << location << index << locationValue << ".IamInstanceProfile";
      m_iamInstanceProfile.OutputToStream(oStream, iamInstanceProfileLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << IamInstanceProfileAssociationStateMapper::GetNameForIamInstanceProfileAssociationState(m_state) << "&";
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void IamInstanceProfileAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_iamInstanceProfileHasBeenSet)
  {
      Aws::String iamInstanceProfileLocationAndMember(location);
      iamInstanceProfileLocationAndMember += ".IamInstanceProfile";
      m_iamInstanceProfile.OutputToStream(oStream, iamInstanceProfileLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << IamInstanceProfileAssociationStateMapper::GetNameForIamInstanceProfileAssociationState(m_state) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
