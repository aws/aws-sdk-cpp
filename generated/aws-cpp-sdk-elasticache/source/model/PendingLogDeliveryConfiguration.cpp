/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/PendingLogDeliveryConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

PendingLogDeliveryConfiguration::PendingLogDeliveryConfiguration() : 
    m_logType(LogType::NOT_SET),
    m_logTypeHasBeenSet(false),
    m_destinationType(DestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_destinationDetailsHasBeenSet(false),
    m_logFormat(LogFormat::NOT_SET),
    m_logFormatHasBeenSet(false)
{
}

PendingLogDeliveryConfiguration::PendingLogDeliveryConfiguration(const XmlNode& xmlNode) : 
    m_logType(LogType::NOT_SET),
    m_logTypeHasBeenSet(false),
    m_destinationType(DestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_destinationDetailsHasBeenSet(false),
    m_logFormat(LogFormat::NOT_SET),
    m_logFormatHasBeenSet(false)
{
  *this = xmlNode;
}

PendingLogDeliveryConfiguration& PendingLogDeliveryConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logTypeNode = resultNode.FirstChild("LogType");
    if(!logTypeNode.IsNull())
    {
      m_logType = LogTypeMapper::GetLogTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(logTypeNode.GetText()).c_str()).c_str());
      m_logTypeHasBeenSet = true;
    }
    XmlNode destinationTypeNode = resultNode.FirstChild("DestinationType");
    if(!destinationTypeNode.IsNull())
    {
      m_destinationType = DestinationTypeMapper::GetDestinationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(destinationTypeNode.GetText()).c_str()).c_str());
      m_destinationTypeHasBeenSet = true;
    }
    XmlNode destinationDetailsNode = resultNode.FirstChild("DestinationDetails");
    if(!destinationDetailsNode.IsNull())
    {
      m_destinationDetails = destinationDetailsNode;
      m_destinationDetailsHasBeenSet = true;
    }
    XmlNode logFormatNode = resultNode.FirstChild("LogFormat");
    if(!logFormatNode.IsNull())
    {
      m_logFormat = LogFormatMapper::GetLogFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(logFormatNode.GetText()).c_str()).c_str());
      m_logFormatHasBeenSet = true;
    }
  }

  return *this;
}

void PendingLogDeliveryConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogType=" << LogTypeMapper::GetNameForLogType(m_logType) << "&";
  }

  if(m_destinationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationType=" << DestinationTypeMapper::GetNameForDestinationType(m_destinationType) << "&";
  }

  if(m_destinationDetailsHasBeenSet)
  {
      Aws::StringStream destinationDetailsLocationAndMemberSs;
      destinationDetailsLocationAndMemberSs << location << index << locationValue << ".DestinationDetails";
      m_destinationDetails.OutputToStream(oStream, destinationDetailsLocationAndMemberSs.str().c_str());
  }

  if(m_logFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogFormat=" << LogFormatMapper::GetNameForLogFormat(m_logFormat) << "&";
  }

}

void PendingLogDeliveryConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logTypeHasBeenSet)
  {
      oStream << location << ".LogType=" << LogTypeMapper::GetNameForLogType(m_logType) << "&";
  }
  if(m_destinationTypeHasBeenSet)
  {
      oStream << location << ".DestinationType=" << DestinationTypeMapper::GetNameForDestinationType(m_destinationType) << "&";
  }
  if(m_destinationDetailsHasBeenSet)
  {
      Aws::String destinationDetailsLocationAndMember(location);
      destinationDetailsLocationAndMember += ".DestinationDetails";
      m_destinationDetails.OutputToStream(oStream, destinationDetailsLocationAndMember.c_str());
  }
  if(m_logFormatHasBeenSet)
  {
      oStream << location << ".LogFormat=" << LogFormatMapper::GetNameForLogFormat(m_logFormat) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
