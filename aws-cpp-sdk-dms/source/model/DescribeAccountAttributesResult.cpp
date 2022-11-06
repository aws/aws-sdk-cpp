/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeAccountAttributesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountAttributesResult::DescribeAccountAttributesResult()
{
}

DescribeAccountAttributesResult::DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccountAttributesResult& DescribeAccountAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountQuotas"))
  {
    Aws::Utils::Array<JsonView> accountQuotasJsonList = jsonValue.GetArray("AccountQuotas");
    for(unsigned accountQuotasIndex = 0; accountQuotasIndex < accountQuotasJsonList.GetLength(); ++accountQuotasIndex)
    {
      m_accountQuotas.push_back(accountQuotasJsonList[accountQuotasIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UniqueAccountIdentifier"))
  {
    m_uniqueAccountIdentifier = jsonValue.GetString("UniqueAccountIdentifier");

  }



  return *this;
}
