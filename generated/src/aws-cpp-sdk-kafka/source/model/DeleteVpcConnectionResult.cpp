/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DeleteVpcConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteVpcConnectionResult::DeleteVpcConnectionResult() : 
    m_state(VpcConnectionState::NOT_SET)
{
}

DeleteVpcConnectionResult::DeleteVpcConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(VpcConnectionState::NOT_SET)
{
  *this = result;
}

DeleteVpcConnectionResult& DeleteVpcConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("vpcConnectionArn"))
  {
    m_vpcConnectionArn = jsonValue.GetString("vpcConnectionArn");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = VpcConnectionStateMapper::GetVpcConnectionStateForName(jsonValue.GetString("state"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
