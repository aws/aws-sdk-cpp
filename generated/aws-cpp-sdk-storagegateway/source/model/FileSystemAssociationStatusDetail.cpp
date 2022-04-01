/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/FileSystemAssociationStatusDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

FileSystemAssociationStatusDetail::FileSystemAssociationStatusDetail() : 
    m_errorCodeHasBeenSet(false)
{
}

FileSystemAssociationStatusDetail::FileSystemAssociationStatusDetail(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemAssociationStatusDetail& FileSystemAssociationStatusDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemAssociationStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
