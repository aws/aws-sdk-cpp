/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ReputationOptions.h>
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

ReputationOptions::ReputationOptions() : 
    m_sendingEnabled(false),
    m_sendingEnabledHasBeenSet(false),
    m_reputationMetricsEnabled(false),
    m_reputationMetricsEnabledHasBeenSet(false),
    m_lastFreshStartHasBeenSet(false)
{
}

ReputationOptions::ReputationOptions(const XmlNode& xmlNode) : 
    m_sendingEnabled(false),
    m_sendingEnabledHasBeenSet(false),
    m_reputationMetricsEnabled(false),
    m_reputationMetricsEnabledHasBeenSet(false),
    m_lastFreshStartHasBeenSet(false)
{
  *this = xmlNode;
}

ReputationOptions& ReputationOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sendingEnabledNode = resultNode.FirstChild("SendingEnabled");
    if(!sendingEnabledNode.IsNull())
    {
      m_sendingEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sendingEnabledNode.GetText()).c_str()).c_str());
      m_sendingEnabledHasBeenSet = true;
    }
    XmlNode reputationMetricsEnabledNode = resultNode.FirstChild("ReputationMetricsEnabled");
    if(!reputationMetricsEnabledNode.IsNull())
    {
      m_reputationMetricsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reputationMetricsEnabledNode.GetText()).c_str()).c_str());
      m_reputationMetricsEnabledHasBeenSet = true;
    }
    XmlNode lastFreshStartNode = resultNode.FirstChild("LastFreshStart");
    if(!lastFreshStartNode.IsNull())
    {
      m_lastFreshStart = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastFreshStartNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastFreshStartHasBeenSet = true;
    }
  }

  return *this;
}

void ReputationOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sendingEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".SendingEnabled=" << std::boolalpha << m_sendingEnabled << "&";
  }

  if(m_reputationMetricsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReputationMetricsEnabled=" << std::boolalpha << m_reputationMetricsEnabled << "&";
  }

  if(m_lastFreshStartHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastFreshStart=" << StringUtils::URLEncode(m_lastFreshStart.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ReputationOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sendingEnabledHasBeenSet)
  {
      oStream << location << ".SendingEnabled=" << std::boolalpha << m_sendingEnabled << "&";
  }
  if(m_reputationMetricsEnabledHasBeenSet)
  {
      oStream << location << ".ReputationMetricsEnabled=" << std::boolalpha << m_reputationMetricsEnabled << "&";
  }
  if(m_lastFreshStartHasBeenSet)
  {
      oStream << location << ".LastFreshStart=" << StringUtils::URLEncode(m_lastFreshStart.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
