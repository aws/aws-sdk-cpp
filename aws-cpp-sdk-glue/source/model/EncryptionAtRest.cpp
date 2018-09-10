/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/glue/model/EncryptionAtRest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

EncryptionAtRest::EncryptionAtRest() : 
    m_catalogEncryptionMode(CatalogEncryptionMode::NOT_SET),
    m_catalogEncryptionModeHasBeenSet(false),
    m_sseAwsKmsKeyIdHasBeenSet(false)
{
}

EncryptionAtRest::EncryptionAtRest(JsonView jsonValue) : 
    m_catalogEncryptionMode(CatalogEncryptionMode::NOT_SET),
    m_catalogEncryptionModeHasBeenSet(false),
    m_sseAwsKmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionAtRest& EncryptionAtRest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogEncryptionMode"))
  {
    m_catalogEncryptionMode = CatalogEncryptionModeMapper::GetCatalogEncryptionModeForName(jsonValue.GetString("CatalogEncryptionMode"));

    m_catalogEncryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SseAwsKmsKeyId"))
  {
    m_sseAwsKmsKeyId = jsonValue.GetString("SseAwsKmsKeyId");

    m_sseAwsKmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionAtRest::Jsonize() const
{
  JsonValue payload;

  if(m_catalogEncryptionModeHasBeenSet)
  {
   payload.WithString("CatalogEncryptionMode", CatalogEncryptionModeMapper::GetNameForCatalogEncryptionMode(m_catalogEncryptionMode));
  }

  if(m_sseAwsKmsKeyIdHasBeenSet)
  {
   payload.WithString("SseAwsKmsKeyId", m_sseAwsKmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
