/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/GetTestGridProjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTestGridProjectResult::GetTestGridProjectResult()
{
}

GetTestGridProjectResult::GetTestGridProjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTestGridProjectResult& GetTestGridProjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testGridProject"))
  {
    m_testGridProject = jsonValue.GetObject("testGridProject");

  }



  return *this;
}
