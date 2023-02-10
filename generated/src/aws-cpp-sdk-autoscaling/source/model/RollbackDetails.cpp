/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RollbackDetails.h>
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

RollbackDetails::RollbackDetails() : 
    m_rollbackReasonHasBeenSet(false),
    m_rollbackStartTimeHasBeenSet(false),
    m_percentageCompleteOnRollback(0),
    m_percentageCompleteOnRollbackHasBeenSet(false),
    m_instancesToUpdateOnRollback(0),
    m_instancesToUpdateOnRollbackHasBeenSet(false),
    m_progressDetailsOnRollbackHasBeenSet(false)
{
}

RollbackDetails::RollbackDetails(const XmlNode& xmlNode) : 
    m_rollbackReasonHasBeenSet(false),
    m_rollbackStartTimeHasBeenSet(false),
    m_percentageCompleteOnRollback(0),
    m_percentageCompleteOnRollbackHasBeenSet(false),
    m_instancesToUpdateOnRollback(0),
    m_instancesToUpdateOnRollbackHasBeenSet(false),
    m_progressDetailsOnRollbackHasBeenSet(false)
{
  *this = xmlNode;
}

RollbackDetails& RollbackDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode rollbackReasonNode = resultNode.FirstChild("RollbackReason");
    if(!rollbackReasonNode.IsNull())
    {
      m_rollbackReason = Aws::Utils::Xml::DecodeEscapedXmlText(rollbackReasonNode.GetText());
      m_rollbackReasonHasBeenSet = true;
    }
    XmlNode rollbackStartTimeNode = resultNode.FirstChild("RollbackStartTime");
    if(!rollbackStartTimeNode.IsNull())
    {
      m_rollbackStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(rollbackStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_rollbackStartTimeHasBeenSet = true;
    }
    XmlNode percentageCompleteOnRollbackNode = resultNode.FirstChild("PercentageCompleteOnRollback");
    if(!percentageCompleteOnRollbackNode.IsNull())
    {
      m_percentageCompleteOnRollback = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentageCompleteOnRollbackNode.GetText()).c_str()).c_str());
      m_percentageCompleteOnRollbackHasBeenSet = true;
    }
    XmlNode instancesToUpdateOnRollbackNode = resultNode.FirstChild("InstancesToUpdateOnRollback");
    if(!instancesToUpdateOnRollbackNode.IsNull())
    {
      m_instancesToUpdateOnRollback = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancesToUpdateOnRollbackNode.GetText()).c_str()).c_str());
      m_instancesToUpdateOnRollbackHasBeenSet = true;
    }
    XmlNode progressDetailsOnRollbackNode = resultNode.FirstChild("ProgressDetailsOnRollback");
    if(!progressDetailsOnRollbackNode.IsNull())
    {
      m_progressDetailsOnRollback = progressDetailsOnRollbackNode;
      m_progressDetailsOnRollbackHasBeenSet = true;
    }
  }

  return *this;
}

void RollbackDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_rollbackReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".RollbackReason=" << StringUtils::URLEncode(m_rollbackReason.c_str()) << "&";
  }

  if(m_rollbackStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RollbackStartTime=" << StringUtils::URLEncode(m_rollbackStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_percentageCompleteOnRollbackHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentageCompleteOnRollback=" << m_percentageCompleteOnRollback << "&";
  }

  if(m_instancesToUpdateOnRollbackHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancesToUpdateOnRollback=" << m_instancesToUpdateOnRollback << "&";
  }

  if(m_progressDetailsOnRollbackHasBeenSet)
  {
      Aws::StringStream progressDetailsOnRollbackLocationAndMemberSs;
      progressDetailsOnRollbackLocationAndMemberSs << location << index << locationValue << ".ProgressDetailsOnRollback";
      m_progressDetailsOnRollback.OutputToStream(oStream, progressDetailsOnRollbackLocationAndMemberSs.str().c_str());
  }

}

void RollbackDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_rollbackReasonHasBeenSet)
  {
      oStream << location << ".RollbackReason=" << StringUtils::URLEncode(m_rollbackReason.c_str()) << "&";
  }
  if(m_rollbackStartTimeHasBeenSet)
  {
      oStream << location << ".RollbackStartTime=" << StringUtils::URLEncode(m_rollbackStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_percentageCompleteOnRollbackHasBeenSet)
  {
      oStream << location << ".PercentageCompleteOnRollback=" << m_percentageCompleteOnRollback << "&";
  }
  if(m_instancesToUpdateOnRollbackHasBeenSet)
  {
      oStream << location << ".InstancesToUpdateOnRollback=" << m_instancesToUpdateOnRollback << "&";
  }
  if(m_progressDetailsOnRollbackHasBeenSet)
  {
      Aws::String progressDetailsOnRollbackLocationAndMember(location);
      progressDetailsOnRollbackLocationAndMember += ".ProgressDetailsOnRollback";
      m_progressDetailsOnRollback.OutputToStream(oStream, progressDetailsOnRollbackLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
