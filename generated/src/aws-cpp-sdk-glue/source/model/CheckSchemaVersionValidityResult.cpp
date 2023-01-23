/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CheckSchemaVersionValidityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CheckSchemaVersionValidityResult::CheckSchemaVersionValidityResult() : 
    m_valid(false)
{
}

CheckSchemaVersionValidityResult::CheckSchemaVersionValidityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_valid(false)
{
  *this = result;
}

CheckSchemaVersionValidityResult& CheckSchemaVersionValidityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Valid"))
  {
    m_valid = jsonValue.GetBool("Valid");

  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

  }



  return *this;
}
