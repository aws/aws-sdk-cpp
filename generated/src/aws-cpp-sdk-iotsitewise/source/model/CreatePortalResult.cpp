/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreatePortalResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePortalResult::CreatePortalResult()
{
}

CreatePortalResult::CreatePortalResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePortalResult& CreatePortalResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("portalId"))
  {
    m_portalId = jsonValue.GetString("portalId");

  }

  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");

  }

  if(jsonValue.ValueExists("portalStartUrl"))
  {
    m_portalStartUrl = jsonValue.GetString("portalStartUrl");

  }

  if(jsonValue.ValueExists("portalStatus"))
  {
    m_portalStatus = jsonValue.GetObject("portalStatus");

  }

  if(jsonValue.ValueExists("ssoApplicationId"))
  {
    m_ssoApplicationId = jsonValue.GetString("ssoApplicationId");

  }



  return *this;
}
