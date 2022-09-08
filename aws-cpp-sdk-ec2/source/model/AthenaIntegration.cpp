/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AthenaIntegration.h>
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

AthenaIntegration::AthenaIntegration() : 
    m_integrationResultS3DestinationArnHasBeenSet(false),
    m_partitionLoadFrequency(PartitionLoadFrequency::NOT_SET),
    m_partitionLoadFrequencyHasBeenSet(false),
    m_partitionStartDateHasBeenSet(false),
    m_partitionEndDateHasBeenSet(false)
{
}

AthenaIntegration::AthenaIntegration(const XmlNode& xmlNode) : 
    m_integrationResultS3DestinationArnHasBeenSet(false),
    m_partitionLoadFrequency(PartitionLoadFrequency::NOT_SET),
    m_partitionLoadFrequencyHasBeenSet(false),
    m_partitionStartDateHasBeenSet(false),
    m_partitionEndDateHasBeenSet(false)
{
  *this = xmlNode;
}

AthenaIntegration& AthenaIntegration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode integrationResultS3DestinationArnNode = resultNode.FirstChild("IntegrationResultS3DestinationArn");
    if(!integrationResultS3DestinationArnNode.IsNull())
    {
      m_integrationResultS3DestinationArn = Aws::Utils::Xml::DecodeEscapedXmlText(integrationResultS3DestinationArnNode.GetText());
      m_integrationResultS3DestinationArnHasBeenSet = true;
    }
    XmlNode partitionLoadFrequencyNode = resultNode.FirstChild("PartitionLoadFrequency");
    if(!partitionLoadFrequencyNode.IsNull())
    {
      m_partitionLoadFrequency = PartitionLoadFrequencyMapper::GetPartitionLoadFrequencyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(partitionLoadFrequencyNode.GetText()).c_str()).c_str());
      m_partitionLoadFrequencyHasBeenSet = true;
    }
    XmlNode partitionStartDateNode = resultNode.FirstChild("PartitionStartDate");
    if(!partitionStartDateNode.IsNull())
    {
      m_partitionStartDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(partitionStartDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_partitionStartDateHasBeenSet = true;
    }
    XmlNode partitionEndDateNode = resultNode.FirstChild("PartitionEndDate");
    if(!partitionEndDateNode.IsNull())
    {
      m_partitionEndDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(partitionEndDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_partitionEndDateHasBeenSet = true;
    }
  }

  return *this;
}

void AthenaIntegration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_integrationResultS3DestinationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IntegrationResultS3DestinationArn=" << StringUtils::URLEncode(m_integrationResultS3DestinationArn.c_str()) << "&";
  }

  if(m_partitionLoadFrequencyHasBeenSet)
  {
      oStream << location << index << locationValue << ".PartitionLoadFrequency=" << PartitionLoadFrequencyMapper::GetNameForPartitionLoadFrequency(m_partitionLoadFrequency) << "&";
  }

  if(m_partitionStartDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PartitionStartDate=" << StringUtils::URLEncode(m_partitionStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_partitionEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PartitionEndDate=" << StringUtils::URLEncode(m_partitionEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void AthenaIntegration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_integrationResultS3DestinationArnHasBeenSet)
  {
      oStream << location << ".IntegrationResultS3DestinationArn=" << StringUtils::URLEncode(m_integrationResultS3DestinationArn.c_str()) << "&";
  }
  if(m_partitionLoadFrequencyHasBeenSet)
  {
      oStream << location << ".PartitionLoadFrequency=" << PartitionLoadFrequencyMapper::GetNameForPartitionLoadFrequency(m_partitionLoadFrequency) << "&";
  }
  if(m_partitionStartDateHasBeenSet)
  {
      oStream << location << ".PartitionStartDate=" << StringUtils::URLEncode(m_partitionStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_partitionEndDateHasBeenSet)
  {
      oStream << location << ".PartitionEndDate=" << StringUtils::URLEncode(m_partitionEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
