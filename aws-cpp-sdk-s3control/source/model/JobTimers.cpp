/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobTimers.h>
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

JobTimers::JobTimers() : 
    m_elapsedTimeInActiveSeconds(0),
    m_elapsedTimeInActiveSecondsHasBeenSet(false)
{
}

JobTimers::JobTimers(const XmlNode& xmlNode) : 
    m_elapsedTimeInActiveSeconds(0),
    m_elapsedTimeInActiveSecondsHasBeenSet(false)
{
  *this = xmlNode;
}

JobTimers& JobTimers::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode elapsedTimeInActiveSecondsNode = resultNode.FirstChild("ElapsedTimeInActiveSeconds");
    if(!elapsedTimeInActiveSecondsNode.IsNull())
    {
      m_elapsedTimeInActiveSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(elapsedTimeInActiveSecondsNode.GetText()).c_str()).c_str());
      m_elapsedTimeInActiveSecondsHasBeenSet = true;
    }
  }

  return *this;
}

void JobTimers::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_elapsedTimeInActiveSecondsHasBeenSet)
  {
   XmlNode elapsedTimeInActiveSecondsNode = parentNode.CreateChildElement("ElapsedTimeInActiveSeconds");
   ss << m_elapsedTimeInActiveSeconds;
   elapsedTimeInActiveSecondsNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
