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
#include <aws/rds/model/CharacterSet.h>
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

CharacterSet::CharacterSet() : 
    m_characterSetNameHasBeenSet(false),
    m_characterSetDescriptionHasBeenSet(false)
{
}

CharacterSet::CharacterSet(const XmlNode& xmlNode) : 
    m_characterSetNameHasBeenSet(false),
    m_characterSetDescriptionHasBeenSet(false)
{
  *this = xmlNode;
}

CharacterSet& CharacterSet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode characterSetNameNode = resultNode.FirstChild("CharacterSetName");
    if(!characterSetNameNode.IsNull())
    {
      m_characterSetName = StringUtils::Trim(characterSetNameNode.GetText().c_str());
      m_characterSetNameHasBeenSet = true;
    }
    XmlNode characterSetDescriptionNode = resultNode.FirstChild("CharacterSetDescription");
    if(!characterSetDescriptionNode.IsNull())
    {
      m_characterSetDescription = StringUtils::Trim(characterSetDescriptionNode.GetText().c_str());
      m_characterSetDescriptionHasBeenSet = true;
    }
  }

  return *this;
}

void CharacterSet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }

  if(m_characterSetDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".CharacterSetDescription=" << StringUtils::URLEncode(m_characterSetDescription.c_str()) << "&";
  }

}

void CharacterSet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }
  if(m_characterSetDescriptionHasBeenSet)
  {
      oStream << location << ".CharacterSetDescription=" << StringUtils::URLEncode(m_characterSetDescription.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
