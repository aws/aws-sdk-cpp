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
#include <aws/redshift/model/EnableLoggingResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

EnableLoggingResult::EnableLoggingResult() : 
    m_loggingEnabled(false),
    m_lastSuccessfulDeliveryTime(0.0),
    m_lastFailureTime(0.0)
{
}

EnableLoggingResult::EnableLoggingResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_loggingEnabled(false),
    m_lastSuccessfulDeliveryTime(0.0),
    m_lastFailureTime(0.0)
{
  *this = result;
}

EnableLoggingResult& EnableLoggingResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("EnableLoggingResult");

  if(!resultNode.IsNull())
  {
    XmlNode loggingEnabledNode = resultNode.FirstChild("LoggingEnabled");
    if(loggingEnabledNode.IsNull())
    {
      loggingEnabledNode = resultNode;
    }

    if(!loggingEnabledNode.IsNull())
    {
      m_loggingEnabled = StringUtils::ConvertToBool(StringUtils::Trim(loggingEnabledNode.GetText().c_str()).c_str());
    }
    XmlNode bucketNameNode = resultNode.FirstChild("BucketName");
    if(bucketNameNode.IsNull())
    {
      bucketNameNode = resultNode;
    }

    if(!bucketNameNode.IsNull())
    {
      m_bucketName = StringUtils::Trim(bucketNameNode.GetText().c_str());
    }
    XmlNode s3KeyPrefixNode = resultNode.FirstChild("S3KeyPrefix");
    if(s3KeyPrefixNode.IsNull())
    {
      s3KeyPrefixNode = resultNode;
    }

    if(!s3KeyPrefixNode.IsNull())
    {
      m_s3KeyPrefix = StringUtils::Trim(s3KeyPrefixNode.GetText().c_str());
    }
    XmlNode lastSuccessfulDeliveryTimeNode = resultNode.FirstChild("LastSuccessfulDeliveryTime");
    if(lastSuccessfulDeliveryTimeNode.IsNull())
    {
      lastSuccessfulDeliveryTimeNode = resultNode;
    }

    if(!lastSuccessfulDeliveryTimeNode.IsNull())
    {
      m_lastSuccessfulDeliveryTime = StringUtils::ConvertToDouble(StringUtils::Trim(lastSuccessfulDeliveryTimeNode.GetText().c_str()).c_str());
    }
    XmlNode lastFailureTimeNode = resultNode.FirstChild("LastFailureTime");
    if(lastFailureTimeNode.IsNull())
    {
      lastFailureTimeNode = resultNode;
    }

    if(!lastFailureTimeNode.IsNull())
    {
      m_lastFailureTime = StringUtils::ConvertToDouble(StringUtils::Trim(lastFailureTimeNode.GetText().c_str()).c_str());
    }
    XmlNode lastFailureMessageNode = resultNode.FirstChild("LastFailureMessage");
    if(lastFailureMessageNode.IsNull())
    {
      lastFailureMessageNode = resultNode;
    }

    if(!lastFailureMessageNode.IsNull())
    {
      m_lastFailureMessage = StringUtils::Trim(lastFailureMessageNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
