/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/glacier/model/ListPartsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPartsResult::ListPartsResult() : 
    m_partSizeInBytes(0)
{
}

ListPartsResult::ListPartsResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_partSizeInBytes(0)
{
  *this = result;
}

ListPartsResult& ListPartsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("MultipartUploadId"))
  {
    m_multipartUploadId = jsonValue.GetString("MultipartUploadId");

  }

  if(jsonValue.ValueExists("VaultARN"))
  {
    m_vaultARN = jsonValue.GetString("VaultARN");

  }

  if(jsonValue.ValueExists("ArchiveDescription"))
  {
    m_archiveDescription = jsonValue.GetString("ArchiveDescription");

  }

  if(jsonValue.ValueExists("PartSizeInBytes"))
  {
    m_partSizeInBytes = jsonValue.GetInt64("PartSizeInBytes");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

  }

  if(jsonValue.ValueExists("Parts"))
  {
    Array<JsonValue> partsJsonList = jsonValue.GetArray("Parts");
    for(unsigned partsIndex = 0; partsIndex < partsJsonList.GetLength(); ++partsIndex)
    {
      m_parts.push_back(partsJsonList[partsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
