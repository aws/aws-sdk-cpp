/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobProgressSummary.h>
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

JobProgressSummary::JobProgressSummary() : 
    m_totalNumberOfTasks(0),
    m_totalNumberOfTasksHasBeenSet(false),
    m_numberOfTasksSucceeded(0),
    m_numberOfTasksSucceededHasBeenSet(false),
    m_numberOfTasksFailed(0),
    m_numberOfTasksFailedHasBeenSet(false)
{
}

JobProgressSummary::JobProgressSummary(const XmlNode& xmlNode) : 
    m_totalNumberOfTasks(0),
    m_totalNumberOfTasksHasBeenSet(false),
    m_numberOfTasksSucceeded(0),
    m_numberOfTasksSucceededHasBeenSet(false),
    m_numberOfTasksFailed(0),
    m_numberOfTasksFailedHasBeenSet(false)
{
  *this = xmlNode;
}

JobProgressSummary& JobProgressSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode totalNumberOfTasksNode = resultNode.FirstChild("TotalNumberOfTasks");
    if(!totalNumberOfTasksNode.IsNull())
    {
      m_totalNumberOfTasks = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalNumberOfTasksNode.GetText()).c_str()).c_str());
      m_totalNumberOfTasksHasBeenSet = true;
    }
    XmlNode numberOfTasksSucceededNode = resultNode.FirstChild("NumberOfTasksSucceeded");
    if(!numberOfTasksSucceededNode.IsNull())
    {
      m_numberOfTasksSucceeded = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfTasksSucceededNode.GetText()).c_str()).c_str());
      m_numberOfTasksSucceededHasBeenSet = true;
    }
    XmlNode numberOfTasksFailedNode = resultNode.FirstChild("NumberOfTasksFailed");
    if(!numberOfTasksFailedNode.IsNull())
    {
      m_numberOfTasksFailed = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfTasksFailedNode.GetText()).c_str()).c_str());
      m_numberOfTasksFailedHasBeenSet = true;
    }
  }

  return *this;
}

void JobProgressSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_totalNumberOfTasksHasBeenSet)
  {
   XmlNode totalNumberOfTasksNode = parentNode.CreateChildElement("TotalNumberOfTasks");
   ss << m_totalNumberOfTasks;
   totalNumberOfTasksNode.SetText(ss.str());
   ss.str("");
  }

  if(m_numberOfTasksSucceededHasBeenSet)
  {
   XmlNode numberOfTasksSucceededNode = parentNode.CreateChildElement("NumberOfTasksSucceeded");
   ss << m_numberOfTasksSucceeded;
   numberOfTasksSucceededNode.SetText(ss.str());
   ss.str("");
  }

  if(m_numberOfTasksFailedHasBeenSet)
  {
   XmlNode numberOfTasksFailedNode = parentNode.CreateChildElement("NumberOfTasksFailed");
   ss << m_numberOfTasksFailed;
   numberOfTasksFailedNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
