/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshiftserverless/model/RestoreFromRecoveryPointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestoreFromRecoveryPointResult::RestoreFromRecoveryPointResult()
{
}

RestoreFromRecoveryPointResult::RestoreFromRecoveryPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RestoreFromRecoveryPointResult& RestoreFromRecoveryPointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetObject("namespace");

  }

  if(jsonValue.ValueExists("recoveryPointId"))
  {
    m_recoveryPointId = jsonValue.GetString("recoveryPointId");

  }



  return *this;
}
