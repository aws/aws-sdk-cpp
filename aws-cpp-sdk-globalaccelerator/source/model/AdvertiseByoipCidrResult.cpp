/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/AdvertiseByoipCidrResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AdvertiseByoipCidrResult::AdvertiseByoipCidrResult()
{
}

AdvertiseByoipCidrResult::AdvertiseByoipCidrResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AdvertiseByoipCidrResult& AdvertiseByoipCidrResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ByoipCidr"))
  {
    m_byoipCidr = jsonValue.GetObject("ByoipCidr");

  }



  return *this;
}
