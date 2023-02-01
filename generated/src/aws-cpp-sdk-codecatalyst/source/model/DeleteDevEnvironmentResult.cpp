/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/DeleteDevEnvironmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteDevEnvironmentResult::DeleteDevEnvironmentResult()
{
}

DeleteDevEnvironmentResult::DeleteDevEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteDevEnvironmentResult& DeleteDevEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("spaceName"))
  {
    m_spaceName = jsonValue.GetString("spaceName");

  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }



  return *this;
}
