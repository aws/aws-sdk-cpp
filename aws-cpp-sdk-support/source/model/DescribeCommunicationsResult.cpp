/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeCommunicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCommunicationsResult::DescribeCommunicationsResult()
{
}

DescribeCommunicationsResult::DescribeCommunicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCommunicationsResult& DescribeCommunicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("communications"))
  {
    Aws::Utils::Array<JsonView> communicationsJsonList = jsonValue.GetArray("communications");
    for(unsigned communicationsIndex = 0; communicationsIndex < communicationsJsonList.GetLength(); ++communicationsIndex)
    {
      m_communications.push_back(communicationsJsonList[communicationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
