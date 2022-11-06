/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListStackInstancesForProvisionedProductResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStackInstancesForProvisionedProductResult::ListStackInstancesForProvisionedProductResult()
{
}

ListStackInstancesForProvisionedProductResult::ListStackInstancesForProvisionedProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStackInstancesForProvisionedProductResult& ListStackInstancesForProvisionedProductResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StackInstances"))
  {
    Aws::Utils::Array<JsonView> stackInstancesJsonList = jsonValue.GetArray("StackInstances");
    for(unsigned stackInstancesIndex = 0; stackInstancesIndex < stackInstancesJsonList.GetLength(); ++stackInstancesIndex)
    {
      m_stackInstances.push_back(stackInstancesJsonList[stackInstancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
