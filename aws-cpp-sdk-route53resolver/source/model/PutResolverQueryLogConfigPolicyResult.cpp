/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/PutResolverQueryLogConfigPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutResolverQueryLogConfigPolicyResult::PutResolverQueryLogConfigPolicyResult() : 
    m_returnValue(false)
{
}

PutResolverQueryLogConfigPolicyResult::PutResolverQueryLogConfigPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_returnValue(false)
{
  *this = result;
}

PutResolverQueryLogConfigPolicyResult& PutResolverQueryLogConfigPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReturnValue"))
  {
    m_returnValue = jsonValue.GetBool("ReturnValue");

  }



  return *this;
}
