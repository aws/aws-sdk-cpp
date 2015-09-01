/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/ContextEntryResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ContextEntryResult::ContextEntryResult() : 
    m_contextKeyNameHasBeenSet(false)
{
}

ContextEntryResult::ContextEntryResult(const XmlNode& xmlNode) : 
    m_contextKeyNameHasBeenSet(false)
{
  *this = xmlNode;
}

ContextEntryResult& ContextEntryResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode contextKeyNameNode = resultNode.FirstChild("ContextKeyName");
    if(contextKeyNameNode.IsNull())
    {
      contextKeyNameNode = resultNode;
    }

    if(!contextKeyNameNode.IsNull())
    {
      m_contextKeyName = StringUtils::Trim(contextKeyNameNode.GetText().c_str());
      m_contextKeyNameHasBeenSet = true;
    }
  }

  return *this;
}

void ContextEntryResult::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_contextKeyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ContextKeyName=" << StringUtils::URLEncode(m_contextKeyName.c_str()) << "&";
  }
}

void ContextEntryResult::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_contextKeyNameHasBeenSet)
  {
      oStream << location << ".ContextKeyName=" << StringUtils::URLEncode(m_contextKeyName.c_str()) << "&";
  }
}
