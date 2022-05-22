/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MultiRegionAccessPointPolicyDocument.h>
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

MultiRegionAccessPointPolicyDocument::MultiRegionAccessPointPolicyDocument() : 
    m_establishedHasBeenSet(false),
    m_proposedHasBeenSet(false)
{
}

MultiRegionAccessPointPolicyDocument::MultiRegionAccessPointPolicyDocument(const XmlNode& xmlNode) : 
    m_establishedHasBeenSet(false),
    m_proposedHasBeenSet(false)
{
  *this = xmlNode;
}

MultiRegionAccessPointPolicyDocument& MultiRegionAccessPointPolicyDocument::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode establishedNode = resultNode.FirstChild("Established");
    if(!establishedNode.IsNull())
    {
      m_established = establishedNode;
      m_establishedHasBeenSet = true;
    }
    XmlNode proposedNode = resultNode.FirstChild("Proposed");
    if(!proposedNode.IsNull())
    {
      m_proposed = proposedNode;
      m_proposedHasBeenSet = true;
    }
  }

  return *this;
}

void MultiRegionAccessPointPolicyDocument::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_establishedHasBeenSet)
  {
   XmlNode establishedNode = parentNode.CreateChildElement("Established");
   m_established.AddToNode(establishedNode);
  }

  if(m_proposedHasBeenSet)
  {
   XmlNode proposedNode = parentNode.CreateChildElement("Proposed");
   m_proposed.AddToNode(proposedNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
