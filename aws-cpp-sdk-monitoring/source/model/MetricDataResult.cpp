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
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode labelNode = resultNode.FirstChild("Label");
    if(!labelNode.IsNull())
    {
      m_label = labelNode.GetText();
      m_labelHasBeenSet = true;
    }
    XmlNode timestampsNode = resultNode.FirstChild("Timestamps");
    if(!timestampsNode.IsNull())
    {
      XmlNode timestampsMember = timestampsNode.FirstChild("member");
      while(!timestampsMember.IsNull())
      {
        m_timestamps.push_back(DateTime(StringUtils::Trim(timestampsMember.GetText().c_str()).c_str(), DateFormat::ISO_8601));
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
      m_statusCode = StatusCodeMapper::GetStatusCodeForName(StringUtils::Trim(statusCodeNode.GetText().c_str()).c_str());
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
        oStream << location << index << locationValue << ".Timestamps.member." << timestampsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
        oStream << location << ".Timestamps.member." << timestampsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
