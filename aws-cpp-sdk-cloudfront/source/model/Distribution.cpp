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

#include <aws/cloudfront/model/Distribution.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

Distribution::Distribution() : 
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_inProgressInvalidationBatches(0),
    m_inProgressInvalidationBatchesHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_activeTrustedSignersHasBeenSet(false),
    m_distributionConfigHasBeenSet(false),
    m_aliasICPRecordalsHasBeenSet(false)
{
}

Distribution::Distribution(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_inProgressInvalidationBatches(0),
    m_inProgressInvalidationBatchesHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_activeTrustedSignersHasBeenSet(false),
    m_distributionConfigHasBeenSet(false),
    m_aliasICPRecordalsHasBeenSet(false)
{
  *this = xmlNode;
}

Distribution& Distribution::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = aRNNode.GetText();
      m_aRNHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(lastModifiedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode inProgressInvalidationBatchesNode = resultNode.FirstChild("InProgressInvalidationBatches");
    if(!inProgressInvalidationBatchesNode.IsNull())
    {
      m_inProgressInvalidationBatches = StringUtils::ConvertToInt32(StringUtils::Trim(inProgressInvalidationBatchesNode.GetText().c_str()).c_str());
      m_inProgressInvalidationBatchesHasBeenSet = true;
    }
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    if(!domainNameNode.IsNull())
    {
      m_domainName = domainNameNode.GetText();
      m_domainNameHasBeenSet = true;
    }
    XmlNode activeTrustedSignersNode = resultNode.FirstChild("ActiveTrustedSigners");
    if(!activeTrustedSignersNode.IsNull())
    {
      m_activeTrustedSigners = activeTrustedSignersNode;
      m_activeTrustedSignersHasBeenSet = true;
    }
    XmlNode distributionConfigNode = resultNode.FirstChild("DistributionConfig");
    if(!distributionConfigNode.IsNull())
    {
      m_distributionConfig = distributionConfigNode;
      m_distributionConfigHasBeenSet = true;
    }
    XmlNode aliasICPRecordalsNode = resultNode.FirstChild("AliasICPRecordals");
    if(!aliasICPRecordalsNode.IsNull())
    {
      XmlNode aliasICPRecordalsMember = aliasICPRecordalsNode.FirstChild("AliasICPRecordal");
      while(!aliasICPRecordalsMember.IsNull())
      {
        m_aliasICPRecordals.push_back(aliasICPRecordalsMember);
        aliasICPRecordalsMember = aliasICPRecordalsMember.NextNode("AliasICPRecordal");
      }

      m_aliasICPRecordalsHasBeenSet = true;
    }
  }

  return *this;
}

void Distribution::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_aRNHasBeenSet)
  {
   XmlNode aRNNode = parentNode.CreateChildElement("ARN");
   aRNNode.SetText(m_aRN);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_inProgressInvalidationBatchesHasBeenSet)
  {
   XmlNode inProgressInvalidationBatchesNode = parentNode.CreateChildElement("InProgressInvalidationBatches");
   ss << m_inProgressInvalidationBatches;
   inProgressInvalidationBatchesNode.SetText(ss.str());
   ss.str("");
  }

  if(m_domainNameHasBeenSet)
  {
   XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
   domainNameNode.SetText(m_domainName);
  }

  if(m_activeTrustedSignersHasBeenSet)
  {
   XmlNode activeTrustedSignersNode = parentNode.CreateChildElement("ActiveTrustedSigners");
   m_activeTrustedSigners.AddToNode(activeTrustedSignersNode);
  }

  if(m_distributionConfigHasBeenSet)
  {
   XmlNode distributionConfigNode = parentNode.CreateChildElement("DistributionConfig");
   m_distributionConfig.AddToNode(distributionConfigNode);
  }

  if(m_aliasICPRecordalsHasBeenSet)
  {
   XmlNode aliasICPRecordalsParentNode = parentNode.CreateChildElement("AliasICPRecordals");
   for(const auto& item : m_aliasICPRecordals)
   {
     XmlNode aliasICPRecordalsNode = aliasICPRecordalsParentNode.CreateChildElement("AliasICPRecordal");
     item.AddToNode(aliasICPRecordalsNode);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
