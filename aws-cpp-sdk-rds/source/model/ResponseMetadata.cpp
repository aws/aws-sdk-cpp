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
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

ResponseMetadata::ResponseMetadata() : 
    m_requestIdHasBeenSet(false)
{
}

ResponseMetadata::ResponseMetadata(const XmlNode& xmlNode) : 
    m_requestIdHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseMetadata& ResponseMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode requestIdNode = resultNode.FirstChild("RequestId");
    if(!requestIdNode.IsNull())
    {
      m_requestId = StringUtils::Trim(requestIdNode.GetText().c_str());
      m_requestIdHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseMetadata::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_requestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestId=" << StringUtils::URLEncode(m_requestId.c_str()) << "&";
  }

}

void ResponseMetadata::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_requestIdHasBeenSet)
  {
      oStream << location << ".RequestId=" << StringUtils::URLEncode(m_requestId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
