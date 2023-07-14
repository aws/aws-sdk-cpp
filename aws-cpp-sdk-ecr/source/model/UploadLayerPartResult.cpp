/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/UploadLayerPartResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UploadLayerPartResult::UploadLayerPartResult() : 
    m_lastByteReceived(0)
{
}

UploadLayerPartResult::UploadLayerPartResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lastByteReceived(0)
{
  *this = result;
}

UploadLayerPartResult& UploadLayerPartResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

  }

  if(jsonValue.ValueExists("uploadId"))
  {
    m_uploadId = jsonValue.GetString("uploadId");

  }

  if(jsonValue.ValueExists("lastByteReceived"))
  {
    m_lastByteReceived = jsonValue.GetInt64("lastByteReceived");

  }



  return *this;
}
