/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/StorageConfigResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

StorageConfigResponse::StorageConfigResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

StorageConfigResponse& StorageConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blockStorage"))
  {
    m_blockStorage = jsonValue.GetObject("blockStorage");
    m_blockStorageHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_blockStorageHasBeenSet)
  {
   payload.WithObject("blockStorage", m_blockStorage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
