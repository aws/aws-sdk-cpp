/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisionProductResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ProvisionProductResult::ProvisionProductResult()
{
}

ProvisionProductResult::ProvisionProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ProvisionProductResult& ProvisionProductResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecordDetail"))
  {
    m_recordDetail = jsonValue.GetObject("RecordDetail");

  }



  return *this;
}
