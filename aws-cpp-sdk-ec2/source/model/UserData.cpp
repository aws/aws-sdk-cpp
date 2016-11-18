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
#include <aws/ec2/model/UserData.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

UserData::UserData() : 
    m_dataHasBeenSet(false)
{
}

UserData::UserData(const XmlNode& xmlNode) : 
    m_dataHasBeenSet(false)
{
  *this = xmlNode;
}

UserData& UserData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dataNode = resultNode.FirstChild("data");
    if(!dataNode.IsNull())
    {
      m_data = StringUtils::Trim(dataNode.GetText().c_str());
      m_dataHasBeenSet = true;
    }
  }

  return *this;
}

void UserData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dataHasBeenSet)
  {
      oStream << location << index << locationValue << ".Data=" << StringUtils::URLEncode(m_data.c_str()) << "&";
  }

}

void UserData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dataHasBeenSet)
  {
      oStream << location << ".Data=" << StringUtils::URLEncode(m_data.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
