/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListOfferingPromotionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOfferingPromotionsResult::ListOfferingPromotionsResult()
{
}

ListOfferingPromotionsResult::ListOfferingPromotionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOfferingPromotionsResult& ListOfferingPromotionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("offeringPromotions"))
  {
    Aws::Utils::Array<JsonView> offeringPromotionsJsonList = jsonValue.GetArray("offeringPromotions");
    for(unsigned offeringPromotionsIndex = 0; offeringPromotionsIndex < offeringPromotionsJsonList.GetLength(); ++offeringPromotionsIndex)
    {
      m_offeringPromotions.push_back(offeringPromotionsJsonList[offeringPromotionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
