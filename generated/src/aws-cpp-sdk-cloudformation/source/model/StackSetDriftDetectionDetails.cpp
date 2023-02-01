/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetDriftDetectionDetails.h>
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

StackSetDriftDetectionDetails::StackSetDriftDetectionDetails() : 
    m_driftStatus(StackSetDriftStatus::NOT_SET),
    m_driftStatusHasBeenSet(false),
    m_driftDetectionStatus(StackSetDriftDetectionStatus::NOT_SET),
    m_driftDetectionStatusHasBeenSet(false),
    m_lastDriftCheckTimestampHasBeenSet(false),
    m_totalStackInstancesCount(0),
    m_totalStackInstancesCountHasBeenSet(false),
    m_driftedStackInstancesCount(0),
    m_driftedStackInstancesCountHasBeenSet(false),
    m_inSyncStackInstancesCount(0),
    m_inSyncStackInstancesCountHasBeenSet(false),
    m_inProgressStackInstancesCount(0),
    m_inProgressStackInstancesCountHasBeenSet(false),
    m_failedStackInstancesCount(0),
    m_failedStackInstancesCountHasBeenSet(false)
{
}

StackSetDriftDetectionDetails::StackSetDriftDetectionDetails(const XmlNode& xmlNode) : 
    m_driftStatus(StackSetDriftStatus::NOT_SET),
    m_driftStatusHasBeenSet(false),
    m_driftDetectionStatus(StackSetDriftDetectionStatus::NOT_SET),
    m_driftDetectionStatusHasBeenSet(false),
    m_lastDriftCheckTimestampHasBeenSet(false),
    m_totalStackInstancesCount(0),
    m_totalStackInstancesCountHasBeenSet(false),
    m_driftedStackInstancesCount(0),
    m_driftedStackInstancesCountHasBeenSet(false),
    m_inSyncStackInstancesCount(0),
    m_inSyncStackInstancesCountHasBeenSet(false),
    m_inProgressStackInstancesCount(0),
    m_inProgressStackInstancesCountHasBeenSet(false),
    m_failedStackInstancesCount(0),
    m_failedStackInstancesCountHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetDriftDetectionDetails& StackSetDriftDetectionDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode driftStatusNode = resultNode.FirstChild("DriftStatus");
    if(!driftStatusNode.IsNull())
    {
      m_driftStatus = StackSetDriftStatusMapper::GetStackSetDriftStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(driftStatusNode.GetText()).c_str()).c_str());
      m_driftStatusHasBeenSet = true;
    }
    XmlNode driftDetectionStatusNode = resultNode.FirstChild("DriftDetectionStatus");
    if(!driftDetectionStatusNode.IsNull())
    {
      m_driftDetectionStatus = StackSetDriftDetectionStatusMapper::GetStackSetDriftDetectionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(driftDetectionStatusNode.GetText()).c_str()).c_str());
      m_driftDetectionStatusHasBeenSet = true;
    }
    XmlNode lastDriftCheckTimestampNode = resultNode.FirstChild("LastDriftCheckTimestamp");
    if(!lastDriftCheckTimestampNode.IsNull())
    {
      m_lastDriftCheckTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastDriftCheckTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastDriftCheckTimestampHasBeenSet = true;
    }
    XmlNode totalStackInstancesCountNode = resultNode.FirstChild("TotalStackInstancesCount");
    if(!totalStackInstancesCountNode.IsNull())
    {
      m_totalStackInstancesCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalStackInstancesCountNode.GetText()).c_str()).c_str());
      m_totalStackInstancesCountHasBeenSet = true;
    }
    XmlNode driftedStackInstancesCountNode = resultNode.FirstChild("DriftedStackInstancesCount");
    if(!driftedStackInstancesCountNode.IsNull())
    {
      m_driftedStackInstancesCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(driftedStackInstancesCountNode.GetText()).c_str()).c_str());
      m_driftedStackInstancesCountHasBeenSet = true;
    }
    XmlNode inSyncStackInstancesCountNode = resultNode.FirstChild("InSyncStackInstancesCount");
    if(!inSyncStackInstancesCountNode.IsNull())
    {
      m_inSyncStackInstancesCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(inSyncStackInstancesCountNode.GetText()).c_str()).c_str());
      m_inSyncStackInstancesCountHasBeenSet = true;
    }
    XmlNode inProgressStackInstancesCountNode = resultNode.FirstChild("InProgressStackInstancesCount");
    if(!inProgressStackInstancesCountNode.IsNull())
    {
      m_inProgressStackInstancesCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(inProgressStackInstancesCountNode.GetText()).c_str()).c_str());
      m_inProgressStackInstancesCountHasBeenSet = true;
    }
    XmlNode failedStackInstancesCountNode = resultNode.FirstChild("FailedStackInstancesCount");
    if(!failedStackInstancesCountNode.IsNull())
    {
      m_failedStackInstancesCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failedStackInstancesCountNode.GetText()).c_str()).c_str());
      m_failedStackInstancesCountHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetDriftDetectionDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_driftStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DriftStatus=" << StackSetDriftStatusMapper::GetNameForStackSetDriftStatus(m_driftStatus) << "&";
  }

  if(m_driftDetectionStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DriftDetectionStatus=" << StackSetDriftDetectionStatusMapper::GetNameForStackSetDriftDetectionStatus(m_driftDetectionStatus) << "&";
  }

  if(m_lastDriftCheckTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastDriftCheckTimestamp=" << StringUtils::URLEncode(m_lastDriftCheckTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_totalStackInstancesCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalStackInstancesCount=" << m_totalStackInstancesCount << "&";
  }

  if(m_driftedStackInstancesCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".DriftedStackInstancesCount=" << m_driftedStackInstancesCount << "&";
  }

  if(m_inSyncStackInstancesCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InSyncStackInstancesCount=" << m_inSyncStackInstancesCount << "&";
  }

  if(m_inProgressStackInstancesCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InProgressStackInstancesCount=" << m_inProgressStackInstancesCount << "&";
  }

  if(m_failedStackInstancesCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailedStackInstancesCount=" << m_failedStackInstancesCount << "&";
  }

}

void StackSetDriftDetectionDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_driftStatusHasBeenSet)
  {
      oStream << location << ".DriftStatus=" << StackSetDriftStatusMapper::GetNameForStackSetDriftStatus(m_driftStatus) << "&";
  }
  if(m_driftDetectionStatusHasBeenSet)
  {
      oStream << location << ".DriftDetectionStatus=" << StackSetDriftDetectionStatusMapper::GetNameForStackSetDriftDetectionStatus(m_driftDetectionStatus) << "&";
  }
  if(m_lastDriftCheckTimestampHasBeenSet)
  {
      oStream << location << ".LastDriftCheckTimestamp=" << StringUtils::URLEncode(m_lastDriftCheckTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_totalStackInstancesCountHasBeenSet)
  {
      oStream << location << ".TotalStackInstancesCount=" << m_totalStackInstancesCount << "&";
  }
  if(m_driftedStackInstancesCountHasBeenSet)
  {
      oStream << location << ".DriftedStackInstancesCount=" << m_driftedStackInstancesCount << "&";
  }
  if(m_inSyncStackInstancesCountHasBeenSet)
  {
      oStream << location << ".InSyncStackInstancesCount=" << m_inSyncStackInstancesCount << "&";
  }
  if(m_inProgressStackInstancesCountHasBeenSet)
  {
      oStream << location << ".InProgressStackInstancesCount=" << m_inProgressStackInstancesCount << "&";
  }
  if(m_failedStackInstancesCountHasBeenSet)
  {
      oStream << location << ".FailedStackInstancesCount=" << m_failedStackInstancesCount << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
