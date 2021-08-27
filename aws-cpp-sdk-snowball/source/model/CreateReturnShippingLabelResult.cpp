/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/CreateReturnShippingLabelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateReturnShippingLabelResult::CreateReturnShippingLabelResult() : 
    m_status(ShippingLabelStatus::NOT_SET)
{
}

CreateReturnShippingLabelResult::CreateReturnShippingLabelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ShippingLabelStatus::NOT_SET)
{
  *this = result;
}

CreateReturnShippingLabelResult& CreateReturnShippingLabelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShippingLabelStatusMapper::GetShippingLabelStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
