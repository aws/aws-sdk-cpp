/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobManifestLocation.h>
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

JobManifestLocation::JobManifestLocation() : 
    m_objectArnHasBeenSet(false),
    m_objectVersionIdHasBeenSet(false),
    m_eTagHasBeenSet(false)
{
}

JobManifestLocation::JobManifestLocation(const XmlNode& xmlNode) : 
    m_objectArnHasBeenSet(false),
    m_objectVersionIdHasBeenSet(false),
    m_eTagHasBeenSet(false)
{
  *this = xmlNode;
}

JobManifestLocation& JobManifestLocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode objectArnNode = resultNode.FirstChild("ObjectArn");
    if(!objectArnNode.IsNull())
    {
      m_objectArn = Aws::Utils::Xml::DecodeEscapedXmlText(objectArnNode.GetText());
      m_objectArnHasBeenSet = true;
    }
    XmlNode objectVersionIdNode = resultNode.FirstChild("ObjectVersionId");
    if(!objectVersionIdNode.IsNull())
    {
      m_objectVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(objectVersionIdNode.GetText());
      m_objectVersionIdHasBeenSet = true;
    }
    XmlNode eTagNode = resultNode.FirstChild("ETag");
    if(!eTagNode.IsNull())
    {
      m_eTag = Aws::Utils::Xml::DecodeEscapedXmlText(eTagNode.GetText());
      m_eTagHasBeenSet = true;
    }
  }

  return *this;
}

void JobManifestLocation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_objectArnHasBeenSet)
  {
   XmlNode objectArnNode = parentNode.CreateChildElement("ObjectArn");
   objectArnNode.SetText(m_objectArn);
  }

  if(m_objectVersionIdHasBeenSet)
  {
   XmlNode objectVersionIdNode = parentNode.CreateChildElement("ObjectVersionId");
   objectVersionIdNode.SetText(m_objectVersionId);
  }

  if(m_eTagHasBeenSet)
  {
   XmlNode eTagNode = parentNode.CreateChildElement("ETag");
   eTagNode.SetText(m_eTag);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
