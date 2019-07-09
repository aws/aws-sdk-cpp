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

#include <aws/email/model/IdentityVerificationAttributes.h>
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

IdentityVerificationAttributes::IdentityVerificationAttributes() : 
    m_verificationStatus(VerificationStatus::NOT_SET),
    m_verificationStatusHasBeenSet(false),
    m_verificationTokenHasBeenSet(false)
{
}

IdentityVerificationAttributes::IdentityVerificationAttributes(const XmlNode& xmlNode) : 
    m_verificationStatus(VerificationStatus::NOT_SET),
    m_verificationStatusHasBeenSet(false),
    m_verificationTokenHasBeenSet(false)
{
  *this = xmlNode;
}

IdentityVerificationAttributes& IdentityVerificationAttributes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode verificationStatusNode = resultNode.FirstChild("VerificationStatus");
    if(!verificationStatusNode.IsNull())
    {
      m_verificationStatus = VerificationStatusMapper::GetVerificationStatusForName(StringUtils::Trim(verificationStatusNode.GetText().c_str()).c_str());
      m_verificationStatusHasBeenSet = true;
    }
    XmlNode verificationTokenNode = resultNode.FirstChild("VerificationToken");
    if(!verificationTokenNode.IsNull())
    {
      m_verificationToken = verificationTokenNode.GetText();
      m_verificationTokenHasBeenSet = true;
    }
  }

  return *this;
}

void IdentityVerificationAttributes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_verificationStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerificationStatus=" << VerificationStatusMapper::GetNameForVerificationStatus(m_verificationStatus) << "&";
  }

  if(m_verificationTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerificationToken=" << StringUtils::URLEncode(m_verificationToken.c_str()) << "&";
  }

}

void IdentityVerificationAttributes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_verificationStatusHasBeenSet)
  {
      oStream << location << ".VerificationStatus=" << VerificationStatusMapper::GetNameForVerificationStatus(m_verificationStatus) << "&";
  }
  if(m_verificationTokenHasBeenSet)
  {
      oStream << location << ".VerificationToken=" << StringUtils::URLEncode(m_verificationToken.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
