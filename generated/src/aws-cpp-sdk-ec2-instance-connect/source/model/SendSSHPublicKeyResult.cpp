/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-instance-connect/model/SendSSHPublicKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EC2InstanceConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendSSHPublicKeyResult::SendSSHPublicKeyResult() : 
    m_success(false)
{
}

SendSSHPublicKeyResult::SendSSHPublicKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_success(false)
{
  *this = result;
}

SendSSHPublicKeyResult& SendSSHPublicKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }

  if(jsonValue.ValueExists("Success"))
  {
    m_success = jsonValue.GetBool("Success");

  }



  return *this;
}
