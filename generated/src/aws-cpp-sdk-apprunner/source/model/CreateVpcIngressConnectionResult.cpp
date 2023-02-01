/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CreateVpcIngressConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateVpcIngressConnectionResult::CreateVpcIngressConnectionResult()
{
}

CreateVpcIngressConnectionResult::CreateVpcIngressConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateVpcIngressConnectionResult& CreateVpcIngressConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VpcIngressConnection"))
  {
    m_vpcIngressConnection = jsonValue.GetObject("VpcIngressConnection");

  }



  return *this;
}
