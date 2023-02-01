/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CreateFormResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateFormResult::CreateFormResult()
{
}

CreateFormResult::CreateFormResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateFormResult& CreateFormResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  m_entity = jsonValue;


  return *this;
}
