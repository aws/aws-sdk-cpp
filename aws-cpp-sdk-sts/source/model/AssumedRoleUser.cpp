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
#include <aws/sts/model/AssumedRoleUser.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

AssumedRoleUser::AssumedRoleUser()
{
}

AssumedRoleUser::AssumedRoleUser(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AssumedRoleUser& AssumedRoleUser::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode assumedRoleIdNode = resultNode.FirstChild("AssumedRoleId");
    m_assumedRoleId = StringUtils::Trim(assumedRoleIdNode.GetText().c_str());
    XmlNode arnNode = resultNode.FirstChild("Arn");
    m_arn = StringUtils::Trim(arnNode.GetText().c_str());
  }

  return *this;
}

void AssumedRoleUser::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".AssumedRoleId=" << StringUtils::URLEncode(m_assumedRoleId.c_str()) << "&";
  oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
}

void AssumedRoleUser::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".AssumedRoleId=" << StringUtils::URLEncode(m_assumedRoleId.c_str()) << "&";
  oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
}
