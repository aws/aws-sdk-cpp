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
#include <aws/ec2/model/InstanceStatusDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

InstanceStatusDetails::InstanceStatusDetails() : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_impairedSince(0.0),
    m_impairedSinceHasBeenSet(false)
{
}

InstanceStatusDetails::InstanceStatusDetails(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_impairedSince(0.0),
    m_impairedSinceHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStatusDetails& InstanceStatusDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = StatusNameMapper::GetStatusNameForName(StringUtils::Trim(nameNode.GetText().c_str()).c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = StatusTypeMapper::GetStatusTypeForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode impairedSinceNode = resultNode.FirstChild("impairedSince");
    if(!impairedSinceNode.IsNull())
    {
      m_impairedSince = StringUtils::ConvertToDouble(StringUtils::Trim(impairedSinceNode.GetText().c_str()).c_str());
      m_impairedSinceHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StatusNameMapper::GetNameForStatusName(m_name) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }
  if(m_impairedSinceHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImpairedSince=" << m_impairedSince << "&";
  }
}

void InstanceStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StatusNameMapper::GetNameForStatusName(m_name) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }
  if(m_impairedSinceHasBeenSet)
  {
      oStream << location << ".ImpairedSince=" << m_impairedSince << "&";
  }
}
