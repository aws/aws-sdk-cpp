/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateIngestionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIngestionResult::CreateIngestionResult() : 
    m_ingestionStatus(IngestionStatus::NOT_SET),
    m_status(0)
{
}

CreateIngestionResult::CreateIngestionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_ingestionStatus(IngestionStatus::NOT_SET),
    m_status(0)
{
  *this = result;
}

CreateIngestionResult& CreateIngestionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("IngestionId"))
  {
    m_ingestionId = jsonValue.GetString("IngestionId");

  }

  if(jsonValue.ValueExists("IngestionStatus"))
  {
    m_ingestionStatus = IngestionStatusMapper::GetIngestionStatusForName(jsonValue.GetString("IngestionStatus"));

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
