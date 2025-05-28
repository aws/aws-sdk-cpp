/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteSnapshotReturnCode.h>
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

DeleteSnapshotReturnCode::DeleteSnapshotReturnCode(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DeleteSnapshotReturnCode& DeleteSnapshotReturnCode::operator =(const XmlNode& xmlNode)
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
    XmlNode returnCodeNode = resultNode.FirstChild("returnCode");
    if(!returnCodeNode.IsNull())
    {
      m_returnCode = SnapshotReturnCodesMapper::GetSnapshotReturnCodesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnCodeNode.GetText()).c_str()));
      m_returnCodeHasBeenSet = true;
    }
  }

  return *this;
}

void DeleteSnapshotReturnCode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_returnCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReturnCode=" << StringUtils::URLEncode(SnapshotReturnCodesMapper::GetNameForSnapshotReturnCodes(m_returnCode)) << "&";
  }

}

void DeleteSnapshotReturnCode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_returnCodeHasBeenSet)
  {
      oStream << location << ".ReturnCode=" << StringUtils::URLEncode(SnapshotReturnCodesMapper::GetNameForSnapshotReturnCodes(m_returnCode)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
