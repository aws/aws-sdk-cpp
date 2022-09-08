/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricDataResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

MetricDataResult::MetricDataResult() : 
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_statusCode(StatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_messagesHasBeenSet(false)
{
}

MetricDataResult::MetricDataResult(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_statusCode(StatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_messagesHasBeenSet(false)
{
  *this = xmlNode;
}

MetricDataResult& MetricDataResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode labelNode = resultNode.FirstChild("Label");
    if(!labelNode.IsNull())
    {
      m_label = Aws::Utils::Xml::DecodeEscapedXmlText(labelNode.GetText());
      m_labelHasBeenSet = true;
    }
    XmlNode timestampsNode = resultNode.FirstChild("Timestamps");
    if(!timestampsNode.IsNull())
    {
      XmlNode timestampsMember = timestampsNode.FirstChild("member");
      while(!timestampsMember.IsNull())
      {
        m_timestamps.push_back(DateTime(StringUtils::Trim(timestampsMember.GetText().c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601));
        timestampsMember = timestampsMember.NextNode("member");
      }

      m_timestampsHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      while(!valuesMember.IsNull())
      {
         m_values.push_back(StringUtils::ConvertToDouble(StringUtils::Trim(valuesMember.GetText().c_str()).c_str()));
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
    XmlNode statusCodeNode = resultNode.FirstChild("StatusCode");
    if(!statusCodeNode.IsNull())
    {
      m_statusCode = StatusCodeMapper::GetStatusCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusCodeNode.GetText()).c_str()).c_str());
      m_statusCodeHasBeenSet = true;
    }
    XmlNode messagesNode = resultNode.FirstChild("Messages");
    if(!messagesNode.IsNull())
    {
      XmlNode messagesMember = messagesNode.FirstChild("member");
      while(!messagesMember.IsNull())
      {
        m_messages.push_back(messagesMember);
        messagesMember = messagesMember.NextNode("member");
      }

      m_messagesHasBeenSet = true;
    }
  }

  return *this;
}

void MetricDataResult::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_labelHasBeenSet)
  {
      oStream << location << index << locationValue << ".Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }

  if(m_timestampsHasBeenSet)
  {
      unsigned timestampsIdx = 1;
      for(auto& item : m_timestamps)
      {
        oStream << location << index << locationValue << ".Timestamps.member." << timestampsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
      }
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }

  if(m_statusCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusCode=" << StatusCodeMapper::GetNameForStatusCode(m_statusCode) << "&";
  }

  if(m_messagesHasBeenSet)
  {
      unsigned messagesIdx = 1;
      for(auto& item : m_messages)
      {
        Aws::StringStream messagesSs;
        messagesSs << location << index << locationValue << ".Messages.member." << messagesIdx++;
        item.OutputToStream(oStream, messagesSs.str().c_str());
      }
  }

}

void MetricDataResult::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_labelHasBeenSet)
  {
      oStream << location << ".Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }
  if(m_timestampsHasBeenSet)
  {
      unsigned timestampsIdx = 1;
      for(auto& item : m_timestamps)
      {
        oStream << location << ".Timestamps.member." << timestampsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
      }
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
          oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item) << "&";
      }
  }
  if(m_statusCodeHasBeenSet)
  {
      oStream << location << ".StatusCode=" << StatusCodeMapper::GetNameForStatusCode(m_statusCode) << "&";
  }
  if(m_messagesHasBeenSet)
  {
      unsigned messagesIdx = 1;
      for(auto& item : m_messages)
      {
        Aws::StringStream messagesSs;
        messagesSs << location <<  ".Messages.member." << messagesIdx++;
        item.OutputToStream(oStream, messagesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
