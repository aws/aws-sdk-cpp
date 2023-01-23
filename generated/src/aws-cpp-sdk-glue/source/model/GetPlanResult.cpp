/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPlanResult::GetPlanResult()
{
}

GetPlanResult::GetPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPlanResult& GetPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PythonScript"))
  {
    m_pythonScript = jsonValue.GetString("PythonScript");

  }

  if(jsonValue.ValueExists("ScalaCode"))
  {
    m_scalaCode = jsonValue.GetString("ScalaCode");

  }



  return *this;
}
