/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeChapCredentialsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeChapCredentialsResult::DescribeChapCredentialsResult()
{
}

DescribeChapCredentialsResult::DescribeChapCredentialsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeChapCredentialsResult& DescribeChapCredentialsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChapCredentials"))
  {
    Aws::Utils::Array<JsonView> chapCredentialsJsonList = jsonValue.GetArray("ChapCredentials");
    for(unsigned chapCredentialsIndex = 0; chapCredentialsIndex < chapCredentialsJsonList.GetLength(); ++chapCredentialsIndex)
    {
      m_chapCredentials.push_back(chapCredentialsJsonList[chapCredentialsIndex].AsObject());
    }
  }



  return *this;
}
