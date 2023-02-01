/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/SuggestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudSearchDomain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SuggestResult::SuggestResult()
{
}

SuggestResult::SuggestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SuggestResult& SuggestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

  }

  if(jsonValue.ValueExists("suggest"))
  {
    m_suggest = jsonValue.GetObject("suggest");

  }



  return *this;
}
