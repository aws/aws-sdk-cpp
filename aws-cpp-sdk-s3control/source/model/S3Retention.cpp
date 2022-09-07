/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3Retention.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

S3Retention::S3Retention() : 
    m_retainUntilDateHasBeenSet(false),
    m_mode(S3ObjectLockRetentionMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

S3Retention::S3Retention(const XmlNode& xmlNode) : 
    m_retainUntilDateHasBeenSet(false),
    m_mode(S3ObjectLockRetentionMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = xmlNode;
}

S3Retention& S3Retention::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode retainUntilDateNode = resultNode.FirstChild("RetainUntilDate");
    if(!retainUntilDateNode.IsNull())
    {
      m_retainUntilDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(retainUntilDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_retainUntilDateHasBeenSet = true;
    }
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if(!modeNode.IsNull())
    {
      m_mode = S3ObjectLockRetentionModeMapper::GetS3ObjectLockRetentionModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()).c_str());
      m_modeHasBeenSet = true;
    }
  }

  return *this;
}

void S3Retention::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_retainUntilDateHasBeenSet)
  {
   XmlNode retainUntilDateNode = parentNode.CreateChildElement("RetainUntilDate");
   retainUntilDateNode.SetText(m_retainUntilDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modeHasBeenSet)
  {
   XmlNode modeNode = parentNode.CreateChildElement("Mode");
   modeNode.SetText(S3ObjectLockRetentionModeMapper::GetNameForS3ObjectLockRetentionMode(m_mode));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
