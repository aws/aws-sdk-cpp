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
#include <aws/iam/model/ContextEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ContextEntry::ContextEntry() : 
    m_contextKeyNameHasBeenSet(false),
    m_contextKeyValuesHasBeenSet(false),
    m_contextValueHasBeenSet(false)
{
}

ContextEntry::ContextEntry(const XmlNode& xmlNode) : 
    m_contextKeyNameHasBeenSet(false),
    m_contextKeyValuesHasBeenSet(false),
    m_contextValueHasBeenSet(false)
{
  *this = xmlNode;
}

ContextEntry& ContextEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode contextKeyNameNode = resultNode.FirstChild("ContextKeyName");
    if(!contextKeyNameNode.IsNull())
    {
      m_contextKeyName = StringUtils::Trim(contextKeyNameNode.GetText().c_str());
      m_contextKeyNameHasBeenSet = true;
    }
    XmlNode contextKeyValuesNodeParent = resultNode.FirstChild("ContextKeyValues");
    XmlNode contextKeyValuesNode = contextKeyValuesNodeParent.FirstChild("member");
    if(!contextKeyValuesNode.IsNull())
    {
      while(!contextKeyValuesNode.IsNull())
      {
        m_contextKeyValues.push_back(StringUtils::Trim(contextKeyValuesNode.GetText().c_str()));
        contextKeyValuesNode = contextKeyValuesNode.NextNode("member");
      }

      m_contextKeyValuesHasBeenSet = true;
    }
    XmlNode contextValueNode = resultNode.FirstChild("ContextValue");
    if(!contextKeyValuesNode.IsNull())
    {
      m_contextValue = ContextValueTypeMapper::GetContextValueTypeForName(StringUtils::Trim(contextValueNode.GetText().c_str()).c_str());
      m_contextValueHasBeenSet = true;
    }
  }

  return *this;
}

void ContextEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_contextKeyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ContextKeyName=" << StringUtils::URLEncode(m_contextKeyName.c_str()) << "&";
  }
  if(m_contextKeyValuesHasBeenSet)
  {
      for(auto& item : m_contextKeyValues)
      {
        oStream << location << index << locationValue << ".ContextKeyValues=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_contextValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".ContextValue=" << ContextValueTypeMapper::GetNameForContextValueType(m_contextValue) << "&";
  }
}

void ContextEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_contextKeyNameHasBeenSet)
  {
      oStream << location << ".ContextKeyName=" << StringUtils::URLEncode(m_contextKeyName.c_str()) << "&";
  }
  if(m_contextKeyValuesHasBeenSet)
  {
      for(auto& item : m_contextKeyValues)
      {
        oStream << location << ".ContextKeyValues=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_contextValueHasBeenSet)
  {
      oStream << location << ".ContextValue=" << ContextValueTypeMapper::GetNameForContextValueType(m_contextValue) << "&";
  }
}
