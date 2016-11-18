﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/Condition.h>
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

Condition::Condition() : 
    m_httpErrorCodeReturnedEqualsHasBeenSet(false),
    m_keyPrefixEqualsHasBeenSet(false)
{
}

Condition::Condition(const XmlNode& xmlNode) : 
    m_httpErrorCodeReturnedEqualsHasBeenSet(false),
    m_keyPrefixEqualsHasBeenSet(false)
{
  *this = xmlNode;
}

Condition& Condition::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode httpErrorCodeReturnedEqualsNode = resultNode.FirstChild("HttpErrorCodeReturnedEquals");
    if(!httpErrorCodeReturnedEqualsNode.IsNull())
    {
      m_httpErrorCodeReturnedEquals = StringUtils::Trim(httpErrorCodeReturnedEqualsNode.GetText().c_str());
      m_httpErrorCodeReturnedEqualsHasBeenSet = true;
    }
    XmlNode keyPrefixEqualsNode = resultNode.FirstChild("KeyPrefixEquals");
    if(!keyPrefixEqualsNode.IsNull())
    {
      m_keyPrefixEquals = StringUtils::Trim(keyPrefixEqualsNode.GetText().c_str());
      m_keyPrefixEqualsHasBeenSet = true;
    }
  }

  return *this;
}

void Condition::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_httpErrorCodeReturnedEqualsHasBeenSet)
  {
   XmlNode httpErrorCodeReturnedEqualsNode = parentNode.CreateChildElement("HttpErrorCodeReturnedEquals");
   httpErrorCodeReturnedEqualsNode.SetText(m_httpErrorCodeReturnedEquals);
  }

  if(m_keyPrefixEqualsHasBeenSet)
  {
   XmlNode keyPrefixEqualsNode = parentNode.CreateChildElement("KeyPrefixEquals");
   keyPrefixEqualsNode.SetText(m_keyPrefixEquals);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
