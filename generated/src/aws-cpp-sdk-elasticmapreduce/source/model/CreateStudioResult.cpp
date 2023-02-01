/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CreateStudioResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateStudioResult::CreateStudioResult()
{
}

CreateStudioResult::CreateStudioResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateStudioResult& CreateStudioResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StudioId"))
  {
    m_studioId = jsonValue.GetString("StudioId");

  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

  }



  return *this;
}
