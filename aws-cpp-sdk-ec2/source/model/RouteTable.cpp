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

#include <aws/ec2/model/RouteTable.h>
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

RouteTable::RouteTable() : 
    m_associationsHasBeenSet(false),
    m_propagatingVgwsHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
}

RouteTable::RouteTable(const XmlNode& xmlNode) : 
    m_associationsHasBeenSet(false),
    m_propagatingVgwsHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
  *this = xmlNode;
}

RouteTable& RouteTable::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associationsNode = resultNode.FirstChild("associationSet");
    if(!associationsNode.IsNull())
    {
      XmlNode associationsMember = associationsNode.FirstChild("item");
      while(!associationsMember.IsNull())
      {
        m_associations.push_back(associationsMember);
        associationsMember = associationsMember.NextNode("item");
      }

      m_associationsHasBeenSet = true;
    }
    XmlNode propagatingVgwsNode = resultNode.FirstChild("propagatingVgwSet");
    if(!propagatingVgwsNode.IsNull())
    {
      XmlNode propagatingVgwsMember = propagatingVgwsNode.FirstChild("item");
      while(!propagatingVgwsMember.IsNull())
      {
        m_propagatingVgws.push_back(propagatingVgwsMember);
        propagatingVgwsMember = propagatingVgwsMember.NextNode("item");
      }

      m_propagatingVgwsHasBeenSet = true;
    }
    XmlNode routeTableIdNode = resultNode.FirstChild("routeTableId");
    if(!routeTableIdNode.IsNull())
    {
      m_routeTableId = routeTableIdNode.GetText();
      m_routeTableIdHasBeenSet = true;
    }
    XmlNode routesNode = resultNode.FirstChild("routeSet");
    if(!routesNode.IsNull())
    {
      XmlNode routesMember = routesNode.FirstChild("item");
      while(!routesMember.IsNull())
      {
        m_routes.push_back(routesMember);
        routesMember = routesMember.NextNode("item");
      }

      m_routesHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
  }

  return *this;
}

void RouteTable::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationsHasBeenSet)
  {
      unsigned associationsIdx = 1;
      for(auto& item : m_associations)
      {
        Aws::StringStream associationsSs;
        associationsSs << location << index << locationValue << ".AssociationSet." << associationsIdx++;
        item.OutputToStream(oStream, associationsSs.str().c_str());
      }
  }

  if(m_propagatingVgwsHasBeenSet)
  {
      unsigned propagatingVgwsIdx = 1;
      for(auto& item : m_propagatingVgws)
      {
        Aws::StringStream propagatingVgwsSs;
        propagatingVgwsSs << location << index << locationValue << ".PropagatingVgwSet." << propagatingVgwsIdx++;
        item.OutputToStream(oStream, propagatingVgwsSs.str().c_str());
      }
  }

  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if(m_routesHasBeenSet)
  {
      unsigned routesIdx = 1;
      for(auto& item : m_routes)
      {
        Aws::StringStream routesSs;
        routesSs << location << index << locationValue << ".RouteSet." << routesIdx++;
        item.OutputToStream(oStream, routesSs.str().c_str());
      }
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

}

void RouteTable::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationsHasBeenSet)
  {
      unsigned associationsIdx = 1;
      for(auto& item : m_associations)
      {
        Aws::StringStream associationsSs;
        associationsSs << location <<  ".AssociationSet." << associationsIdx++;
        item.OutputToStream(oStream, associationsSs.str().c_str());
      }
  }
  if(m_propagatingVgwsHasBeenSet)
  {
      unsigned propagatingVgwsIdx = 1;
      for(auto& item : m_propagatingVgws)
      {
        Aws::StringStream propagatingVgwsSs;
        propagatingVgwsSs << location <<  ".PropagatingVgwSet." << propagatingVgwsIdx++;
        item.OutputToStream(oStream, propagatingVgwsSs.str().c_str());
      }
  }
  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }
  if(m_routesHasBeenSet)
  {
      unsigned routesIdx = 1;
      for(auto& item : m_routes)
      {
        Aws::StringStream routesSs;
        routesSs << location <<  ".RouteSet." << routesIdx++;
        item.OutputToStream(oStream, routesSs.str().c_str());
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
