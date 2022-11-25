/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotPlacementScore.h>
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

SpotPlacementScore::SpotPlacementScore() : 
    m_regionHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false)
{
}

SpotPlacementScore::SpotPlacementScore(const XmlNode& xmlNode) : 
    m_regionHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false)
{
  *this = xmlNode;
}

SpotPlacementScore& SpotPlacementScore::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionNode = resultNode.FirstChild("region");
    if(!regionNode.IsNull())
    {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if(!availabilityZoneIdNode.IsNull())
    {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode scoreNode = resultNode.FirstChild("score");
    if(!scoreNode.IsNull())
    {
      m_score = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scoreNode.GetText()).c_str()).c_str());
      m_scoreHasBeenSet = true;
    }
  }

  return *this;
}

void SpotPlacementScore::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_regionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_scoreHasBeenSet)
  {
      oStream << location << index << locationValue << ".Score=" << m_score << "&";
  }

}

void SpotPlacementScore::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_regionHasBeenSet)
  {
      oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }
  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if(m_scoreHasBeenSet)
  {
      oStream << location << ".Score=" << m_score << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
