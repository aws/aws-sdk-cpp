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

#include <aws/s3control/model/JobOperation.h>
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

JobOperation::JobOperation() : 
    m_lambdaInvokeHasBeenSet(false),
    m_s3PutObjectCopyHasBeenSet(false),
    m_s3PutObjectAclHasBeenSet(false),
    m_s3PutObjectTaggingHasBeenSet(false),
    m_s3InitiateRestoreObjectHasBeenSet(false)
{
}

JobOperation::JobOperation(const XmlNode& xmlNode) : 
    m_lambdaInvokeHasBeenSet(false),
    m_s3PutObjectCopyHasBeenSet(false),
    m_s3PutObjectAclHasBeenSet(false),
    m_s3PutObjectTaggingHasBeenSet(false),
    m_s3InitiateRestoreObjectHasBeenSet(false)
{
  *this = xmlNode;
}

JobOperation& JobOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lambdaInvokeNode = resultNode.FirstChild("LambdaInvoke");
    if(!lambdaInvokeNode.IsNull())
    {
      m_lambdaInvoke = lambdaInvokeNode;
      m_lambdaInvokeHasBeenSet = true;
    }
    XmlNode s3PutObjectCopyNode = resultNode.FirstChild("S3PutObjectCopy");
    if(!s3PutObjectCopyNode.IsNull())
    {
      m_s3PutObjectCopy = s3PutObjectCopyNode;
      m_s3PutObjectCopyHasBeenSet = true;
    }
    XmlNode s3PutObjectAclNode = resultNode.FirstChild("S3PutObjectAcl");
    if(!s3PutObjectAclNode.IsNull())
    {
      m_s3PutObjectAcl = s3PutObjectAclNode;
      m_s3PutObjectAclHasBeenSet = true;
    }
    XmlNode s3PutObjectTaggingNode = resultNode.FirstChild("S3PutObjectTagging");
    if(!s3PutObjectTaggingNode.IsNull())
    {
      m_s3PutObjectTagging = s3PutObjectTaggingNode;
      m_s3PutObjectTaggingHasBeenSet = true;
    }
    XmlNode s3InitiateRestoreObjectNode = resultNode.FirstChild("S3InitiateRestoreObject");
    if(!s3InitiateRestoreObjectNode.IsNull())
    {
      m_s3InitiateRestoreObject = s3InitiateRestoreObjectNode;
      m_s3InitiateRestoreObjectHasBeenSet = true;
    }
  }

  return *this;
}

void JobOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_lambdaInvokeHasBeenSet)
  {
   XmlNode lambdaInvokeNode = parentNode.CreateChildElement("LambdaInvoke");
   m_lambdaInvoke.AddToNode(lambdaInvokeNode);
  }

  if(m_s3PutObjectCopyHasBeenSet)
  {
   XmlNode s3PutObjectCopyNode = parentNode.CreateChildElement("S3PutObjectCopy");
   m_s3PutObjectCopy.AddToNode(s3PutObjectCopyNode);
  }

  if(m_s3PutObjectAclHasBeenSet)
  {
   XmlNode s3PutObjectAclNode = parentNode.CreateChildElement("S3PutObjectAcl");
   m_s3PutObjectAcl.AddToNode(s3PutObjectAclNode);
  }

  if(m_s3PutObjectTaggingHasBeenSet)
  {
   XmlNode s3PutObjectTaggingNode = parentNode.CreateChildElement("S3PutObjectTagging");
   m_s3PutObjectTagging.AddToNode(s3PutObjectTaggingNode);
  }

  if(m_s3InitiateRestoreObjectHasBeenSet)
  {
   XmlNode s3InitiateRestoreObjectNode = parentNode.CreateChildElement("S3InitiateRestoreObject");
   m_s3InitiateRestoreObject.AddToNode(s3InitiateRestoreObjectNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
