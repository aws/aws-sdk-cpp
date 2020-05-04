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

#include <aws/s3control/model/S3ObjectLockLegalHold.h>
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

S3ObjectLockLegalHold::S3ObjectLockLegalHold() : 
    m_status(S3ObjectLockLegalHoldStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

S3ObjectLockLegalHold::S3ObjectLockLegalHold(const XmlNode& xmlNode) : 
    m_status(S3ObjectLockLegalHoldStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

S3ObjectLockLegalHold& S3ObjectLockLegalHold::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = S3ObjectLockLegalHoldStatusMapper::GetS3ObjectLockLegalHoldStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void S3ObjectLockLegalHold::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(S3ObjectLockLegalHoldStatusMapper::GetNameForS3ObjectLockLegalHoldStatus(m_status));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
