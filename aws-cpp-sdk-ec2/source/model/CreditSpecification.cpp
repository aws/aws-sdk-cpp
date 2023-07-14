﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreditSpecification.h>
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

CreditSpecification::CreditSpecification() : 
    m_cpuCreditsHasBeenSet(false)
{
}

CreditSpecification::CreditSpecification(const XmlNode& xmlNode) : 
    m_cpuCreditsHasBeenSet(false)
{
  *this = xmlNode;
}

CreditSpecification& CreditSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cpuCreditsNode = resultNode.FirstChild("cpuCredits");
    if(!cpuCreditsNode.IsNull())
    {
      m_cpuCredits = Aws::Utils::Xml::DecodeEscapedXmlText(cpuCreditsNode.GetText());
      m_cpuCreditsHasBeenSet = true;
    }
  }

  return *this;
}

void CreditSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cpuCreditsHasBeenSet)
  {
      oStream << location << index << locationValue << ".CpuCredits=" << StringUtils::URLEncode(m_cpuCredits.c_str()) << "&";
  }

}

void CreditSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cpuCreditsHasBeenSet)
  {
      oStream << location << ".CpuCredits=" << StringUtils::URLEncode(m_cpuCredits.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
