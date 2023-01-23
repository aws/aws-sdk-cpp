/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/CancelQuantumTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelQuantumTaskResult::CancelQuantumTaskResult() : 
    m_cancellationStatus(CancellationStatus::NOT_SET)
{
}

CancelQuantumTaskResult::CancelQuantumTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_cancellationStatus(CancellationStatus::NOT_SET)
{
  *this = result;
}

CancelQuantumTaskResult& CancelQuantumTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cancellationStatus"))
  {
    m_cancellationStatus = CancellationStatusMapper::GetCancellationStatusForName(jsonValue.GetString("cancellationStatus"));

  }

  if(jsonValue.ValueExists("quantumTaskArn"))
  {
    m_quantumTaskArn = jsonValue.GetString("quantumTaskArn");

  }



  return *this;
}
