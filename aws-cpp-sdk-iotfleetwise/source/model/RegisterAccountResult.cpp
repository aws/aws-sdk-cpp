/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/RegisterAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterAccountResult::RegisterAccountResult() : 
    m_registerAccountStatus(RegistrationStatus::NOT_SET)
{
}

RegisterAccountResult::RegisterAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_registerAccountStatus(RegistrationStatus::NOT_SET)
{
  *this = result;
}

RegisterAccountResult& RegisterAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registerAccountStatus"))
  {
    m_registerAccountStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("registerAccountStatus"));

  }

  if(jsonValue.ValueExists("timestreamResources"))
  {
    m_timestreamResources = jsonValue.GetObject("timestreamResources");

  }

  if(jsonValue.ValueExists("iamResources"))
  {
    m_iamResources = jsonValue.GetObject("iamResources");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");

  }



  return *this;
}
