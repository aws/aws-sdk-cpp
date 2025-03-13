/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribePortalResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePortalResult::DescribePortalResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePortalResult& DescribePortalResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("portalId"))
  {
    m_portalId = jsonValue.GetString("portalId");
    m_portalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");
    m_portalArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalName"))
  {
    m_portalName = jsonValue.GetString("portalName");
    m_portalNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalDescription"))
  {
    m_portalDescription = jsonValue.GetString("portalDescription");
    m_portalDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalClientId"))
  {
    m_portalClientId = jsonValue.GetString("portalClientId");
    m_portalClientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalStartUrl"))
  {
    m_portalStartUrl = jsonValue.GetString("portalStartUrl");
    m_portalStartUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalContactEmail"))
  {
    m_portalContactEmail = jsonValue.GetString("portalContactEmail");
    m_portalContactEmailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalStatus"))
  {
    m_portalStatus = jsonValue.GetObject("portalStatus");
    m_portalStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalCreationDate"))
  {
    m_portalCreationDate = jsonValue.GetDouble("portalCreationDate");
    m_portalCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalLastUpdateDate"))
  {
    m_portalLastUpdateDate = jsonValue.GetDouble("portalLastUpdateDate");
    m_portalLastUpdateDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalLogoImageLocation"))
  {
    m_portalLogoImageLocation = jsonValue.GetObject("portalLogoImageLocation");
    m_portalLogoImageLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalAuthMode"))
  {
    m_portalAuthMode = AuthModeMapper::GetAuthModeForName(jsonValue.GetString("portalAuthMode"));
    m_portalAuthModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notificationSenderEmail"))
  {
    m_notificationSenderEmail = jsonValue.GetString("notificationSenderEmail");
    m_notificationSenderEmailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarms"))
  {
    m_alarms = jsonValue.GetObject("alarms");
    m_alarmsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalType"))
  {
    m_portalType = PortalTypeMapper::GetPortalTypeForName(jsonValue.GetString("portalType"));
    m_portalTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portalTypeConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> portalTypeConfigurationJsonMap = jsonValue.GetObject("portalTypeConfiguration").GetAllObjects();
    for(auto& portalTypeConfigurationItem : portalTypeConfigurationJsonMap)
    {
      m_portalTypeConfiguration[portalTypeConfigurationItem.first] = portalTypeConfigurationItem.second.AsObject();
    }
    m_portalTypeConfigurationHasBeenSet = true;
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
