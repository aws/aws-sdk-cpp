/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeLabelGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLabelGroupResult::DescribeLabelGroupResult()
{
}

DescribeLabelGroupResult::DescribeLabelGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLabelGroupResult& DescribeLabelGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LabelGroupName"))
  {
    m_labelGroupName = jsonValue.GetString("LabelGroupName");

  }

  if(jsonValue.ValueExists("LabelGroupArn"))
  {
    m_labelGroupArn = jsonValue.GetString("LabelGroupArn");

  }

  if(jsonValue.ValueExists("FaultCodes"))
  {
    Aws::Utils::Array<JsonView> faultCodesJsonList = jsonValue.GetArray("FaultCodes");
    for(unsigned faultCodesIndex = 0; faultCodesIndex < faultCodesJsonList.GetLength(); ++faultCodesIndex)
    {
      m_faultCodes.push_back(faultCodesJsonList[faultCodesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }



  return *this;
}
