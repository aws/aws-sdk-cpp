/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceFamilyCreditSpecification.h>
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

InstanceFamilyCreditSpecification::InstanceFamilyCreditSpecification() : 
    m_instanceFamily(UnlimitedSupportedInstanceFamily::NOT_SET),
    m_instanceFamilyHasBeenSet(false),
    m_cpuCreditsHasBeenSet(false)
{
}

InstanceFamilyCreditSpecification::InstanceFamilyCreditSpecification(const XmlNode& xmlNode) : 
    m_instanceFamily(UnlimitedSupportedInstanceFamily::NOT_SET),
    m_instanceFamilyHasBeenSet(false),
    m_cpuCreditsHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceFamilyCreditSpecification& InstanceFamilyCreditSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceFamilyNode = resultNode.FirstChild("instanceFamily");
    if(!instanceFamilyNode.IsNull())
    {
      m_instanceFamily = UnlimitedSupportedInstanceFamilyMapper::GetUnlimitedSupportedInstanceFamilyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceFamilyNode.GetText()).c_str()).c_str());
      m_instanceFamilyHasBeenSet = true;
    }
    XmlNode cpuCreditsNode = resultNode.FirstChild("cpuCredits");
    if(!cpuCreditsNode.IsNull())
    {
      m_cpuCredits = Aws::Utils::Xml::DecodeEscapedXmlText(cpuCreditsNode.GetText());
      m_cpuCreditsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceFamilyCreditSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceFamily=" << UnlimitedSupportedInstanceFamilyMapper::GetNameForUnlimitedSupportedInstanceFamily(m_instanceFamily) << "&";
  }

  if(m_cpuCreditsHasBeenSet)
  {
      oStream << location << index << locationValue << ".CpuCredits=" << StringUtils::URLEncode(m_cpuCredits.c_str()) << "&";
  }

}

void InstanceFamilyCreditSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << ".InstanceFamily=" << UnlimitedSupportedInstanceFamilyMapper::GetNameForUnlimitedSupportedInstanceFamily(m_instanceFamily) << "&";
  }
  if(m_cpuCreditsHasBeenSet)
  {
      oStream << location << ".CpuCredits=" << StringUtils::URLEncode(m_cpuCredits.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
