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

#include <aws/ec2/model/RegisterInstanceTagAttributeRequest.h>
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

RegisterInstanceTagAttributeRequest::RegisterInstanceTagAttributeRequest() : 
    m_includeAllTagsOfInstance(false),
    m_includeAllTagsOfInstanceHasBeenSet(false),
    m_instanceTagKeysHasBeenSet(false)
{
}

RegisterInstanceTagAttributeRequest::RegisterInstanceTagAttributeRequest(const XmlNode& xmlNode) : 
    m_includeAllTagsOfInstance(false),
    m_includeAllTagsOfInstanceHasBeenSet(false),
    m_instanceTagKeysHasBeenSet(false)
{
  *this = xmlNode;
}

RegisterInstanceTagAttributeRequest& RegisterInstanceTagAttributeRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode includeAllTagsOfInstanceNode = resultNode.FirstChild("IncludeAllTagsOfInstance");
    if(!includeAllTagsOfInstanceNode.IsNull())
    {
      m_includeAllTagsOfInstance = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(includeAllTagsOfInstanceNode.GetText()).c_str()).c_str());
      m_includeAllTagsOfInstanceHasBeenSet = true;
    }
    XmlNode instanceTagKeysNode = resultNode.FirstChild("InstanceTagKey");
    if(!instanceTagKeysNode.IsNull())
    {
      XmlNode instanceTagKeysMember = instanceTagKeysNode.FirstChild("item");
      while(!instanceTagKeysMember.IsNull())
      {
        m_instanceTagKeys.push_back(instanceTagKeysMember.GetText());
        instanceTagKeysMember = instanceTagKeysMember.NextNode("item");
      }

      m_instanceTagKeysHasBeenSet = true;
    }
  }

  return *this;
}

void RegisterInstanceTagAttributeRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_includeAllTagsOfInstanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".IncludeAllTagsOfInstance=" << std::boolalpha << m_includeAllTagsOfInstance << "&";
  }

  if(m_instanceTagKeysHasBeenSet)
  {
      unsigned instanceTagKeysIdx = 1;
      for(auto& item : m_instanceTagKeys)
      {
        oStream << location << index << locationValue << ".InstanceTagKey." << instanceTagKeysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void RegisterInstanceTagAttributeRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_includeAllTagsOfInstanceHasBeenSet)
  {
      oStream << location << ".IncludeAllTagsOfInstance=" << std::boolalpha << m_includeAllTagsOfInstance << "&";
  }
  if(m_instanceTagKeysHasBeenSet)
  {
      unsigned instanceTagKeysIdx = 1;
      for(auto& item : m_instanceTagKeys)
      {
        oStream << location << ".InstanceTagKey." << instanceTagKeysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
