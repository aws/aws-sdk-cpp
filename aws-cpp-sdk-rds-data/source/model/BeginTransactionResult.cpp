/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/BeginTransactionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BeginTransactionResult::BeginTransactionResult()
{
}

BeginTransactionResult::BeginTransactionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BeginTransactionResult& BeginTransactionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("transactionId"))
  {
    m_transactionId = jsonValue.GetString("transactionId");

  }



  return *this;
}
