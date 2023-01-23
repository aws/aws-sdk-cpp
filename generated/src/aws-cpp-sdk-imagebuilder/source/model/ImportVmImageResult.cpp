/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImportVmImageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportVmImageResult::ImportVmImageResult()
{
}

ImportVmImageResult::ImportVmImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ImportVmImageResult& ImportVmImageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("imageArn"))
  {
    m_imageArn = jsonValue.GetString("imageArn");

  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

  }



  return *this;
}
