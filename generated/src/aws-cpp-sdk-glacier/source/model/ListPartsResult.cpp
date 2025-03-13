/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/ListPartsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPartsResult::ListPartsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPartsResult& ListPartsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MultipartUploadId"))
  {
    m_multipartUploadId = jsonValue.GetString("MultipartUploadId");
    m_multipartUploadIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VaultARN"))
  {
    m_vaultARN = jsonValue.GetString("VaultARN");
    m_vaultARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArchiveDescription"))
  {
    m_archiveDescription = jsonValue.GetString("ArchiveDescription");
    m_archiveDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartSizeInBytes"))
  {
    m_partSizeInBytes = jsonValue.GetInt64("PartSizeInBytes");
    m_partSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Parts"))
  {
    Aws::Utils::Array<JsonView> partsJsonList = jsonValue.GetArray("Parts");
    for(unsigned partsIndex = 0; partsIndex < partsJsonList.GetLength(); ++partsIndex)
    {
      m_parts.push_back(partsJsonList[partsIndex].AsObject());
    }
    m_partsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
