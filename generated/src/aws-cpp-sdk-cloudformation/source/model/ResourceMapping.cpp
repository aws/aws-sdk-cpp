/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceMapping.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

ResourceMapping::ResourceMapping(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ResourceMapping& ResourceMapping::operator =(const XmlNode& xmlNode)
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
  }

  return *this;
}

void ResourceMapping::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

}

void ResourceMapping::OutputToStream(Aws::OStream& oStream, const char* location) const
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
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
