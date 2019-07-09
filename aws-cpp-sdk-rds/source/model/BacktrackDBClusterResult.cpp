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

#include <aws/rds/model/BacktrackDBClusterResult.h>
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

BacktrackDBClusterResult::BacktrackDBClusterResult()
{
}

BacktrackDBClusterResult::BacktrackDBClusterResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

BacktrackDBClusterResult& BacktrackDBClusterResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "BacktrackDBClusterResult"))
  {
    resultNode = rootNode.FirstChild("BacktrackDBClusterResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = dBClusterIdentifierNode.GetText();
    }
    XmlNode backtrackIdentifierNode = resultNode.FirstChild("BacktrackIdentifier");
    if(!backtrackIdentifierNode.IsNull())
    {
      m_backtrackIdentifier = backtrackIdentifierNode.GetText();
    }
    XmlNode backtrackToNode = resultNode.FirstChild("BacktrackTo");
    if(!backtrackToNode.IsNull())
    {
      m_backtrackTo = DateTime(StringUtils::Trim(backtrackToNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode backtrackedFromNode = resultNode.FirstChild("BacktrackedFrom");
    if(!backtrackedFromNode.IsNull())
    {
      m_backtrackedFrom = DateTime(StringUtils::Trim(backtrackedFromNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode backtrackRequestCreationTimeNode = resultNode.FirstChild("BacktrackRequestCreationTime");
    if(!backtrackRequestCreationTimeNode.IsNull())
    {
      m_backtrackRequestCreationTime = DateTime(StringUtils::Trim(backtrackRequestCreationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::BacktrackDBClusterResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
