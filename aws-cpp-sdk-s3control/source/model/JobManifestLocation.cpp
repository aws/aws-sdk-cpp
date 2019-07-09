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
      m_objectArn = objectArnNode.GetText();
      m_objectArnHasBeenSet = true;
    }
    XmlNode objectVersionIdNode = resultNode.FirstChild("ObjectVersionId");
    if(!objectVersionIdNode.IsNull())
    {
      m_objectVersionId = objectVersionIdNode.GetText();
      m_objectVersionIdHasBeenSet = true;
    }
    XmlNode eTagNode = resultNode.FirstChild("ETag");
    if(!eTagNode.IsNull())
    {
      m_eTag = eTagNode.GetText();
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
