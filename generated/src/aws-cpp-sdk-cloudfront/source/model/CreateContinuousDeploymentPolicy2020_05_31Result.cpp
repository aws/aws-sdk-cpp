/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateContinuousDeploymentPolicy2020_05_31Result.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateContinuousDeploymentPolicy2020_05_31Result::CreateContinuousDeploymentPolicy2020_05_31Result()
{
}

CreateContinuousDeploymentPolicy2020_05_31Result::CreateContinuousDeploymentPolicy2020_05_31Result(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateContinuousDeploymentPolicy2020_05_31Result& CreateContinuousDeploymentPolicy2020_05_31Result::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    m_continuousDeploymentPolicy = resultNode;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& locationIter = headers.find("location");
  if(locationIter != headers.end())
  {
    m_location = locationIter->second;
  }

  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
  }

  return *this;
}
