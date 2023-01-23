/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/ListPartsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
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

ListPartsResult::ListPartsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_partSizeInBytes(0)
{
  *this = result;
}

ListPartsResult& ListPartsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Aws::Utils::Array<JsonView> partsJsonList = jsonValue.GetArray("Parts");
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
