/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreatePresignedPortalUrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePresignedPortalUrlResult::CreatePresignedPortalUrlResult()
{
}

CreatePresignedPortalUrlResult::CreatePresignedPortalUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePresignedPortalUrlResult& CreatePresignedPortalUrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("presignedPortalUrl"))
  {
    m_presignedPortalUrl = jsonValue.GetString("presignedPortalUrl");

  }



  return *this;
}
