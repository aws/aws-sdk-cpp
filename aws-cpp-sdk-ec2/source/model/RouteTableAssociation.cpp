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

#include <aws/ec2/model/RouteTableAssociation.h>
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

RouteTableAssociation::RouteTableAssociation() : 
    m_main(false),
    m_mainHasBeenSet(false),
    m_routeTableAssociationIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

RouteTableAssociation::RouteTableAssociation(const XmlNode& xmlNode) : 
    m_main(false),
    m_mainHasBeenSet(false),
    m_routeTableAssociationIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
  *this = xmlNode;
}

RouteTableAssociation& RouteTableAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode mainNode = resultNode.FirstChild("main");
    if(!mainNode.IsNull())
    {
      m_main = StringUtils::ConvertToBool(StringUtils::Trim(mainNode.GetText().c_str()).c_str());
      m_mainHasBeenSet = true;
    }
    XmlNode routeTableAssociationIdNode = resultNode.FirstChild("routeTableAssociationId");
    if(!routeTableAssociationIdNode.IsNull())
    {
      m_routeTableAssociationId = routeTableAssociationIdNode.GetText();
      m_routeTableAssociationIdHasBeenSet = true;
    }
    XmlNode routeTableIdNode = resultNode.FirstChild("routeTableId");
    if(!routeTableIdNode.IsNull())
    {
      m_routeTableId = routeTableIdNode.GetText();
      m_routeTableIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = subnetIdNode.GetText();
      m_subnetIdHasBeenSet = true;
    }
  }

  return *this;
}

void RouteTableAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_mainHasBeenSet)
  {
      oStream << location << index << locationValue << ".Main=" << std::boolalpha << m_main << "&";
  }

  if(m_routeTableAssociationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteTableAssociationId=" << StringUtils::URLEncode(m_routeTableAssociationId.c_str()) << "&";
  }

  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

}

void RouteTableAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_mainHasBeenSet)
  {
      oStream << location << ".Main=" << std::boolalpha << m_main << "&";
  }
  if(m_routeTableAssociationIdHasBeenSet)
  {
      oStream << location << ".RouteTableAssociationId=" << StringUtils::URLEncode(m_routeTableAssociationId.c_str()) << "&";
  }
  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
