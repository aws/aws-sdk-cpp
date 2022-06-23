/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MultiRegionAccessPointRegionalResponse.h>
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

MultiRegionAccessPointRegionalResponse::MultiRegionAccessPointRegionalResponse() : 
    m_nameHasBeenSet(false),
    m_requestStatusHasBeenSet(false)
{
}

MultiRegionAccessPointRegionalResponse::MultiRegionAccessPointRegionalResponse(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_requestStatusHasBeenSet(false)
{
  *this = xmlNode;
}

MultiRegionAccessPointRegionalResponse& MultiRegionAccessPointRegionalResponse::operator =(const XmlNode& xmlNode)
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
    XmlNode requestStatusNode = resultNode.FirstChild("RequestStatus");
    if(!requestStatusNode.IsNull())
    {
      m_requestStatus = Aws::Utils::Xml::DecodeEscapedXmlText(requestStatusNode.GetText());
      m_requestStatusHasBeenSet = true;
    }
  }

  return *this;
}

void MultiRegionAccessPointRegionalResponse::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_requestStatusHasBeenSet)
  {
   XmlNode requestStatusNode = parentNode.CreateChildElement("RequestStatus");
   requestStatusNode.SetText(m_requestStatus);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
