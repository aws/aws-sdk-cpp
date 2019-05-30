/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> stackInstancesJsonList = jsonValue.GetArray("StackInstances");
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
