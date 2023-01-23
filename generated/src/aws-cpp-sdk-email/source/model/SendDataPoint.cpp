/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SendDataPoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

SendDataPoint::SendDataPoint() : 
    m_timestampHasBeenSet(false),
    m_deliveryAttempts(0),
    m_deliveryAttemptsHasBeenSet(false),
    m_bounces(0),
    m_bouncesHasBeenSet(false),
    m_complaints(0),
    m_complaintsHasBeenSet(false),
    m_rejects(0),
    m_rejectsHasBeenSet(false)
{
}

SendDataPoint::SendDataPoint(const XmlNode& xmlNode) : 
    m_timestampHasBeenSet(false),
    m_deliveryAttempts(0),
    m_deliveryAttemptsHasBeenSet(false),
    m_bounces(0),
    m_bouncesHasBeenSet(false),
    m_complaints(0),
    m_complaintsHasBeenSet(false),
    m_rejects(0),
    m_rejectsHasBeenSet(false)
{
  *this = xmlNode;
}

SendDataPoint& SendDataPoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode deliveryAttemptsNode = resultNode.FirstChild("DeliveryAttempts");
    if(!deliveryAttemptsNode.IsNull())
    {
      m_deliveryAttempts = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deliveryAttemptsNode.GetText()).c_str()).c_str());
      m_deliveryAttemptsHasBeenSet = true;
    }
    XmlNode bouncesNode = resultNode.FirstChild("Bounces");
    if(!bouncesNode.IsNull())
    {
      m_bounces = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bouncesNode.GetText()).c_str()).c_str());
      m_bouncesHasBeenSet = true;
    }
    XmlNode complaintsNode = resultNode.FirstChild("Complaints");
    if(!complaintsNode.IsNull())
    {
      m_complaints = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(complaintsNode.GetText()).c_str()).c_str());
      m_complaintsHasBeenSet = true;
    }
    XmlNode rejectsNode = resultNode.FirstChild("Rejects");
    if(!rejectsNode.IsNull())
    {
      m_rejects = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(rejectsNode.GetText()).c_str()).c_str());
      m_rejectsHasBeenSet = true;
    }
  }

  return *this;
}

void SendDataPoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deliveryAttemptsHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliveryAttempts=" << m_deliveryAttempts << "&";
  }

  if(m_bouncesHasBeenSet)
  {
      oStream << location << index << locationValue << ".Bounces=" << m_bounces << "&";
  }

  if(m_complaintsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Complaints=" << m_complaints << "&";
  }

  if(m_rejectsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Rejects=" << m_rejects << "&";
  }

}

void SendDataPoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deliveryAttemptsHasBeenSet)
  {
      oStream << location << ".DeliveryAttempts=" << m_deliveryAttempts << "&";
  }
  if(m_bouncesHasBeenSet)
  {
      oStream << location << ".Bounces=" << m_bounces << "&";
  }
  if(m_complaintsHasBeenSet)
  {
      oStream << location << ".Complaints=" << m_complaints << "&";
  }
  if(m_rejectsHasBeenSet)
  {
      oStream << location << ".Rejects=" << m_rejects << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
