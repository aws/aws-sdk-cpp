/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/EncryptionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DSQL
{
namespace Model
{

EncryptionDetails::EncryptionDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionDetails& EncryptionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("encryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionStatus"))
  {
    m_encryptionStatus = EncryptionStatusMapper::GetEncryptionStatusForName(jsonValue.GetString("encryptionStatus"));
    m_encryptionStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_encryptionStatusHasBeenSet)
  {
   payload.WithString("encryptionStatus", EncryptionStatusMapper::GetNameForEncryptionStatus(m_encryptionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DSQL
} // namespace Aws
