/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CreateResolverResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateResolverResult::CreateResolverResult()
{
}

CreateResolverResult::CreateResolverResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateResolverResult& CreateResolverResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resolver"))
  {
    m_resolver = jsonValue.GetObject("resolver");

  }



  return *this;
}
