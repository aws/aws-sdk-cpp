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

#include <aws/rds/model/DBClusterEndpoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBClusterEndpoint::DBClusterEndpoint() : 
    m_dBClusterEndpointIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBClusterEndpointResourceIdentifierHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endpointTypeHasBeenSet(false),
    m_customEndpointTypeHasBeenSet(false),
    m_staticMembersHasBeenSet(false),
    m_excludedMembersHasBeenSet(false),
    m_dBClusterEndpointArnHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

DBClusterEndpoint::DBClusterEndpoint(const XmlNode& xmlNode) : 
    m_dBClusterEndpointIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_dBClusterEndpointResourceIdentifierHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endpointTypeHasBeenSet(false),
    m_customEndpointTypeHasBeenSet(false),
    m_staticMembersHasBeenSet(false),
    m_excludedMembersHasBeenSet(false),
    m_dBClusterEndpointArnHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterEndpoint& DBClusterEndpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterEndpointIdentifierNode = resultNode.FirstChild("DBClusterEndpointIdentifier");
    if(!dBClusterEndpointIdentifierNode.IsNull())
    {
      m_dBClusterEndpointIdentifier = dBClusterEndpointIdentifierNode.GetText();
      m_dBClusterEndpointIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = dBClusterIdentifierNode.GetText();
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterEndpointResourceIdentifierNode = resultNode.FirstChild("DBClusterEndpointResourceIdentifier");
    if(!dBClusterEndpointResourceIdentifierNode.IsNull())
    {
      m_dBClusterEndpointResourceIdentifier = dBClusterEndpointResourceIdentifierNode.GetText();
      m_dBClusterEndpointResourceIdentifierHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode.GetText();
      m_endpointHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode endpointTypeNode = resultNode.FirstChild("EndpointType");
    if(!endpointTypeNode.IsNull())
    {
      m_endpointType = endpointTypeNode.GetText();
      m_endpointTypeHasBeenSet = true;
    }
    XmlNode customEndpointTypeNode = resultNode.FirstChild("CustomEndpointType");
    if(!customEndpointTypeNode.IsNull())
    {
      m_customEndpointType = customEndpointTypeNode.GetText();
      m_customEndpointTypeHasBeenSet = true;
    }
    XmlNode staticMembersNode = resultNode.FirstChild("StaticMembers");
    if(!staticMembersNode.IsNull())
    {
      XmlNode staticMembersMember = staticMembersNode.FirstChild("member");
      while(!staticMembersMember.IsNull())
      {
        m_staticMembers.push_back(staticMembersMember.GetText());
        staticMembersMember = staticMembersMember.NextNode("member");
      }

      m_staticMembersHasBeenSet = true;
    }
    XmlNode excludedMembersNode = resultNode.FirstChild("ExcludedMembers");
    if(!excludedMembersNode.IsNull())
    {
      XmlNode excludedMembersMember = excludedMembersNode.FirstChild("member");
      while(!excludedMembersMember.IsNull())
      {
        m_excludedMembers.push_back(excludedMembersMember.GetText());
        excludedMembersMember = excludedMembersMember.NextNode("member");
      }

      m_excludedMembersHasBeenSet = true;
    }
    XmlNode dBClusterEndpointArnNode = resultNode.FirstChild("DBClusterEndpointArn");
    if(!dBClusterEndpointArnNode.IsNull())
    {
      m_dBClusterEndpointArn = dBClusterEndpointArnNode.GetText();
      m_dBClusterEndpointArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBClusterEndpointIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterEndpointIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointIdentifier.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_dBClusterEndpointResourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterEndpointResourceIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointResourceIdentifier.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_endpointTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointType=" << StringUtils::URLEncode(m_endpointType.c_str()) << "&";
  }

  if(m_customEndpointTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomEndpointType=" << StringUtils::URLEncode(m_customEndpointType.c_str()) << "&";
  }

  if(m_staticMembersHasBeenSet)
  {
      unsigned staticMembersIdx = 1;
      for(auto& item : m_staticMembers)
      {
        oStream << location << index << locationValue << ".StaticMembers.member." << staticMembersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_excludedMembersHasBeenSet)
  {
      unsigned excludedMembersIdx = 1;
      for(auto& item : m_excludedMembers)
      {
        oStream << location << index << locationValue << ".ExcludedMembers.member." << excludedMembersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_dBClusterEndpointArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterEndpointArn=" << StringUtils::URLEncode(m_dBClusterEndpointArn.c_str()) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void DBClusterEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBClusterEndpointIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterEndpointIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointIdentifier.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_dBClusterEndpointResourceIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterEndpointResourceIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointResourceIdentifier.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_endpointTypeHasBeenSet)
  {
      oStream << location << ".EndpointType=" << StringUtils::URLEncode(m_endpointType.c_str()) << "&";
  }
  if(m_customEndpointTypeHasBeenSet)
  {
      oStream << location << ".CustomEndpointType=" << StringUtils::URLEncode(m_customEndpointType.c_str()) << "&";
  }
  if(m_staticMembersHasBeenSet)
  {
      unsigned staticMembersIdx = 1;
      for(auto& item : m_staticMembers)
      {
        oStream << location << ".StaticMembers.member." << staticMembersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_excludedMembersHasBeenSet)
  {
      unsigned excludedMembersIdx = 1;
      for(auto& item : m_excludedMembers)
      {
        oStream << location << ".ExcludedMembers.member." << excludedMembersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dBClusterEndpointArnHasBeenSet)
  {
      oStream << location << ".DBClusterEndpointArn=" << StringUtils::URLEncode(m_dBClusterEndpointArn.c_str()) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
