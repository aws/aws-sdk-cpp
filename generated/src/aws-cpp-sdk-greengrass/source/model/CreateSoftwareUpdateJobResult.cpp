/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateSoftwareUpdateJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSoftwareUpdateJobResult::CreateSoftwareUpdateJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSoftwareUpdateJobResult& CreateSoftwareUpdateJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IotJobArn"))
  {
    m_iotJobArn = jsonValue.GetString("IotJobArn");
    m_iotJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IotJobId"))
  {
    m_iotJobId = jsonValue.GetString("IotJobId");
    m_iotJobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlatformSoftwareVersion"))
  {
    m_platformSoftwareVersion = jsonValue.GetString("PlatformSoftwareVersion");
    m_platformSoftwareVersionHasBeenSet = true;
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
