/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobFailure.h>
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

JobFailure::JobFailure() : 
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

JobFailure::JobFailure(const XmlNode& xmlNode) : 
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = xmlNode;
}

JobFailure& JobFailure::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode failureCodeNode = resultNode.FirstChild("FailureCode");
    if(!failureCodeNode.IsNull())
    {
      m_failureCode = Aws::Utils::Xml::DecodeEscapedXmlText(failureCodeNode.GetText());
      m_failureCodeHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("FailureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = Aws::Utils::Xml::DecodeEscapedXmlText(failureReasonNode.GetText());
      m_failureReasonHasBeenSet = true;
    }
  }

  return *this;
}

void JobFailure::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_failureCodeHasBeenSet)
  {
   XmlNode failureCodeNode = parentNode.CreateChildElement("FailureCode");
   failureCodeNode.SetText(m_failureCode);
  }

  if(m_failureReasonHasBeenSet)
  {
   XmlNode failureReasonNode = parentNode.CreateChildElement("FailureReason");
   failureReasonNode.SetText(m_failureReason);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
