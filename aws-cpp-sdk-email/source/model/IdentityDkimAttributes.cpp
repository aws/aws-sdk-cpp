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

#include <aws/email/model/IdentityDkimAttributes.h>
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

IdentityDkimAttributes::IdentityDkimAttributes() : 
    m_dkimEnabled(false),
    m_dkimEnabledHasBeenSet(false),
    m_dkimVerificationStatus(VerificationStatus::NOT_SET),
    m_dkimVerificationStatusHasBeenSet(false),
    m_dkimTokensHasBeenSet(false)
{
}

IdentityDkimAttributes::IdentityDkimAttributes(const XmlNode& xmlNode) : 
    m_dkimEnabled(false),
    m_dkimEnabledHasBeenSet(false),
    m_dkimVerificationStatus(VerificationStatus::NOT_SET),
    m_dkimVerificationStatusHasBeenSet(false),
    m_dkimTokensHasBeenSet(false)
{
  *this = xmlNode;
}

IdentityDkimAttributes& IdentityDkimAttributes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dkimEnabledNode = resultNode.FirstChild("DkimEnabled");
    if(!dkimEnabledNode.IsNull())
    {
      m_dkimEnabled = StringUtils::ConvertToBool(StringUtils::Trim(dkimEnabledNode.GetText().c_str()).c_str());
      m_dkimEnabledHasBeenSet = true;
    }
    XmlNode dkimVerificationStatusNode = resultNode.FirstChild("DkimVerificationStatus");
    if(!dkimVerificationStatusNode.IsNull())
    {
      m_dkimVerificationStatus = VerificationStatusMapper::GetVerificationStatusForName(StringUtils::Trim(dkimVerificationStatusNode.GetText().c_str()).c_str());
      m_dkimVerificationStatusHasBeenSet = true;
    }
    XmlNode dkimTokensNode = resultNode.FirstChild("DkimTokens");
    if(!dkimTokensNode.IsNull())
    {
      XmlNode dkimTokensMember = dkimTokensNode.FirstChild("member");
      while(!dkimTokensMember.IsNull())
      {
        m_dkimTokens.push_back(dkimTokensMember.GetText());
        dkimTokensMember = dkimTokensMember.NextNode("member");
      }

      m_dkimTokensHasBeenSet = true;
    }
  }

  return *this;
}

void IdentityDkimAttributes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dkimEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".DkimEnabled=" << std::boolalpha << m_dkimEnabled << "&";
  }

  if(m_dkimVerificationStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DkimVerificationStatus=" << VerificationStatusMapper::GetNameForVerificationStatus(m_dkimVerificationStatus) << "&";
  }

  if(m_dkimTokensHasBeenSet)
  {
      unsigned dkimTokensIdx = 1;
      for(auto& item : m_dkimTokens)
      {
        oStream << location << index << locationValue << ".DkimTokens.member." << dkimTokensIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void IdentityDkimAttributes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dkimEnabledHasBeenSet)
  {
      oStream << location << ".DkimEnabled=" << std::boolalpha << m_dkimEnabled << "&";
  }
  if(m_dkimVerificationStatusHasBeenSet)
  {
      oStream << location << ".DkimVerificationStatus=" << VerificationStatusMapper::GetNameForVerificationStatus(m_dkimVerificationStatus) << "&";
  }
  if(m_dkimTokensHasBeenSet)
  {
      unsigned dkimTokensIdx = 1;
      for(auto& item : m_dkimTokens)
      {
        oStream << location << ".DkimTokens.member." << dkimTokensIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
