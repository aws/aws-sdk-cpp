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

#include <aws/elasticbeanstalk/model/EnvironmentInfoDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

EnvironmentInfoDescription::EnvironmentInfoDescription() : 
    m_infoType(EnvironmentInfoType::NOT_SET),
    m_infoTypeHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_sampleTimestampHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

EnvironmentInfoDescription::EnvironmentInfoDescription(const XmlNode& xmlNode) : 
    m_infoType(EnvironmentInfoType::NOT_SET),
    m_infoTypeHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_sampleTimestampHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = xmlNode;
}

EnvironmentInfoDescription& EnvironmentInfoDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode infoTypeNode = resultNode.FirstChild("InfoType");
    if(!infoTypeNode.IsNull())
    {
      m_infoType = EnvironmentInfoTypeMapper::GetEnvironmentInfoTypeForName(StringUtils::Trim(infoTypeNode.GetText().c_str()).c_str());
      m_infoTypeHasBeenSet = true;
    }
    XmlNode ec2InstanceIdNode = resultNode.FirstChild("Ec2InstanceId");
    if(!ec2InstanceIdNode.IsNull())
    {
      m_ec2InstanceId = ec2InstanceIdNode.GetText();
      m_ec2InstanceIdHasBeenSet = true;
    }
    XmlNode sampleTimestampNode = resultNode.FirstChild("SampleTimestamp");
    if(!sampleTimestampNode.IsNull())
    {
      m_sampleTimestamp = DateTime(StringUtils::Trim(sampleTimestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_sampleTimestampHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = messageNode.GetText();
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void EnvironmentInfoDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_infoTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InfoType=" << EnvironmentInfoTypeMapper::GetNameForEnvironmentInfoType(m_infoType) << "&";
  }

  if(m_ec2InstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ec2InstanceId=" << StringUtils::URLEncode(m_ec2InstanceId.c_str()) << "&";
  }

  if(m_sampleTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".SampleTimestamp=" << StringUtils::URLEncode(m_sampleTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

}

void EnvironmentInfoDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_infoTypeHasBeenSet)
  {
      oStream << location << ".InfoType=" << EnvironmentInfoTypeMapper::GetNameForEnvironmentInfoType(m_infoType) << "&";
  }
  if(m_ec2InstanceIdHasBeenSet)
  {
      oStream << location << ".Ec2InstanceId=" << StringUtils::URLEncode(m_ec2InstanceId.c_str()) << "&";
  }
  if(m_sampleTimestampHasBeenSet)
  {
      oStream << location << ".SampleTimestamp=" << StringUtils::URLEncode(m_sampleTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
