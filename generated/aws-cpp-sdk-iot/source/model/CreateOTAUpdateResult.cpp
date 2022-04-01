/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateOTAUpdateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateOTAUpdateResult::CreateOTAUpdateResult() : 
    m_otaUpdateStatus(OTAUpdateStatus::NOT_SET)
{
}

CreateOTAUpdateResult::CreateOTAUpdateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_otaUpdateStatus(OTAUpdateStatus::NOT_SET)
{
  *this = result;
}

CreateOTAUpdateResult& CreateOTAUpdateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("otaUpdateId"))
  {
    m_otaUpdateId = jsonValue.GetString("otaUpdateId");

  }

  if(jsonValue.ValueExists("awsIotJobId"))
  {
    m_awsIotJobId = jsonValue.GetString("awsIotJobId");

  }

  if(jsonValue.ValueExists("otaUpdateArn"))
  {
    m_otaUpdateArn = jsonValue.GetString("otaUpdateArn");

  }

  if(jsonValue.ValueExists("awsIotJobArn"))
  {
    m_awsIotJobArn = jsonValue.GetString("awsIotJobArn");

  }

  if(jsonValue.ValueExists("otaUpdateStatus"))
  {
    m_otaUpdateStatus = OTAUpdateStatusMapper::GetOTAUpdateStatusForName(jsonValue.GetString("otaUpdateStatus"));

  }



  return *this;
}
