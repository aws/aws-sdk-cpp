/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/GetStreamKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStreamKeyResult::GetStreamKeyResult()
{
}

GetStreamKeyResult::GetStreamKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStreamKeyResult& GetStreamKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("streamKey"))
  {
    m_streamKey = jsonValue.GetObject("streamKey");

  }



  return *this;
}
