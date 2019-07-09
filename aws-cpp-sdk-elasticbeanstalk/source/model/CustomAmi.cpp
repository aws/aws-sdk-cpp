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

#include <aws/elasticbeanstalk/model/CustomAmi.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

CustomAmi::CustomAmi() : 
    m_virtualizationTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
}

CustomAmi::CustomAmi(const XmlNode& xmlNode) : 
    m_virtualizationTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
  *this = xmlNode;
}

CustomAmi& CustomAmi::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode virtualizationTypeNode = resultNode.FirstChild("VirtualizationType");
    if(!virtualizationTypeNode.IsNull())
    {
      m_virtualizationType = virtualizationTypeNode.GetText();
      m_virtualizationTypeHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("ImageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = imageIdNode.GetText();
      m_imageIdHasBeenSet = true;
    }
  }

  return *this;
}

void CustomAmi::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".VirtualizationType=" << StringUtils::URLEncode(m_virtualizationType.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

}

void CustomAmi::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << ".VirtualizationType=" << StringUtils::URLEncode(m_virtualizationType.c_str()) << "&";
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
