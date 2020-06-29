/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/CreateExclusionsPreviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateExclusionsPreviewResult::CreateExclusionsPreviewResult()
{
}

CreateExclusionsPreviewResult::CreateExclusionsPreviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateExclusionsPreviewResult& CreateExclusionsPreviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("previewToken"))
  {
    m_previewToken = jsonValue.GetString("previewToken");

  }



  return *this;
}
