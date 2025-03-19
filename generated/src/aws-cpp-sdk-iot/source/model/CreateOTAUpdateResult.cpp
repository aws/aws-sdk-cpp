/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateOTAUpdateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateOTAUpdateResult::CreateOTAUpdateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateOTAUpdateResult& CreateOTAUpdateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("otaUpdateId"))
  {
    m_otaUpdateId = jsonValue.GetString("otaUpdateId");
    m_otaUpdateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsIotJobId"))
  {
    m_awsIotJobId = jsonValue.GetString("awsIotJobId");
    m_awsIotJobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("otaUpdateArn"))
  {
    m_otaUpdateArn = jsonValue.GetString("otaUpdateArn");
    m_otaUpdateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsIotJobArn"))
  {
    m_awsIotJobArn = jsonValue.GetString("awsIotJobArn");
    m_awsIotJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("otaUpdateStatus"))
  {
    m_otaUpdateStatus = OTAUpdateStatusMapper::GetOTAUpdateStatusForName(jsonValue.GetString("otaUpdateStatus"));
    m_otaUpdateStatusHasBeenSet = true;
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
