﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DestinationOptionsRequest.h>
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

DestinationOptionsRequest::DestinationOptionsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DestinationOptionsRequest& DestinationOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fileFormatNode = resultNode.FirstChild("FileFormat");
    if(!fileFormatNode.IsNull())
    {
      m_fileFormat = DestinationFileFormatMapper::GetDestinationFileFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fileFormatNode.GetText()).c_str()));
      m_fileFormatHasBeenSet = true;
    }
    XmlNode hiveCompatiblePartitionsNode = resultNode.FirstChild("HiveCompatiblePartitions");
    if(!hiveCompatiblePartitionsNode.IsNull())
    {
      m_hiveCompatiblePartitions = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hiveCompatiblePartitionsNode.GetText()).c_str()).c_str());
      m_hiveCompatiblePartitionsHasBeenSet = true;
    }
    XmlNode perHourPartitionNode = resultNode.FirstChild("PerHourPartition");
    if(!perHourPartitionNode.IsNull())
    {
      m_perHourPartition = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(perHourPartitionNode.GetText()).c_str()).c_str());
      m_perHourPartitionHasBeenSet = true;
    }
  }

  return *this;
}

void DestinationOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fileFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".FileFormat=" << StringUtils::URLEncode(DestinationFileFormatMapper::GetNameForDestinationFileFormat(m_fileFormat)) << "&";
  }

  if(m_hiveCompatiblePartitionsHasBeenSet)
  {
      oStream << location << index << locationValue << ".HiveCompatiblePartitions=" << std::boolalpha << m_hiveCompatiblePartitions << "&";
  }

  if(m_perHourPartitionHasBeenSet)
  {
      oStream << location << index << locationValue << ".PerHourPartition=" << std::boolalpha << m_perHourPartition << "&";
  }

}

void DestinationOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fileFormatHasBeenSet)
  {
      oStream << location << ".FileFormat=" << StringUtils::URLEncode(DestinationFileFormatMapper::GetNameForDestinationFileFormat(m_fileFormat)) << "&";
  }
  if(m_hiveCompatiblePartitionsHasBeenSet)
  {
      oStream << location << ".HiveCompatiblePartitions=" << std::boolalpha << m_hiveCompatiblePartitions << "&";
  }
  if(m_perHourPartitionHasBeenSet)
  {
      oStream << location << ".PerHourPartition=" << std::boolalpha << m_perHourPartition << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
