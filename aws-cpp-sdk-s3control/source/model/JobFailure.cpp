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
      m_failureCode = failureCodeNode.GetText();
      m_failureCodeHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("FailureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = failureReasonNode.GetText();
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
