﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/importexport/model/GetStatusResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ImportExport::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetStatusResult::GetStatusResult() : 
    m_jobType(JobType::NOT_SET),
    m_errorCount(0)
{
}

GetStatusResult::GetStatusResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_jobType(JobType::NOT_SET),
    m_errorCount(0)
{
  *this = result;
}

GetStatusResult& GetStatusResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "GetStatusResult")
  {
    resultNode = rootNode.FirstChild("GetStatusResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode jobIdNode = resultNode.FirstChild("JobId");
    if(!jobIdNode.IsNull())
    {
      m_jobId = StringUtils::Trim(jobIdNode.GetText().c_str());
    }
    XmlNode jobTypeNode = resultNode.FirstChild("JobType");
    if(!jobTypeNode.IsNull())
    {
      m_jobType = JobTypeMapper::GetJobTypeForName(StringUtils::Trim(jobTypeNode.GetText().c_str()).c_str());
    }
    XmlNode locationCodeNode = resultNode.FirstChild("LocationCode");
    if(!locationCodeNode.IsNull())
    {
      m_locationCode = StringUtils::Trim(locationCodeNode.GetText().c_str());
    }
    XmlNode locationMessageNode = resultNode.FirstChild("LocationMessage");
    if(!locationMessageNode.IsNull())
    {
      m_locationMessage = StringUtils::Trim(locationMessageNode.GetText().c_str());
    }
    XmlNode progressCodeNode = resultNode.FirstChild("ProgressCode");
    if(!progressCodeNode.IsNull())
    {
      m_progressCode = StringUtils::Trim(progressCodeNode.GetText().c_str());
    }
    XmlNode progressMessageNode = resultNode.FirstChild("ProgressMessage");
    if(!progressMessageNode.IsNull())
    {
      m_progressMessage = StringUtils::Trim(progressMessageNode.GetText().c_str());
    }
    XmlNode carrierNode = resultNode.FirstChild("Carrier");
    if(!carrierNode.IsNull())
    {
      m_carrier = StringUtils::Trim(carrierNode.GetText().c_str());
    }
    XmlNode trackingNumberNode = resultNode.FirstChild("TrackingNumber");
    if(!trackingNumberNode.IsNull())
    {
      m_trackingNumber = StringUtils::Trim(trackingNumberNode.GetText().c_str());
    }
    XmlNode logBucketNode = resultNode.FirstChild("LogBucket");
    if(!logBucketNode.IsNull())
    {
      m_logBucket = StringUtils::Trim(logBucketNode.GetText().c_str());
    }
    XmlNode logKeyNode = resultNode.FirstChild("LogKey");
    if(!logKeyNode.IsNull())
    {
      m_logKey = StringUtils::Trim(logKeyNode.GetText().c_str());
    }
    XmlNode errorCountNode = resultNode.FirstChild("ErrorCount");
    if(!errorCountNode.IsNull())
    {
      m_errorCount = StringUtils::ConvertToInt32(StringUtils::Trim(errorCountNode.GetText().c_str()).c_str());
    }
    XmlNode signatureNode = resultNode.FirstChild("Signature");
    if(!signatureNode.IsNull())
    {
      m_signature = StringUtils::Trim(signatureNode.GetText().c_str());
    }
    XmlNode signatureFileContentsNode = resultNode.FirstChild("SignatureFileContents");
    if(!signatureFileContentsNode.IsNull())
    {
      m_signatureFileContents = StringUtils::Trim(signatureFileContentsNode.GetText().c_str());
    }
    XmlNode currentManifestNode = resultNode.FirstChild("CurrentManifest");
    if(!currentManifestNode.IsNull())
    {
      m_currentManifest = StringUtils::Trim(currentManifestNode.GetText().c_str());
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(creationDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode artifactListNode = resultNode.FirstChild("ArtifactList");
    if(!artifactListNode.IsNull())
    {
      XmlNode artifactListMember = artifactListNode.FirstChild("member");
      while(!artifactListMember.IsNull())
      {
        m_artifactList.push_back(artifactListMember);
        artifactListMember = artifactListMember.NextNode("member");
      }

    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::ImportExport::Model::GetStatusResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
