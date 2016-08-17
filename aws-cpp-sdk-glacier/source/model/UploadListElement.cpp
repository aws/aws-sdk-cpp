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
#include <aws/glacier/model/UploadListElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

UploadListElement::UploadListElement() : 
    m_multipartUploadIdHasBeenSet(false),
    m_vaultARNHasBeenSet(false),
    m_archiveDescriptionHasBeenSet(false),
    m_partSizeInBytes(0),
    m_partSizeInBytesHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

UploadListElement::UploadListElement(const JsonValue& jsonValue) : 
    m_multipartUploadIdHasBeenSet(false),
    m_vaultARNHasBeenSet(false),
    m_archiveDescriptionHasBeenSet(false),
    m_partSizeInBytes(0),
    m_partSizeInBytesHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

UploadListElement& UploadListElement::operator =(const JsonValue& jsonValue)
{
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

  return *this;
}

JsonValue UploadListElement::Jsonize() const
{
  JsonValue payload;

  if(m_multipartUploadIdHasBeenSet)
  {
   payload.WithString("MultipartUploadId", m_multipartUploadId);

  }

  if(m_vaultARNHasBeenSet)
  {
   payload.WithString("VaultARN", m_vaultARN);

  }

  if(m_archiveDescriptionHasBeenSet)
  {
   payload.WithString("ArchiveDescription", m_archiveDescription);

  }

  if(m_partSizeInBytesHasBeenSet)
  {
   payload.WithInt64("PartSizeInBytes", m_partSizeInBytes);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws