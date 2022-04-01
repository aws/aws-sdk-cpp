/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AccessScopePathRequest.h>
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

AccessScopePathRequest::AccessScopePathRequest() : 
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_throughResourcesHasBeenSet(false)
{
}

AccessScopePathRequest::AccessScopePathRequest(const XmlNode& xmlNode) : 
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_throughResourcesHasBeenSet(false)
{
  *this = xmlNode;
}

AccessScopePathRequest& AccessScopePathRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceNode = resultNode.FirstChild("Source");
    if(!sourceNode.IsNull())
    {
      m_source = sourceNode;
      m_sourceHasBeenSet = true;
    }
    XmlNode destinationNode = resultNode.FirstChild("Destination");
    if(!destinationNode.IsNull())
    {
      m_destination = destinationNode;
      m_destinationHasBeenSet = true;
    }
    XmlNode throughResourcesNode = resultNode.FirstChild("ThroughResource");
    if(!throughResourcesNode.IsNull())
    {
      XmlNode throughResourcesMember = throughResourcesNode.FirstChild("item");
      while(!throughResourcesMember.IsNull())
      {
        m_throughResources.push_back(throughResourcesMember);
        throughResourcesMember = throughResourcesMember.NextNode("item");
      }

      m_throughResourcesHasBeenSet = true;
    }
  }

  return *this;
}

void AccessScopePathRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceHasBeenSet)
  {
      Aws::StringStream sourceLocationAndMemberSs;
      sourceLocationAndMemberSs << location << index << locationValue << ".Source";
      m_source.OutputToStream(oStream, sourceLocationAndMemberSs.str().c_str());
  }

  if(m_destinationHasBeenSet)
  {
      Aws::StringStream destinationLocationAndMemberSs;
      destinationLocationAndMemberSs << location << index << locationValue << ".Destination";
      m_destination.OutputToStream(oStream, destinationLocationAndMemberSs.str().c_str());
  }

  if(m_throughResourcesHasBeenSet)
  {
      unsigned throughResourcesIdx = 1;
      for(auto& item : m_throughResources)
      {
        Aws::StringStream throughResourcesSs;
        throughResourcesSs << location << index << locationValue << ".ThroughResource." << throughResourcesIdx++;
        item.OutputToStream(oStream, throughResourcesSs.str().c_str());
      }
  }

}

void AccessScopePathRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceHasBeenSet)
  {
      Aws::String sourceLocationAndMember(location);
      sourceLocationAndMember += ".Source";
      m_source.OutputToStream(oStream, sourceLocationAndMember.c_str());
  }
  if(m_destinationHasBeenSet)
  {
      Aws::String destinationLocationAndMember(location);
      destinationLocationAndMember += ".Destination";
      m_destination.OutputToStream(oStream, destinationLocationAndMember.c_str());
  }
  if(m_throughResourcesHasBeenSet)
  {
      unsigned throughResourcesIdx = 1;
      for(auto& item : m_throughResources)
      {
        Aws::StringStream throughResourcesSs;
        throughResourcesSs << location <<  ".ThroughResource." << throughResourcesIdx++;
        item.OutputToStream(oStream, throughResourcesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
