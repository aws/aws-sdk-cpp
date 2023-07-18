/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/GetCatalogItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCatalogItemResult::GetCatalogItemResult()
{
}

GetCatalogItemResult::GetCatalogItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCatalogItemResult& GetCatalogItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CatalogItem"))
  {
    m_catalogItem = jsonValue.GetObject("CatalogItem");

  }



  return *this;
}
