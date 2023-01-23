/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateImageBuilderStreamingURLResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateImageBuilderStreamingURLResult::CreateImageBuilderStreamingURLResult()
{
}

CreateImageBuilderStreamingURLResult::CreateImageBuilderStreamingURLResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateImageBuilderStreamingURLResult& CreateImageBuilderStreamingURLResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StreamingURL"))
  {
    m_streamingURL = jsonValue.GetString("StreamingURL");

  }

  if(jsonValue.ValueExists("Expires"))
  {
    m_expires = jsonValue.GetDouble("Expires");

  }



  return *this;
}
