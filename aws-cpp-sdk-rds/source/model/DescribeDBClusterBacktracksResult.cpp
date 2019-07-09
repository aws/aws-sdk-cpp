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

#include <aws/rds/model/DescribeDBClusterBacktracksResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeDBClusterBacktracksResult::DescribeDBClusterBacktracksResult()
{
}

DescribeDBClusterBacktracksResult::DescribeDBClusterBacktracksResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBClusterBacktracksResult& DescribeDBClusterBacktracksResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBClusterBacktracksResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBClusterBacktracksResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = markerNode.GetText();
    }
    XmlNode dBClusterBacktracksNode = resultNode.FirstChild("DBClusterBacktracks");
    if(!dBClusterBacktracksNode.IsNull())
    {
      XmlNode dBClusterBacktracksMember = dBClusterBacktracksNode.FirstChild("DBClusterBacktrack");
      while(!dBClusterBacktracksMember.IsNull())
      {
        m_dBClusterBacktracks.push_back(dBClusterBacktracksMember);
        dBClusterBacktracksMember = dBClusterBacktracksMember.NextNode("DBClusterBacktrack");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBClusterBacktracksResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
