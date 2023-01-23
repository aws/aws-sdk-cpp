/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/IncreaseReplicationFactorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

IncreaseReplicationFactorResult::IncreaseReplicationFactorResult()
{
}

IncreaseReplicationFactorResult::IncreaseReplicationFactorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

IncreaseReplicationFactorResult& IncreaseReplicationFactorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Cluster"))
  {
    m_cluster = jsonValue.GetObject("Cluster");

  }



  return *this;
}
