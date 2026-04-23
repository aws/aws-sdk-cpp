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

#include <aws/kafka/model/EncryptionAtRest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

EncryptionAtRest::EncryptionAtRest() : 
    m_dataVolumeKMSKeyIdHasBeenSet(false)
{
}

EncryptionAtRest::EncryptionAtRest(JsonView jsonValue) : 
    m_dataVolumeKMSKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionAtRest& EncryptionAtRest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataVolumeKMSKeyId"))
  {
    m_dataVolumeKMSKeyId = jsonValue.GetString("dataVolumeKMSKeyId");

    m_dataVolumeKMSKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionAtRest::Jsonize() const
{
  JsonValue payload;

  if(m_dataVolumeKMSKeyIdHasBeenSet)
  {
   payload.WithString("dataVolumeKMSKeyId", m_dataVolumeKMSKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
