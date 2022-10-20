/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/ListHypervisorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHypervisorsResult::ListHypervisorsResult()
{
}

ListHypervisorsResult::ListHypervisorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHypervisorsResult& ListHypervisorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Hypervisors"))
  {
    Aws::Utils::Array<JsonView> hypervisorsJsonList = jsonValue.GetArray("Hypervisors");
    for(unsigned hypervisorsIndex = 0; hypervisorsIndex < hypervisorsJsonList.GetLength(); ++hypervisorsIndex)
    {
      m_hypervisors.push_back(hypervisorsJsonList[hypervisorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
