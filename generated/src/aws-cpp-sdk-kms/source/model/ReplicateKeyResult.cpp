/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ReplicateKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ReplicateKeyResult::ReplicateKeyResult()
{
}

ReplicateKeyResult::ReplicateKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ReplicateKeyResult& ReplicateKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplicaKeyMetadata"))
  {
    m_replicaKeyMetadata = jsonValue.GetObject("ReplicaKeyMetadata");

  }

  if(jsonValue.ValueExists("ReplicaPolicy"))
  {
    m_replicaPolicy = jsonValue.GetString("ReplicaPolicy");

  }

  if(jsonValue.ValueExists("ReplicaTags"))
  {
    Aws::Utils::Array<JsonView> replicaTagsJsonList = jsonValue.GetArray("ReplicaTags");
    for(unsigned replicaTagsIndex = 0; replicaTagsIndex < replicaTagsJsonList.GetLength(); ++replicaTagsIndex)
    {
      m_replicaTags.push_back(replicaTagsJsonList[replicaTagsIndex].AsObject());
    }
  }



  return *this;
}
