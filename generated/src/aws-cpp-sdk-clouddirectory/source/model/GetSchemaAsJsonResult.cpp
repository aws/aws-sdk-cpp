/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/GetSchemaAsJsonResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSchemaAsJsonResult::GetSchemaAsJsonResult()
{
}

GetSchemaAsJsonResult::GetSchemaAsJsonResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSchemaAsJsonResult& GetSchemaAsJsonResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Document"))
  {
    m_document = jsonValue.GetString("Document");

  }



  return *this;
}
