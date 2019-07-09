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

#include <aws/sts/model/AssumedRoleUser.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace STS
{
namespace Model
{

AssumedRoleUser::AssumedRoleUser() : 
    m_assumedRoleIdHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

AssumedRoleUser::AssumedRoleUser(const XmlNode& xmlNode) : 
    m_assumedRoleIdHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = xmlNode;
}

AssumedRoleUser& AssumedRoleUser::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode assumedRoleIdNode = resultNode.FirstChild("AssumedRoleId");
    if(!assumedRoleIdNode.IsNull())
    {
      m_assumedRoleId = assumedRoleIdNode.GetText();
      m_assumedRoleIdHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = arnNode.GetText();
      m_arnHasBeenSet = true;
    }
  }

  return *this;
}

void AssumedRoleUser::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_assumedRoleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssumedRoleId=" << StringUtils::URLEncode(m_assumedRoleId.c_str()) << "&";
  }

  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

}

void AssumedRoleUser::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_assumedRoleIdHasBeenSet)
  {
      oStream << location << ".AssumedRoleId=" << StringUtils::URLEncode(m_assumedRoleId.c_str()) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace STS
} // namespace Aws
