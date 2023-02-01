/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/InitiateLayerUploadResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InitiateLayerUploadResult::InitiateLayerUploadResult() : 
    m_partSize(0)
{
}

InitiateLayerUploadResult::InitiateLayerUploadResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_partSize(0)
{
  *this = result;
}

InitiateLayerUploadResult& InitiateLayerUploadResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("uploadId"))
  {
    m_uploadId = jsonValue.GetString("uploadId");

  }

  if(jsonValue.ValueExists("partSize"))
  {
    m_partSize = jsonValue.GetInt64("partSize");

  }



  return *this;
}
