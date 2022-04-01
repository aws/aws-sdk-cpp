/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/model/PutObjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaStoreData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutObjectResult::PutObjectResult() : 
    m_storageClass(StorageClass::NOT_SET)
{
}

PutObjectResult::PutObjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_storageClass(StorageClass::NOT_SET)
{
  *this = result;
}

PutObjectResult& PutObjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContentSHA256"))
  {
    m_contentSHA256 = jsonValue.GetString("ContentSHA256");

  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

  }

  if(jsonValue.ValueExists("StorageClass"))
  {
    m_storageClass = StorageClassMapper::GetStorageClassForName(jsonValue.GetString("StorageClass"));

  }



  return *this;
}
