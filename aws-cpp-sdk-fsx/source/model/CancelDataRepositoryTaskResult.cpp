/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
