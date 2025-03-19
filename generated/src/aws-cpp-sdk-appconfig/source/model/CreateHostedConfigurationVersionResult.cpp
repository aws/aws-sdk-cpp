/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/CreateHostedConfigurationVersionResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

CreateHostedConfigurationVersionResult::CreateHostedConfigurationVersionResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

CreateHostedConfigurationVersionResult& CreateHostedConfigurationVersionResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_content = result.TakeOwnershipOfPayload();
  m_contentHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& applicationIdIter = headers.find("application-id");
  if(applicationIdIter != headers.end())
  {
    m_applicationId = applicationIdIter->second;
    m_applicationIdHasBeenSet = true;
  }

  const auto& configurationProfileIdIter = headers.find("configuration-profile-id");
  if(configurationProfileIdIter != headers.end())
  {
    m_configurationProfileId = configurationProfileIdIter->second;
    m_configurationProfileIdHasBeenSet = true;
  }

  const auto& versionNumberIter = headers.find("version-number");
  if(versionNumberIter != headers.end())
  {
    m_versionNumber = StringUtils::ConvertToInt32(versionNumberIter->second.c_str());
    m_versionNumberHasBeenSet = true;
  }

  const auto& descriptionIter = headers.find("description");
  if(descriptionIter != headers.end())
  {
    m_description = descriptionIter->second;
    m_descriptionHasBeenSet = true;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& versionLabelIter = headers.find("versionlabel");
  if(versionLabelIter != headers.end())
  {
    m_versionLabel = versionLabelIter->second;
    m_versionLabelHasBeenSet = true;
  }

  const auto& kmsKeyArnIter = headers.find("kmskeyarn");
  if(kmsKeyArnIter != headers.end())
  {
    m_kmsKeyArn = kmsKeyArnIter->second;
    m_kmsKeyArnHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}
