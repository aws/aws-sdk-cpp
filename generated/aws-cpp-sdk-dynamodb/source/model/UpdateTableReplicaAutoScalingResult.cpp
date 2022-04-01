/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateTableReplicaAutoScalingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateTableReplicaAutoScalingResult::UpdateTableReplicaAutoScalingResult()
{
}

UpdateTableReplicaAutoScalingResult::UpdateTableReplicaAutoScalingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateTableReplicaAutoScalingResult& UpdateTableReplicaAutoScalingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableAutoScalingDescription"))
  {
    m_tableAutoScalingDescription = jsonValue.GetObject("TableAutoScalingDescription");

  }



  return *this;
}
