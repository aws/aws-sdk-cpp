/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CancelDataRepositoryTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelDataRepositoryTaskResult::CancelDataRepositoryTaskResult() : 
    m_lifecycle(DataRepositoryTaskLifecycle::NOT_SET)
{
}

CancelDataRepositoryTaskResult::CancelDataRepositoryTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifecycle(DataRepositoryTaskLifecycle::NOT_SET)
{
  *this = result;
}

CancelDataRepositoryTaskResult& CancelDataRepositoryTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = DataRepositoryTaskLifecycleMapper::GetDataRepositoryTaskLifecycleForName(jsonValue.GetString("Lifecycle"));

  }

  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");

  }



  return *this;
}
