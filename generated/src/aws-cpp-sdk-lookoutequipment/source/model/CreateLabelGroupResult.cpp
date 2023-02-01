/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/CreateLabelGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLabelGroupResult::CreateLabelGroupResult()
{
}

CreateLabelGroupResult::CreateLabelGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateLabelGroupResult& CreateLabelGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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



  return *this;
}
