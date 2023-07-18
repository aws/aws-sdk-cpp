/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ThroughResourcesStatementRequest.h>
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

ThroughResourcesStatementRequest::ThroughResourcesStatementRequest() : 
    m_resourceStatementHasBeenSet(false)
{
}

ThroughResourcesStatementRequest::ThroughResourcesStatementRequest(const XmlNode& xmlNode) : 
    m_resourceStatementHasBeenSet(false)
{
  *this = xmlNode;
}

ThroughResourcesStatementRequest& ThroughResourcesStatementRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceStatementNode = resultNode.FirstChild("ResourceStatement");
    if(!resourceStatementNode.IsNull())
    {
      m_resourceStatement = resourceStatementNode;
      m_resourceStatementHasBeenSet = true;
    }
  }

  return *this;
}

void ThroughResourcesStatementRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceStatementHasBeenSet)
  {
      Aws::StringStream resourceStatementLocationAndMemberSs;
      resourceStatementLocationAndMemberSs << location << index << locationValue << ".ResourceStatement";
      m_resourceStatement.OutputToStream(oStream, resourceStatementLocationAndMemberSs.str().c_str());
  }

}

void ThroughResourcesStatementRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceStatementHasBeenSet)
  {
      Aws::String resourceStatementLocationAndMember(location);
      resourceStatementLocationAndMember += ".ResourceStatement";
      m_resourceStatement.OutputToStream(oStream, resourceStatementLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
