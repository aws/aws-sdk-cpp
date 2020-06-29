/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StartImageBuilderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartImageBuilderResult::StartImageBuilderResult()
{
}

StartImageBuilderResult::StartImageBuilderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartImageBuilderResult& StartImageBuilderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImageBuilder"))
  {
    m_imageBuilder = jsonValue.GetObject("ImageBuilder");

  }



  return *this;
}
