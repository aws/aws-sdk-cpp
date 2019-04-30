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

#include <aws/s3control/model/S3AccessControlPolicy.h>
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

S3AccessControlPolicy::S3AccessControlPolicy() : 
    m_accessControlListHasBeenSet(false),
    m_cannedAccessControlList(S3CannedAccessControlList::NOT_SET),
    m_cannedAccessControlListHasBeenSet(false)
{
}

S3AccessControlPolicy::S3AccessControlPolicy(const XmlNode& xmlNode) : 
    m_accessControlListHasBeenSet(false),
    m_cannedAccessControlList(S3CannedAccessControlList::NOT_SET),
    m_cannedAccessControlListHasBeenSet(false)
{
  *this = xmlNode;
}

S3AccessControlPolicy& S3AccessControlPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accessControlListNode = resultNode.FirstChild("AccessControlList");
    if(!accessControlListNode.IsNull())
    {
      m_accessControlList = accessControlListNode;
      m_accessControlListHasBeenSet = true;
    }
    XmlNode cannedAccessControlListNode = resultNode.FirstChild("CannedAccessControlList");
    if(!cannedAccessControlListNode.IsNull())
    {
      m_cannedAccessControlList = S3CannedAccessControlListMapper::GetS3CannedAccessControlListForName(StringUtils::Trim(cannedAccessControlListNode.GetText().c_str()).c_str());
      m_cannedAccessControlListHasBeenSet = true;
    }
  }

  return *this;
}

void S3AccessControlPolicy::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_accessControlListHasBeenSet)
  {
   XmlNode accessControlListNode = parentNode.CreateChildElement("AccessControlList");
   m_accessControlList.AddToNode(accessControlListNode);
  }

  if(m_cannedAccessControlListHasBeenSet)
  {
   XmlNode cannedAccessControlListNode = parentNode.CreateChildElement("CannedAccessControlList");
   cannedAccessControlListNode.SetText(S3CannedAccessControlListMapper::GetNameForS3CannedAccessControlList(m_cannedAccessControlList));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
