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

#include <aws/email/model/BouncedRecipientInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

BouncedRecipientInfo::BouncedRecipientInfo() : 
    m_recipientHasBeenSet(false),
    m_recipientArnHasBeenSet(false),
    m_bounceType(BounceType::NOT_SET),
    m_bounceTypeHasBeenSet(false),
    m_recipientDsnFieldsHasBeenSet(false)
{
}

BouncedRecipientInfo::BouncedRecipientInfo(const XmlNode& xmlNode) : 
    m_recipientHasBeenSet(false),
    m_recipientArnHasBeenSet(false),
    m_bounceType(BounceType::NOT_SET),
    m_bounceTypeHasBeenSet(false),
    m_recipientDsnFieldsHasBeenSet(false)
{
  *this = xmlNode;
}

BouncedRecipientInfo& BouncedRecipientInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode recipientNode = resultNode.FirstChild("Recipient");
    if(!recipientNode.IsNull())
    {
      m_recipient = recipientNode.GetText();
      m_recipientHasBeenSet = true;
    }
    XmlNode recipientArnNode = resultNode.FirstChild("RecipientArn");
    if(!recipientArnNode.IsNull())
    {
      m_recipientArn = recipientArnNode.GetText();
      m_recipientArnHasBeenSet = true;
    }
    XmlNode bounceTypeNode = resultNode.FirstChild("BounceType");
    if(!bounceTypeNode.IsNull())
    {
      m_bounceType = BounceTypeMapper::GetBounceTypeForName(StringUtils::Trim(bounceTypeNode.GetText().c_str()).c_str());
      m_bounceTypeHasBeenSet = true;
    }
    XmlNode recipientDsnFieldsNode = resultNode.FirstChild("RecipientDsnFields");
    if(!recipientDsnFieldsNode.IsNull())
    {
      m_recipientDsnFields = recipientDsnFieldsNode;
      m_recipientDsnFieldsHasBeenSet = true;
    }
  }

  return *this;
}

void BouncedRecipientInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_recipientHasBeenSet)
  {
      oStream << location << index << locationValue << ".Recipient=" << StringUtils::URLEncode(m_recipient.c_str()) << "&";
  }

  if(m_recipientArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecipientArn=" << StringUtils::URLEncode(m_recipientArn.c_str()) << "&";
  }

  if(m_bounceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".BounceType=" << BounceTypeMapper::GetNameForBounceType(m_bounceType) << "&";
  }

  if(m_recipientDsnFieldsHasBeenSet)
  {
      Aws::StringStream recipientDsnFieldsLocationAndMemberSs;
      recipientDsnFieldsLocationAndMemberSs << location << index << locationValue << ".RecipientDsnFields";
      m_recipientDsnFields.OutputToStream(oStream, recipientDsnFieldsLocationAndMemberSs.str().c_str());
  }

}

void BouncedRecipientInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_recipientHasBeenSet)
  {
      oStream << location << ".Recipient=" << StringUtils::URLEncode(m_recipient.c_str()) << "&";
  }
  if(m_recipientArnHasBeenSet)
  {
      oStream << location << ".RecipientArn=" << StringUtils::URLEncode(m_recipientArn.c_str()) << "&";
  }
  if(m_bounceTypeHasBeenSet)
  {
      oStream << location << ".BounceType=" << BounceTypeMapper::GetNameForBounceType(m_bounceType) << "&";
  }
  if(m_recipientDsnFieldsHasBeenSet)
  {
      Aws::String recipientDsnFieldsLocationAndMember(location);
      recipientDsnFieldsLocationAndMember += ".RecipientDsnFields";
      m_recipientDsnFields.OutputToStream(oStream, recipientDsnFieldsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
