/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/CreateGeoMatchSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateGeoMatchSetResult::CreateGeoMatchSetResult()
{
}

CreateGeoMatchSetResult::CreateGeoMatchSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateGeoMatchSetResult& CreateGeoMatchSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GeoMatchSet"))
  {
    m_geoMatchSet = jsonValue.GetObject("GeoMatchSet");

  }

  if(jsonValue.ValueExists("ChangeToken"))
  {
    m_changeToken = jsonValue.GetString("ChangeToken");

  }



  return *this;
}
