/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstanceRefreshLivePoolProgress.h>
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

InstanceRefreshLivePoolProgress::InstanceRefreshLivePoolProgress() : 
    m_percentageComplete(0),
    m_percentageCompleteHasBeenSet(false),
    m_instancesToUpdate(0),
    m_instancesToUpdateHasBeenSet(false)
{
}

InstanceRefreshLivePoolProgress::InstanceRefreshLivePoolProgress(const XmlNode& xmlNode) : 
    m_percentageComplete(0),
    m_percentageCompleteHasBeenSet(false),
    m_instancesToUpdate(0),
    m_instancesToUpdateHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceRefreshLivePoolProgress& InstanceRefreshLivePoolProgress::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode percentageCompleteNode = resultNode.FirstChild("PercentageComplete");
    if(!percentageCompleteNode.IsNull())
    {
      m_percentageComplete = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentageCompleteNode.GetText()).c_str()).c_str());
      m_percentageCompleteHasBeenSet = true;
    }
    XmlNode instancesToUpdateNode = resultNode.FirstChild("InstancesToUpdate");
    if(!instancesToUpdateNode.IsNull())
    {
      m_instancesToUpdate = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancesToUpdateNode.GetText()).c_str()).c_str());
      m_instancesToUpdateHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceRefreshLivePoolProgress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_percentageCompleteHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentageComplete=" << m_percentageComplete << "&";
  }

  if(m_instancesToUpdateHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancesToUpdate=" << m_instancesToUpdate << "&";
  }

}

void InstanceRefreshLivePoolProgress::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_percentageCompleteHasBeenSet)
  {
      oStream << location << ".PercentageComplete=" << m_percentageComplete << "&";
  }
  if(m_instancesToUpdateHasBeenSet)
  {
      oStream << location << ".InstancesToUpdate=" << m_instancesToUpdate << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
