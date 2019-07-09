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

#include <aws/s3control/model/S3Grantee.h>
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

S3Grantee::S3Grantee() : 
    m_typeIdentifier(S3GranteeTypeIdentifier::NOT_SET),
    m_typeIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

S3Grantee::S3Grantee(const XmlNode& xmlNode) : 
    m_typeIdentifier(S3GranteeTypeIdentifier::NOT_SET),
    m_typeIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
  *this = xmlNode;
}

S3Grantee& S3Grantee::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeIdentifierNode = resultNode.FirstChild("TypeIdentifier");
    if(!typeIdentifierNode.IsNull())
    {
      m_typeIdentifier = S3GranteeTypeIdentifierMapper::GetS3GranteeTypeIdentifierForName(StringUtils::Trim(typeIdentifierNode.GetText().c_str()).c_str());
      m_typeIdentifierHasBeenSet = true;
    }
    XmlNode identifierNode = resultNode.FirstChild("Identifier");
    if(!identifierNode.IsNull())
    {
      m_identifier = identifierNode.GetText();
      m_identifierHasBeenSet = true;
    }
    XmlNode displayNameNode = resultNode.FirstChild("DisplayName");
    if(!displayNameNode.IsNull())
    {
      m_displayName = displayNameNode.GetText();
      m_displayNameHasBeenSet = true;
    }
  }

  return *this;
}

void S3Grantee::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_typeIdentifierHasBeenSet)
  {
   XmlNode typeIdentifierNode = parentNode.CreateChildElement("TypeIdentifier");
   typeIdentifierNode.SetText(S3GranteeTypeIdentifierMapper::GetNameForS3GranteeTypeIdentifier(m_typeIdentifier));
  }

  if(m_identifierHasBeenSet)
  {
   XmlNode identifierNode = parentNode.CreateChildElement("Identifier");
   identifierNode.SetText(m_identifier);
  }

  if(m_displayNameHasBeenSet)
  {
   XmlNode displayNameNode = parentNode.CreateChildElement("DisplayName");
   displayNameNode.SetText(m_displayName);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
