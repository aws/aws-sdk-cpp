/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationCommitmentInfo.h>
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

CapacityReservationCommitmentInfo::CapacityReservationCommitmentInfo(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityReservationCommitmentInfo& CapacityReservationCommitmentInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode committedInstanceCountNode = resultNode.FirstChild("committedInstanceCount");
    if(!committedInstanceCountNode.IsNull())
    {
      m_committedInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(committedInstanceCountNode.GetText()).c_str()).c_str());
      m_committedInstanceCountHasBeenSet = true;
    }
    XmlNode commitmentEndDateNode = resultNode.FirstChild("commitmentEndDate");
    if(!commitmentEndDateNode.IsNull())
    {
      m_commitmentEndDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(commitmentEndDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_commitmentEndDateHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationCommitmentInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_committedInstanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".CommittedInstanceCount=" << m_committedInstanceCount << "&";
  }

  if(m_commitmentEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CommitmentEndDate=" << StringUtils::URLEncode(m_commitmentEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void CapacityReservationCommitmentInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_committedInstanceCountHasBeenSet)
  {
      oStream << location << ".CommittedInstanceCount=" << m_committedInstanceCount << "&";
  }
  if(m_commitmentEndDateHasBeenSet)
  {
      oStream << location << ".CommitmentEndDate=" << StringUtils::URLEncode(m_commitmentEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
