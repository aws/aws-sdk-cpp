/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExportTableToPointInTimeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportTableToPointInTimeResult::ExportTableToPointInTimeResult()
{
}

ExportTableToPointInTimeResult::ExportTableToPointInTimeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExportTableToPointInTimeResult& ExportTableToPointInTimeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExportDescription"))
  {
    m_exportDescription = jsonValue.GetObject("ExportDescription");

  }



  return *this;
}
