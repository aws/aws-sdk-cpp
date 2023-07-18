/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DestinationDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

DestinationDetails::DestinationDetails() : 
    m_cloudWatchLogsDetailsHasBeenSet(false),
    m_kinesisFirehoseDetailsHasBeenSet(false)
{
}

DestinationDetails::DestinationDetails(const XmlNode& xmlNode) : 
    m_cloudWatchLogsDetailsHasBeenSet(false),
    m_kinesisFirehoseDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

DestinationDetails& DestinationDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cloudWatchLogsDetailsNode = resultNode.FirstChild("CloudWatchLogsDetails");
    if(!cloudWatchLogsDetailsNode.IsNull())
    {
      m_cloudWatchLogsDetails = cloudWatchLogsDetailsNode;
      m_cloudWatchLogsDetailsHasBeenSet = true;
    }
    XmlNode kinesisFirehoseDetailsNode = resultNode.FirstChild("KinesisFirehoseDetails");
    if(!kinesisFirehoseDetailsNode.IsNull())
    {
      m_kinesisFirehoseDetails = kinesisFirehoseDetailsNode;
      m_kinesisFirehoseDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void DestinationDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cloudWatchLogsDetailsHasBeenSet)
  {
      Aws::StringStream cloudWatchLogsDetailsLocationAndMemberSs;
      cloudWatchLogsDetailsLocationAndMemberSs << location << index << locationValue << ".CloudWatchLogsDetails";
      m_cloudWatchLogsDetails.OutputToStream(oStream, cloudWatchLogsDetailsLocationAndMemberSs.str().c_str());
  }

  if(m_kinesisFirehoseDetailsHasBeenSet)
  {
      Aws::StringStream kinesisFirehoseDetailsLocationAndMemberSs;
      kinesisFirehoseDetailsLocationAndMemberSs << location << index << locationValue << ".KinesisFirehoseDetails";
      m_kinesisFirehoseDetails.OutputToStream(oStream, kinesisFirehoseDetailsLocationAndMemberSs.str().c_str());
  }

}

void DestinationDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cloudWatchLogsDetailsHasBeenSet)
  {
      Aws::String cloudWatchLogsDetailsLocationAndMember(location);
      cloudWatchLogsDetailsLocationAndMember += ".CloudWatchLogsDetails";
      m_cloudWatchLogsDetails.OutputToStream(oStream, cloudWatchLogsDetailsLocationAndMember.c_str());
  }
  if(m_kinesisFirehoseDetailsHasBeenSet)
  {
      Aws::String kinesisFirehoseDetailsLocationAndMember(location);
      kinesisFirehoseDetailsLocationAndMember += ".KinesisFirehoseDetails";
      m_kinesisFirehoseDetails.OutputToStream(oStream, kinesisFirehoseDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
