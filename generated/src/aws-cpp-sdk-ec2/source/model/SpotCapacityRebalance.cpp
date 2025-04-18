﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotCapacityRebalance.h>
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

SpotCapacityRebalance::SpotCapacityRebalance(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SpotCapacityRebalance& SpotCapacityRebalance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode replacementStrategyNode = resultNode.FirstChild("replacementStrategy");
    if(!replacementStrategyNode.IsNull())
    {
      m_replacementStrategy = ReplacementStrategyMapper::GetReplacementStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replacementStrategyNode.GetText()).c_str()));
      m_replacementStrategyHasBeenSet = true;
    }
    XmlNode terminationDelayNode = resultNode.FirstChild("terminationDelay");
    if(!terminationDelayNode.IsNull())
    {
      m_terminationDelay = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(terminationDelayNode.GetText()).c_str()).c_str());
      m_terminationDelayHasBeenSet = true;
    }
  }

  return *this;
}

void SpotCapacityRebalance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_replacementStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplacementStrategy=" << StringUtils::URLEncode(ReplacementStrategyMapper::GetNameForReplacementStrategy(m_replacementStrategy)) << "&";
  }

  if(m_terminationDelayHasBeenSet)
  {
      oStream << location << index << locationValue << ".TerminationDelay=" << m_terminationDelay << "&";
  }

}

void SpotCapacityRebalance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_replacementStrategyHasBeenSet)
  {
      oStream << location << ".ReplacementStrategy=" << StringUtils::URLEncode(ReplacementStrategyMapper::GetNameForReplacementStrategy(m_replacementStrategy)) << "&";
  }
  if(m_terminationDelayHasBeenSet)
  {
      oStream << location << ".TerminationDelay=" << m_terminationDelay << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
