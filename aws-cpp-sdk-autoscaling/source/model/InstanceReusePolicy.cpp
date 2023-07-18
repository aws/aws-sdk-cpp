/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstanceReusePolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

InstanceReusePolicy::InstanceReusePolicy() : 
    m_reuseOnScaleIn(false),
    m_reuseOnScaleInHasBeenSet(false)
{
}

InstanceReusePolicy::InstanceReusePolicy(const XmlNode& xmlNode) : 
    m_reuseOnScaleIn(false),
    m_reuseOnScaleInHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceReusePolicy& InstanceReusePolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reuseOnScaleInNode = resultNode.FirstChild("ReuseOnScaleIn");
    if(!reuseOnScaleInNode.IsNull())
    {
      m_reuseOnScaleIn = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reuseOnScaleInNode.GetText()).c_str()).c_str());
      m_reuseOnScaleInHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceReusePolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reuseOnScaleInHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReuseOnScaleIn=" << std::boolalpha << m_reuseOnScaleIn << "&";
  }

}

void InstanceReusePolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reuseOnScaleInHasBeenSet)
  {
      oStream << location << ".ReuseOnScaleIn=" << std::boolalpha << m_reuseOnScaleIn << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
