/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/model/DescribeResizeResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeResizeResult::DescribeResizeResult() : 
    m_targetNumberOfNodes(0),
    m_avgResizeRateInMegaBytesPerSecond(0.0),
    m_totalResizeDataInMegaBytes(0),
    m_progressInMegaBytes(0),
    m_elapsedTimeInSeconds(0),
    m_estimatedTimeToCompletionInSeconds(0)
{
}

DescribeResizeResult::DescribeResizeResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_targetNumberOfNodes(0),
    m_avgResizeRateInMegaBytesPerSecond(0.0),
    m_totalResizeDataInMegaBytes(0),
    m_progressInMegaBytes(0),
    m_elapsedTimeInSeconds(0),
    m_estimatedTimeToCompletionInSeconds(0)
{
  *this = result;
}

DescribeResizeResult& DescribeResizeResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("DescribeResizeResult");

  if(!resultNode.IsNull())
  {
    XmlNode targetNodeTypeNode = resultNode.FirstChild("TargetNodeType");
    m_targetNodeType = StringUtils::Trim(targetNodeTypeNode.GetText().c_str());
    XmlNode targetNumberOfNodesNode = resultNode.FirstChild("TargetNumberOfNodes");
    m_targetNumberOfNodes = StringUtils::ConvertToInt32(StringUtils::Trim(targetNumberOfNodesNode.GetText().c_str()).c_str());
    XmlNode targetClusterTypeNode = resultNode.FirstChild("TargetClusterType");
    m_targetClusterType = StringUtils::Trim(targetClusterTypeNode.GetText().c_str());
    XmlNode statusNode = resultNode.FirstChild("Status");
    m_status = StringUtils::Trim(statusNode.GetText().c_str());
    XmlNode importTablesCompletedNodeParent = resultNode.FirstChild("ImportTablesCompleted");
    XmlNode importTablesCompletedNode = importTablesCompletedNodeParent.FirstChild("member");
    while(!importTablesCompletedNode.IsNull())
    {
      m_importTablesCompleted.push_back(StringUtils::Trim(importTablesCompletedNode.GetText().c_str()));
      importTablesCompletedNode = importTablesCompletedNode.NextNode("member");
    }

    XmlNode importTablesInProgressNodeParent = resultNode.FirstChild("ImportTablesInProgress");
    XmlNode importTablesInProgressNode = importTablesInProgressNodeParent.FirstChild("member");
    while(!importTablesInProgressNode.IsNull())
    {
      m_importTablesInProgress.push_back(StringUtils::Trim(importTablesInProgressNode.GetText().c_str()));
      importTablesInProgressNode = importTablesInProgressNode.NextNode("member");
    }

    XmlNode importTablesNotStartedNodeParent = resultNode.FirstChild("ImportTablesNotStarted");
    XmlNode importTablesNotStartedNode = importTablesNotStartedNodeParent.FirstChild("member");
    while(!importTablesNotStartedNode.IsNull())
    {
      m_importTablesNotStarted.push_back(StringUtils::Trim(importTablesNotStartedNode.GetText().c_str()));
      importTablesNotStartedNode = importTablesNotStartedNode.NextNode("member");
    }

    XmlNode avgResizeRateInMegaBytesPerSecondNode = resultNode.FirstChild("AvgResizeRateInMegaBytesPerSecond");
    m_avgResizeRateInMegaBytesPerSecond = StringUtils::ConvertToDouble(StringUtils::Trim(avgResizeRateInMegaBytesPerSecondNode.GetText().c_str()).c_str());
    XmlNode totalResizeDataInMegaBytesNode = resultNode.FirstChild("TotalResizeDataInMegaBytes");
    m_totalResizeDataInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(totalResizeDataInMegaBytesNode.GetText().c_str()).c_str());
    XmlNode progressInMegaBytesNode = resultNode.FirstChild("ProgressInMegaBytes");
    m_progressInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(progressInMegaBytesNode.GetText().c_str()).c_str());
    XmlNode elapsedTimeInSecondsNode = resultNode.FirstChild("ElapsedTimeInSeconds");
    m_elapsedTimeInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(elapsedTimeInSecondsNode.GetText().c_str()).c_str());
    XmlNode estimatedTimeToCompletionInSecondsNode = resultNode.FirstChild("EstimatedTimeToCompletionInSeconds");
    m_estimatedTimeToCompletionInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(estimatedTimeToCompletionInSecondsNode.GetText().c_str()).c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
