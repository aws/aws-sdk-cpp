/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetResourceSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceSetResult::GetResourceSetResult()
{
}

GetResourceSetResult::GetResourceSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceSetResult& GetResourceSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceSet"))
  {
    m_resourceSet = jsonValue.GetObject("ResourceSet");

  }

  if(jsonValue.ValueExists("ResourceSetArn"))
  {
    m_resourceSetArn = jsonValue.GetString("ResourceSetArn");

  }



  return *this;
}
