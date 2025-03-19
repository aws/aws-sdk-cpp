/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetServiceSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServiceSettingsResult::GetServiceSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetServiceSettingsResult& GetServiceSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("S3BucketArn"))
  {
    m_s3BucketArn = jsonValue.GetString("S3BucketArn");
    m_s3BucketArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");
    m_snsTopicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrganizationConfiguration"))
  {
    m_organizationConfiguration = jsonValue.GetObject("OrganizationConfiguration");
    m_organizationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnableCrossAccountsDiscovery"))
  {
    m_enableCrossAccountsDiscovery = jsonValue.GetBool("EnableCrossAccountsDiscovery");
    m_enableCrossAccountsDiscoveryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LicenseManagerResourceShareArn"))
  {
    m_licenseManagerResourceShareArn = jsonValue.GetString("LicenseManagerResourceShareArn");
    m_licenseManagerResourceShareArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
