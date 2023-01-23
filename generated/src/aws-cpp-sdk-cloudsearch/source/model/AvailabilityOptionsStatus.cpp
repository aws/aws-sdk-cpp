/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/AvailabilityOptionsStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

AvailabilityOptionsStatus::AvailabilityOptionsStatus() : 
    m_options(false),
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AvailabilityOptionsStatus::AvailabilityOptionsStatus(const XmlNode& xmlNode) : 
    m_options(false),
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

AvailabilityOptionsStatus& AvailabilityOptionsStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionsNode = resultNode.FirstChild("Options");
    if(!optionsNode.IsNull())
    {
      m_options = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(optionsNode.GetText()).c_str()).c_str());
      m_optionsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void AvailabilityOptionsStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Options=" << std::boolalpha << m_options << "&";
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

}

void AvailabilityOptionsStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionsHasBeenSet)
  {
      oStream << location << ".Options=" << std::boolalpha << m_options << "&";
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
