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

#include <aws/s3control/model/AccessPoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

AccessPoint::AccessPoint() : 
    m_nameHasBeenSet(false),
    m_networkOrigin(NetworkOrigin::NOT_SET),
    m_networkOriginHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_bucketHasBeenSet(false)
{
}

AccessPoint::AccessPoint(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_networkOrigin(NetworkOrigin::NOT_SET),
    m_networkOriginHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_bucketHasBeenSet(false)
{
  *this = xmlNode;
}

AccessPoint& AccessPoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode networkOriginNode = resultNode.FirstChild("NetworkOrigin");
    if(!networkOriginNode.IsNull())
    {
      m_networkOrigin = NetworkOriginMapper::GetNetworkOriginForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkOriginNode.GetText()).c_str()).c_str());
      m_networkOriginHasBeenSet = true;
    }
    XmlNode vpcConfigurationNode = resultNode.FirstChild("VpcConfiguration");
    if(!vpcConfigurationNode.IsNull())
    {
      m_vpcConfiguration = vpcConfigurationNode;
      m_vpcConfigurationHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
  }

  return *this;
}

void AccessPoint::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_networkOriginHasBeenSet)
  {
   XmlNode networkOriginNode = parentNode.CreateChildElement("NetworkOrigin");
   networkOriginNode.SetText(NetworkOriginMapper::GetNameForNetworkOrigin(m_networkOrigin));
  }

  if(m_vpcConfigurationHasBeenSet)
  {
   XmlNode vpcConfigurationNode = parentNode.CreateChildElement("VpcConfiguration");
   m_vpcConfiguration.AddToNode(vpcConfigurationNode);
  }

  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
