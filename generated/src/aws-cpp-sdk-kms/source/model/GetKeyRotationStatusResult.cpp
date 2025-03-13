/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GetKeyRotationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetKeyRotationStatusResult::GetKeyRotationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetKeyRotationStatusResult& GetKeyRotationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyRotationEnabled"))
  {
    m_keyRotationEnabled = jsonValue.GetBool("KeyRotationEnabled");
    m_keyRotationEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RotationPeriodInDays"))
  {
    m_rotationPeriodInDays = jsonValue.GetInteger("RotationPeriodInDays");
    m_rotationPeriodInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextRotationDate"))
  {
    m_nextRotationDate = jsonValue.GetDouble("NextRotationDate");
    m_nextRotationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnDemandRotationStartDate"))
  {
    m_onDemandRotationStartDate = jsonValue.GetDouble("OnDemandRotationStartDate");
    m_onDemandRotationStartDateHasBeenSet = true;
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
