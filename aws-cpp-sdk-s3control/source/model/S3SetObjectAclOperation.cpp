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

#include <aws/s3control/model/S3SetObjectAclOperation.h>
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

S3SetObjectAclOperation::S3SetObjectAclOperation() : 
    m_accessControlPolicyHasBeenSet(false)
{
}

S3SetObjectAclOperation::S3SetObjectAclOperation(const XmlNode& xmlNode) : 
    m_accessControlPolicyHasBeenSet(false)
{
  *this = xmlNode;
}

S3SetObjectAclOperation& S3SetObjectAclOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accessControlPolicyNode = resultNode.FirstChild("AccessControlPolicy");
    if(!accessControlPolicyNode.IsNull())
    {
      m_accessControlPolicy = accessControlPolicyNode;
      m_accessControlPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void S3SetObjectAclOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_accessControlPolicyHasBeenSet)
  {
   XmlNode accessControlPolicyNode = parentNode.CreateChildElement("AccessControlPolicy");
   m_accessControlPolicy.AddToNode(accessControlPolicyNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
