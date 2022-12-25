/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CreateRelatedItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRelatedItemResult::CreateRelatedItemResult()
{
}

CreateRelatedItemResult::CreateRelatedItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateRelatedItemResult& CreateRelatedItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("relatedItemArn"))
  {
    m_relatedItemArn = jsonValue.GetString("relatedItemArn");

  }

  if(jsonValue.ValueExists("relatedItemId"))
  {
    m_relatedItemId = jsonValue.GetString("relatedItemId");

  }



  return *this;
}
