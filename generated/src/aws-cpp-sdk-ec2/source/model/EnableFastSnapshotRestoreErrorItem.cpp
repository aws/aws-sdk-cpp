/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableFastSnapshotRestoreErrorItem.h>
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

EnableFastSnapshotRestoreErrorItem::EnableFastSnapshotRestoreErrorItem() : 
    m_snapshotIdHasBeenSet(false),
    m_fastSnapshotRestoreStateErrorsHasBeenSet(false)
{
}

EnableFastSnapshotRestoreErrorItem::EnableFastSnapshotRestoreErrorItem(const XmlNode& xmlNode) : 
    m_snapshotIdHasBeenSet(false),
    m_fastSnapshotRestoreStateErrorsHasBeenSet(false)
{
  *this = xmlNode;
}

EnableFastSnapshotRestoreErrorItem& EnableFastSnapshotRestoreErrorItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode fastSnapshotRestoreStateErrorsNode = resultNode.FirstChild("fastSnapshotRestoreStateErrorSet");
    if(!fastSnapshotRestoreStateErrorsNode.IsNull())
    {
      XmlNode fastSnapshotRestoreStateErrorsMember = fastSnapshotRestoreStateErrorsNode.FirstChild("item");
      while(!fastSnapshotRestoreStateErrorsMember.IsNull())
      {
        m_fastSnapshotRestoreStateErrors.push_back(fastSnapshotRestoreStateErrorsMember);
        fastSnapshotRestoreStateErrorsMember = fastSnapshotRestoreStateErrorsMember.NextNode("item");
      }

      m_fastSnapshotRestoreStateErrorsHasBeenSet = true;
    }
  }

  return *this;
}

void EnableFastSnapshotRestoreErrorItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_fastSnapshotRestoreStateErrorsHasBeenSet)
  {
      unsigned fastSnapshotRestoreStateErrorsIdx = 1;
      for(auto& item : m_fastSnapshotRestoreStateErrors)
      {
        Aws::StringStream fastSnapshotRestoreStateErrorsSs;
        fastSnapshotRestoreStateErrorsSs << location << index << locationValue << ".FastSnapshotRestoreStateErrorSet." << fastSnapshotRestoreStateErrorsIdx++;
        item.OutputToStream(oStream, fastSnapshotRestoreStateErrorsSs.str().c_str());
      }
  }

}

void EnableFastSnapshotRestoreErrorItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_fastSnapshotRestoreStateErrorsHasBeenSet)
  {
      unsigned fastSnapshotRestoreStateErrorsIdx = 1;
      for(auto& item : m_fastSnapshotRestoreStateErrors)
      {
        Aws::StringStream fastSnapshotRestoreStateErrorsSs;
        fastSnapshotRestoreStateErrorsSs << location <<  ".FastSnapshotRestoreStateErrorSet." << fastSnapshotRestoreStateErrorsIdx++;
        item.OutputToStream(oStream, fastSnapshotRestoreStateErrorsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
