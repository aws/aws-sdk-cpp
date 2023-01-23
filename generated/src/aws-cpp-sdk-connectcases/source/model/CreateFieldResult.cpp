/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CreateFieldResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateFieldResult::CreateFieldResult()
{
}

CreateFieldResult::CreateFieldResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateFieldResult& CreateFieldResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("fieldArn"))
  {
    m_fieldArn = jsonValue.GetString("fieldArn");

  }

  if(jsonValue.ValueExists("fieldId"))
  {
    m_fieldId = jsonValue.GetString("fieldId");

  }



  return *this;
}
