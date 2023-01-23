/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/TerminateRecoveryInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TerminateRecoveryInstancesResult::TerminateRecoveryInstancesResult()
{
}

TerminateRecoveryInstancesResult::TerminateRecoveryInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TerminateRecoveryInstancesResult& TerminateRecoveryInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("job"))
  {
    m_job = jsonValue.GetObject("job");

  }



  return *this;
}
