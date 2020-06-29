/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/SourceSelectionCriteria.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

SourceSelectionCriteria::SourceSelectionCriteria() : 
    m_sseKmsEncryptedObjectsHasBeenSet(false)
{
}

SourceSelectionCriteria::SourceSelectionCriteria(const XmlNode& xmlNode) : 
    m_sseKmsEncryptedObjectsHasBeenSet(false)
{
  *this = xmlNode;
}

SourceSelectionCriteria& SourceSelectionCriteria::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sseKmsEncryptedObjectsNode = resultNode.FirstChild("SseKmsEncryptedObjects");
    if(!sseKmsEncryptedObjectsNode.IsNull())
    {
      m_sseKmsEncryptedObjects = sseKmsEncryptedObjectsNode;
      m_sseKmsEncryptedObjectsHasBeenSet = true;
    }
  }

  return *this;
}

void SourceSelectionCriteria::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_sseKmsEncryptedObjectsHasBeenSet)
  {
   XmlNode sseKmsEncryptedObjectsNode = parentNode.CreateChildElement("SseKmsEncryptedObjects");
   m_sseKmsEncryptedObjects.AddToNode(sseKmsEncryptedObjectsNode);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
