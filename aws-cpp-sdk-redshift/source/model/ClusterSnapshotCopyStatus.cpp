/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ClusterSnapshotCopyStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ClusterSnapshotCopyStatus::ClusterSnapshotCopyStatus() : 
    m_destinationRegionHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_snapshotCopyGrantNameHasBeenSet(false)
{
}

ClusterSnapshotCopyStatus::ClusterSnapshotCopyStatus(const XmlNode& xmlNode) : 
    m_destinationRegionHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_snapshotCopyGrantNameHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterSnapshotCopyStatus& ClusterSnapshotCopyStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationRegionNode = resultNode.FirstChild("DestinationRegion");
    if(!destinationRegionNode.IsNull())
    {
      m_destinationRegion = Aws::Utils::Xml::DecodeEscapedXmlText(destinationRegionNode.GetText());
      m_destinationRegionHasBeenSet = true;
    }
    XmlNode retentionPeriodNode = resultNode.FirstChild("RetentionPeriod");
    if(!retentionPeriodNode.IsNull())
    {
      m_retentionPeriod = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(retentionPeriodNode.GetText()).c_str()).c_str());
      m_retentionPeriodHasBeenSet = true;
    }
    XmlNode manualSnapshotRetentionPeriodNode = resultNode.FirstChild("ManualSnapshotRetentionPeriod");
    if(!manualSnapshotRetentionPeriodNode.IsNull())
    {
      m_manualSnapshotRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(manualSnapshotRetentionPeriodNode.GetText()).c_str()).c_str());
      m_manualSnapshotRetentionPeriodHasBeenSet = true;
    }
    XmlNode snapshotCopyGrantNameNode = resultNode.FirstChild("SnapshotCopyGrantName");
    if(!snapshotCopyGrantNameNode.IsNull())
    {
      m_snapshotCopyGrantName = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotCopyGrantNameNode.GetText());
      m_snapshotCopyGrantNameHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterSnapshotCopyStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationRegion=" << StringUtils::URLEncode(m_destinationRegion.c_str()) << "&";
  }

  if(m_retentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".RetentionPeriod=" << m_retentionPeriod << "&";
  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }

  if(m_snapshotCopyGrantNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotCopyGrantName=" << StringUtils::URLEncode(m_snapshotCopyGrantName.c_str()) << "&";
  }

}

void ClusterSnapshotCopyStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationRegionHasBeenSet)
  {
      oStream << location << ".DestinationRegion=" << StringUtils::URLEncode(m_destinationRegion.c_str()) << "&";
  }
  if(m_retentionPeriodHasBeenSet)
  {
      oStream << location << ".RetentionPeriod=" << m_retentionPeriod << "&";
  }
  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
      oStream << location << ".ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }
  if(m_snapshotCopyGrantNameHasBeenSet)
  {
      oStream << location << ".SnapshotCopyGrantName=" << StringUtils::URLEncode(m_snapshotCopyGrantName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
