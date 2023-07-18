﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-instance-connect/model/SendSerialConsoleSSHPublicKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EC2InstanceConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendSerialConsoleSSHPublicKeyResult::SendSerialConsoleSSHPublicKeyResult() : 
    m_success(false)
{
}

SendSerialConsoleSSHPublicKeyResult::SendSerialConsoleSSHPublicKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_success(false)
{
  *this = result;
}

SendSerialConsoleSSHPublicKeyResult& SendSerialConsoleSSHPublicKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
