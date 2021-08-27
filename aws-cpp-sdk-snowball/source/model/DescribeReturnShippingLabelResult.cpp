/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/DescribeReturnShippingLabelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReturnShippingLabelResult::DescribeReturnShippingLabelResult() : 
    m_status(ShippingLabelStatus::NOT_SET)
{
}

DescribeReturnShippingLabelResult::DescribeReturnShippingLabelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ShippingLabelStatus::NOT_SET)
{
  *this = result;
}

DescribeReturnShippingLabelResult& DescribeReturnShippingLabelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShippingLabelStatusMapper::GetShippingLabelStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");

  }



  return *this;
}
