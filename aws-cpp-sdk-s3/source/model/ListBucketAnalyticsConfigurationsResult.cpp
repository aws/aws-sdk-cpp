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
#include <aws/s3/model/ListBucketAnalyticsConfigurationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListBucketAnalyticsConfigurationsResult::ListBucketAnalyticsConfigurationsResult() : 
    m_isTruncated(false)
{
}

ListBucketAnalyticsConfigurationsResult::ListBucketAnalyticsConfigurationsResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListBucketAnalyticsConfigurationsResult& ListBucketAnalyticsConfigurationsResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode continuationTokenNode = resultNode.FirstChild("ContinuationToken");
    if(!continuationTokenNode.IsNull())
    {
      m_continuationToken = StringUtils::Trim(continuationTokenNode.GetText().c_str());
    }
    XmlNode nextContinuationTokenNode = resultNode.FirstChild("NextContinuationToken");
    if(!nextContinuationTokenNode.IsNull())
    {
      m_nextContinuationToken = StringUtils::Trim(nextContinuationTokenNode.GetText().c_str());
    }
    XmlNode analyticsConfigurationListNode = resultNode.FirstChild("AnalyticsConfiguration");
    if(!analyticsConfigurationListNode.IsNull())
    {
      XmlNode analyticsConfigurationMember = analyticsConfigurationListNode;
      while(!analyticsConfigurationMember.IsNull())
      {
        m_analyticsConfigurationList.push_back(analyticsConfigurationMember);
        analyticsConfigurationMember = analyticsConfigurationMember.NextNode("AnalyticsConfiguration");
      }

    }
  }

  return *this;
}
