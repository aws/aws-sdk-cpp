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

#include <aws/route53/model/HostedZone.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

HostedZone::HostedZone() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_configHasBeenSet(false),
    m_resourceRecordSetCount(0),
    m_resourceRecordSetCountHasBeenSet(false),
    m_linkedServiceHasBeenSet(false)
{
}

HostedZone::HostedZone(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_configHasBeenSet(false),
    m_resourceRecordSetCount(0),
    m_resourceRecordSetCountHasBeenSet(false),
    m_linkedServiceHasBeenSet(false)
{
  *this = xmlNode;
}

HostedZone& HostedZone::operator =(const XmlNode& xmlNode)
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
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    if(!callerReferenceNode.IsNull())
    {
      m_callerReference = callerReferenceNode.GetText();
      m_callerReferenceHasBeenSet = true;
    }
    XmlNode configNode = resultNode.FirstChild("Config");
    if(!configNode.IsNull())
    {
      m_config = configNode;
      m_configHasBeenSet = true;
    }
    XmlNode resourceRecordSetCountNode = resultNode.FirstChild("ResourceRecordSetCount");
    if(!resourceRecordSetCountNode.IsNull())
    {
      m_resourceRecordSetCount = StringUtils::ConvertToInt64(StringUtils::Trim(resourceRecordSetCountNode.GetText().c_str()).c_str());
      m_resourceRecordSetCountHasBeenSet = true;
    }
    XmlNode linkedServiceNode = resultNode.FirstChild("LinkedService");
    if(!linkedServiceNode.IsNull())
    {
      m_linkedService = linkedServiceNode;
      m_linkedServiceHasBeenSet = true;
    }
  }

  return *this;
}

void HostedZone::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_configHasBeenSet)
  {
   XmlNode configNode = parentNode.CreateChildElement("Config");
   m_config.AddToNode(configNode);
  }

  if(m_resourceRecordSetCountHasBeenSet)
  {
   XmlNode resourceRecordSetCountNode = parentNode.CreateChildElement("ResourceRecordSetCount");
   ss << m_resourceRecordSetCount;
   resourceRecordSetCountNode.SetText(ss.str());
   ss.str("");
  }

  if(m_linkedServiceHasBeenSet)
  {
   XmlNode linkedServiceNode = parentNode.CreateChildElement("LinkedService");
   m_linkedService.AddToNode(linkedServiceNode);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
