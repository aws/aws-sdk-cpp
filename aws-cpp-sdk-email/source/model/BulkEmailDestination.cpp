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

#include <aws/email/model/BulkEmailDestination.h>
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

BulkEmailDestination::BulkEmailDestination() : 
    m_destinationHasBeenSet(false),
    m_replacementTagsHasBeenSet(false),
    m_replacementTemplateDataHasBeenSet(false)
{
}

BulkEmailDestination::BulkEmailDestination(const XmlNode& xmlNode) : 
    m_destinationHasBeenSet(false),
    m_replacementTagsHasBeenSet(false),
    m_replacementTemplateDataHasBeenSet(false)
{
  *this = xmlNode;
}

BulkEmailDestination& BulkEmailDestination::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationNode = resultNode.FirstChild("Destination");
    if(!destinationNode.IsNull())
    {
      m_destination = destinationNode;
      m_destinationHasBeenSet = true;
    }
    XmlNode replacementTagsNode = resultNode.FirstChild("ReplacementTags");
    if(!replacementTagsNode.IsNull())
    {
      XmlNode replacementTagsMember = replacementTagsNode.FirstChild("member");
      while(!replacementTagsMember.IsNull())
      {
        m_replacementTags.push_back(replacementTagsMember);
        replacementTagsMember = replacementTagsMember.NextNode("member");
      }

      m_replacementTagsHasBeenSet = true;
    }
    XmlNode replacementTemplateDataNode = resultNode.FirstChild("ReplacementTemplateData");
    if(!replacementTemplateDataNode.IsNull())
    {
      m_replacementTemplateData = replacementTemplateDataNode.GetText();
      m_replacementTemplateDataHasBeenSet = true;
    }
  }

  return *this;
}

void BulkEmailDestination::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationHasBeenSet)
  {
      Aws::StringStream destinationLocationAndMemberSs;
      destinationLocationAndMemberSs << location << index << locationValue << ".Destination";
      m_destination.OutputToStream(oStream, destinationLocationAndMemberSs.str().c_str());
  }

  if(m_replacementTagsHasBeenSet)
  {
      unsigned replacementTagsIdx = 1;
      for(auto& item : m_replacementTags)
      {
        Aws::StringStream replacementTagsSs;
        replacementTagsSs << location << index << locationValue << ".ReplacementTags.member." << replacementTagsIdx++;
        item.OutputToStream(oStream, replacementTagsSs.str().c_str());
      }
  }

  if(m_replacementTemplateDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplacementTemplateData=" << StringUtils::URLEncode(m_replacementTemplateData.c_str()) << "&";
  }

}

void BulkEmailDestination::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationHasBeenSet)
  {
      Aws::String destinationLocationAndMember(location);
      destinationLocationAndMember += ".Destination";
      m_destination.OutputToStream(oStream, destinationLocationAndMember.c_str());
  }
  if(m_replacementTagsHasBeenSet)
  {
      unsigned replacementTagsIdx = 1;
      for(auto& item : m_replacementTags)
      {
        Aws::StringStream replacementTagsSs;
        replacementTagsSs << location <<  ".ReplacementTags.member." << replacementTagsIdx++;
        item.OutputToStream(oStream, replacementTagsSs.str().c_str());
      }
  }
  if(m_replacementTemplateDataHasBeenSet)
  {
      oStream << location << ".ReplacementTemplateData=" << StringUtils::URLEncode(m_replacementTemplateData.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
