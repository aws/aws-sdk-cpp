/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/DisableFastSnapshotRestoreStateErrorItem.h>
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

DisableFastSnapshotRestoreStateErrorItem::DisableFastSnapshotRestoreStateErrorItem() : 
    m_availabilityZoneHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

DisableFastSnapshotRestoreStateErrorItem::DisableFastSnapshotRestoreStateErrorItem(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = xmlNode;
}

DisableFastSnapshotRestoreStateErrorItem& DisableFastSnapshotRestoreStateErrorItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode errorNode = resultNode.FirstChild("error");
    if(!errorNode.IsNull())
    {
      m_error = errorNode;
      m_errorHasBeenSet = true;
    }
  }

  return *this;
}

void DisableFastSnapshotRestoreStateErrorItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_errorHasBeenSet)
  {
      Aws::StringStream errorLocationAndMemberSs;
      errorLocationAndMemberSs << location << index << locationValue << ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMemberSs.str().c_str());
  }

}

void DisableFastSnapshotRestoreStateErrorItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_errorHasBeenSet)
  {
      Aws::String errorLocationAndMember(location);
      errorLocationAndMember += ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
