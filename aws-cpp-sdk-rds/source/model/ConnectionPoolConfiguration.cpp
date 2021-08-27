/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ConnectionPoolConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

ConnectionPoolConfiguration::ConnectionPoolConfiguration() : 
    m_maxConnectionsPercent(0),
    m_maxConnectionsPercentHasBeenSet(false),
    m_maxIdleConnectionsPercent(0),
    m_maxIdleConnectionsPercentHasBeenSet(false),
    m_connectionBorrowTimeout(0),
    m_connectionBorrowTimeoutHasBeenSet(false),
    m_sessionPinningFiltersHasBeenSet(false),
    m_initQueryHasBeenSet(false)
{
}

ConnectionPoolConfiguration::ConnectionPoolConfiguration(const XmlNode& xmlNode) : 
    m_maxConnectionsPercent(0),
    m_maxConnectionsPercentHasBeenSet(false),
    m_maxIdleConnectionsPercent(0),
    m_maxIdleConnectionsPercentHasBeenSet(false),
    m_connectionBorrowTimeout(0),
    m_connectionBorrowTimeoutHasBeenSet(false),
    m_sessionPinningFiltersHasBeenSet(false),
    m_initQueryHasBeenSet(false)
{
  *this = xmlNode;
}

ConnectionPoolConfiguration& ConnectionPoolConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maxConnectionsPercentNode = resultNode.FirstChild("MaxConnectionsPercent");
    if(!maxConnectionsPercentNode.IsNull())
    {
      m_maxConnectionsPercent = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxConnectionsPercentNode.GetText()).c_str()).c_str());
      m_maxConnectionsPercentHasBeenSet = true;
    }
    XmlNode maxIdleConnectionsPercentNode = resultNode.FirstChild("MaxIdleConnectionsPercent");
    if(!maxIdleConnectionsPercentNode.IsNull())
    {
      m_maxIdleConnectionsPercent = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxIdleConnectionsPercentNode.GetText()).c_str()).c_str());
      m_maxIdleConnectionsPercentHasBeenSet = true;
    }
    XmlNode connectionBorrowTimeoutNode = resultNode.FirstChild("ConnectionBorrowTimeout");
    if(!connectionBorrowTimeoutNode.IsNull())
    {
      m_connectionBorrowTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(connectionBorrowTimeoutNode.GetText()).c_str()).c_str());
      m_connectionBorrowTimeoutHasBeenSet = true;
    }
    XmlNode sessionPinningFiltersNode = resultNode.FirstChild("SessionPinningFilters");
    if(!sessionPinningFiltersNode.IsNull())
    {
      XmlNode sessionPinningFiltersMember = sessionPinningFiltersNode.FirstChild("member");
      while(!sessionPinningFiltersMember.IsNull())
      {
        m_sessionPinningFilters.push_back(sessionPinningFiltersMember.GetText());
        sessionPinningFiltersMember = sessionPinningFiltersMember.NextNode("member");
      }

      m_sessionPinningFiltersHasBeenSet = true;
    }
    XmlNode initQueryNode = resultNode.FirstChild("InitQuery");
    if(!initQueryNode.IsNull())
    {
      m_initQuery = Aws::Utils::Xml::DecodeEscapedXmlText(initQueryNode.GetText());
      m_initQueryHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionPoolConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maxConnectionsPercentHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxConnectionsPercent=" << m_maxConnectionsPercent << "&";
  }

  if(m_maxIdleConnectionsPercentHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxIdleConnectionsPercent=" << m_maxIdleConnectionsPercent << "&";
  }

  if(m_connectionBorrowTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionBorrowTimeout=" << m_connectionBorrowTimeout << "&";
  }

  if(m_sessionPinningFiltersHasBeenSet)
  {
      unsigned sessionPinningFiltersIdx = 1;
      for(auto& item : m_sessionPinningFilters)
      {
        oStream << location << index << locationValue << ".SessionPinningFilters.member." << sessionPinningFiltersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_initQueryHasBeenSet)
  {
      oStream << location << index << locationValue << ".InitQuery=" << StringUtils::URLEncode(m_initQuery.c_str()) << "&";
  }

}

void ConnectionPoolConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maxConnectionsPercentHasBeenSet)
  {
      oStream << location << ".MaxConnectionsPercent=" << m_maxConnectionsPercent << "&";
  }
  if(m_maxIdleConnectionsPercentHasBeenSet)
  {
      oStream << location << ".MaxIdleConnectionsPercent=" << m_maxIdleConnectionsPercent << "&";
  }
  if(m_connectionBorrowTimeoutHasBeenSet)
  {
      oStream << location << ".ConnectionBorrowTimeout=" << m_connectionBorrowTimeout << "&";
  }
  if(m_sessionPinningFiltersHasBeenSet)
  {
      unsigned sessionPinningFiltersIdx = 1;
      for(auto& item : m_sessionPinningFilters)
      {
        oStream << location << ".SessionPinningFilters.member." << sessionPinningFiltersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_initQueryHasBeenSet)
  {
      oStream << location << ".InitQuery=" << StringUtils::URLEncode(m_initQuery.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
