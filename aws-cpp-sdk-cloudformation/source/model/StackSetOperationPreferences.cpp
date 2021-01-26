/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetOperationPreferences.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

StackSetOperationPreferences::StackSetOperationPreferences() : 
    m_regionOrderHasBeenSet(false),
    m_failureToleranceCount(0),
    m_failureToleranceCountHasBeenSet(false),
    m_failureTolerancePercentage(0),
    m_failureTolerancePercentageHasBeenSet(false),
    m_maxConcurrentCount(0),
    m_maxConcurrentCountHasBeenSet(false),
    m_maxConcurrentPercentage(0),
    m_maxConcurrentPercentageHasBeenSet(false)
{
}

StackSetOperationPreferences::StackSetOperationPreferences(const XmlNode& xmlNode) : 
    m_regionOrderHasBeenSet(false),
    m_failureToleranceCount(0),
    m_failureToleranceCountHasBeenSet(false),
    m_failureTolerancePercentage(0),
    m_failureTolerancePercentageHasBeenSet(false),
    m_maxConcurrentCount(0),
    m_maxConcurrentCountHasBeenSet(false),
    m_maxConcurrentPercentage(0),
    m_maxConcurrentPercentageHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetOperationPreferences& StackSetOperationPreferences::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionOrderNode = resultNode.FirstChild("RegionOrder");
    if(!regionOrderNode.IsNull())
    {
      XmlNode regionOrderMember = regionOrderNode.FirstChild("member");
      while(!regionOrderMember.IsNull())
      {
        m_regionOrder.push_back(regionOrderMember.GetText());
        regionOrderMember = regionOrderMember.NextNode("member");
      }

      m_regionOrderHasBeenSet = true;
    }
    XmlNode failureToleranceCountNode = resultNode.FirstChild("FailureToleranceCount");
    if(!failureToleranceCountNode.IsNull())
    {
      m_failureToleranceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failureToleranceCountNode.GetText()).c_str()).c_str());
      m_failureToleranceCountHasBeenSet = true;
    }
    XmlNode failureTolerancePercentageNode = resultNode.FirstChild("FailureTolerancePercentage");
    if(!failureTolerancePercentageNode.IsNull())
    {
      m_failureTolerancePercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failureTolerancePercentageNode.GetText()).c_str()).c_str());
      m_failureTolerancePercentageHasBeenSet = true;
    }
    XmlNode maxConcurrentCountNode = resultNode.FirstChild("MaxConcurrentCount");
    if(!maxConcurrentCountNode.IsNull())
    {
      m_maxConcurrentCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxConcurrentCountNode.GetText()).c_str()).c_str());
      m_maxConcurrentCountHasBeenSet = true;
    }
    XmlNode maxConcurrentPercentageNode = resultNode.FirstChild("MaxConcurrentPercentage");
    if(!maxConcurrentPercentageNode.IsNull())
    {
      m_maxConcurrentPercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxConcurrentPercentageNode.GetText()).c_str()).c_str());
      m_maxConcurrentPercentageHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetOperationPreferences::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_regionOrderHasBeenSet)
  {
      unsigned regionOrderIdx = 1;
      for(auto& item : m_regionOrder)
      {
        oStream << location << index << locationValue << ".RegionOrder.member." << regionOrderIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_failureToleranceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureToleranceCount=" << m_failureToleranceCount << "&";
  }

  if(m_failureTolerancePercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureTolerancePercentage=" << m_failureTolerancePercentage << "&";
  }

  if(m_maxConcurrentCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxConcurrentCount=" << m_maxConcurrentCount << "&";
  }

  if(m_maxConcurrentPercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxConcurrentPercentage=" << m_maxConcurrentPercentage << "&";
  }

}

void StackSetOperationPreferences::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_regionOrderHasBeenSet)
  {
      unsigned regionOrderIdx = 1;
      for(auto& item : m_regionOrder)
      {
        oStream << location << ".RegionOrder.member." << regionOrderIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_failureToleranceCountHasBeenSet)
  {
      oStream << location << ".FailureToleranceCount=" << m_failureToleranceCount << "&";
  }
  if(m_failureTolerancePercentageHasBeenSet)
  {
      oStream << location << ".FailureTolerancePercentage=" << m_failureTolerancePercentage << "&";
  }
  if(m_maxConcurrentCountHasBeenSet)
  {
      oStream << location << ".MaxConcurrentCount=" << m_maxConcurrentCount << "&";
  }
  if(m_maxConcurrentPercentageHasBeenSet)
  {
      oStream << location << ".MaxConcurrentPercentage=" << m_maxConcurrentPercentage << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
