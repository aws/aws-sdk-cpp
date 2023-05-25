/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/ScalingParametersStatus.h>
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

ScalingParametersStatus::ScalingParametersStatus() : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ScalingParametersStatus::ScalingParametersStatus(const XmlNode& xmlNode) : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

ScalingParametersStatus& ScalingParametersStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionsNode = resultNode.FirstChild("Options");
    if(!optionsNode.IsNull())
    {
      m_options = optionsNode;
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

void ScalingParametersStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionsHasBeenSet)
  {
      Aws::StringStream optionsLocationAndMemberSs;
      optionsLocationAndMemberSs << location << index << locationValue << ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMemberSs.str().c_str());
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

}

void ScalingParametersStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionsHasBeenSet)
  {
      Aws::String optionsLocationAndMember(location);
      optionsLocationAndMember += ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMember.c_str());
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
