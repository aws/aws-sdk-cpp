/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/ClaimDevicesByClaimCodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ClaimDevicesByClaimCodeResult::ClaimDevicesByClaimCodeResult() : 
    m_total(0)
{
}

ClaimDevicesByClaimCodeResult::ClaimDevicesByClaimCodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_total(0)
{
  *this = result;
}

ClaimDevicesByClaimCodeResult& ClaimDevicesByClaimCodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("claimCode"))
  {
    m_claimCode = jsonValue.GetString("claimCode");

  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInteger("total");

  }



  return *this;
}
