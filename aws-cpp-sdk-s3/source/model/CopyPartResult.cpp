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
#include <aws/s3/model/CopyPartResult.h>
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

CopyPartResult::CopyPartResult() : 
    m_eTagHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
}

CopyPartResult::CopyPartResult(const XmlNode& xmlNode) : 
    m_eTagHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
  *this = xmlNode;
}

CopyPartResult& CopyPartResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode eTagNode = resultNode.FirstChild("ETag");
    if(!eTagNode.IsNull())
    {
      m_eTag = StringUtils::Trim(eTagNode.GetText().c_str());
      m_eTagHasBeenSet = true;
    }
    XmlNode lastModifiedNode = resultNode.FirstChild("LastModified");
    if(!lastModifiedNode.IsNull())
    {
      m_lastModified = DateTime(StringUtils::Trim(lastModifiedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastModifiedHasBeenSet = true;
    }
  }

  return *this;
}

void CopyPartResult::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_eTagHasBeenSet)
  {
   XmlNode eTagNode = parentNode.CreateChildElement("ETag");
   eTagNode.SetText(m_eTag);
  }

  if(m_lastModifiedHasBeenSet)
  {
     XmlNode lastModifiedNode = parentNode.CreateChildElement("LastModified");
     lastModifiedNode.SetText(m_lastModified.ToGmtString(DateFormat::ISO_8601));
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
