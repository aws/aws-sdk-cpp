/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/TestResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

TestResult::TestResult() : 
    m_functionSummaryHasBeenSet(false),
    m_computeUtilizationHasBeenSet(false),
    m_functionExecutionLogsHasBeenSet(false),
    m_functionErrorMessageHasBeenSet(false),
    m_functionOutputHasBeenSet(false)
{
}

TestResult::TestResult(const XmlNode& xmlNode) : 
    m_functionSummaryHasBeenSet(false),
    m_computeUtilizationHasBeenSet(false),
    m_functionExecutionLogsHasBeenSet(false),
    m_functionErrorMessageHasBeenSet(false),
    m_functionOutputHasBeenSet(false)
{
  *this = xmlNode;
}

TestResult& TestResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode functionSummaryNode = resultNode.FirstChild("FunctionSummary");
    if(!functionSummaryNode.IsNull())
    {
      m_functionSummary = functionSummaryNode;
      m_functionSummaryHasBeenSet = true;
    }
    XmlNode computeUtilizationNode = resultNode.FirstChild("ComputeUtilization");
    if(!computeUtilizationNode.IsNull())
    {
      m_computeUtilization = Aws::Utils::Xml::DecodeEscapedXmlText(computeUtilizationNode.GetText());
      m_computeUtilizationHasBeenSet = true;
    }
    XmlNode functionExecutionLogsNode = resultNode.FirstChild("FunctionExecutionLogs");
    if(!functionExecutionLogsNode.IsNull())
    {
      XmlNode functionExecutionLogsMember = functionExecutionLogsNode.FirstChild("member");
      while(!functionExecutionLogsMember.IsNull())
      {
        m_functionExecutionLogs.push_back(functionExecutionLogsMember.GetText());
        functionExecutionLogsMember = functionExecutionLogsMember.NextNode("member");
      }

      m_functionExecutionLogsHasBeenSet = true;
    }
    XmlNode functionErrorMessageNode = resultNode.FirstChild("FunctionErrorMessage");
    if(!functionErrorMessageNode.IsNull())
    {
      m_functionErrorMessage = Aws::Utils::Xml::DecodeEscapedXmlText(functionErrorMessageNode.GetText());
      m_functionErrorMessageHasBeenSet = true;
    }
    XmlNode functionOutputNode = resultNode.FirstChild("FunctionOutput");
    if(!functionOutputNode.IsNull())
    {
      m_functionOutput = Aws::Utils::Xml::DecodeEscapedXmlText(functionOutputNode.GetText());
      m_functionOutputHasBeenSet = true;
    }
  }

  return *this;
}

void TestResult::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_functionSummaryHasBeenSet)
  {
   XmlNode functionSummaryNode = parentNode.CreateChildElement("FunctionSummary");
   m_functionSummary.AddToNode(functionSummaryNode);
  }

  if(m_computeUtilizationHasBeenSet)
  {
   XmlNode computeUtilizationNode = parentNode.CreateChildElement("ComputeUtilization");
   computeUtilizationNode.SetText(m_computeUtilization);
  }

  if(m_functionExecutionLogsHasBeenSet)
  {
   XmlNode functionExecutionLogsParentNode = parentNode.CreateChildElement("FunctionExecutionLogs");
   for(const auto& item : m_functionExecutionLogs)
   {
     XmlNode functionExecutionLogsNode = functionExecutionLogsParentNode.CreateChildElement("String");
     functionExecutionLogsNode.SetText(item);
   }
  }

  if(m_functionErrorMessageHasBeenSet)
  {
   XmlNode functionErrorMessageNode = parentNode.CreateChildElement("FunctionErrorMessage");
   functionErrorMessageNode.SetText(m_functionErrorMessage);
  }

  if(m_functionOutputHasBeenSet)
  {
   XmlNode functionOutputNode = parentNode.CreateChildElement("FunctionOutput");
   functionOutputNode.SetText(m_functionOutput);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
