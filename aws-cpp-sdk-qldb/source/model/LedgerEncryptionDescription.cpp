/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/LedgerEncryptionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace Model
{

LedgerEncryptionDescription::LedgerEncryptionDescription() : 
    m_kmsKeyArnHasBeenSet(false),
    m_encryptionStatus(EncryptionStatus::NOT_SET),
    m_encryptionStatusHasBeenSet(false),
    m_inaccessibleKmsKeyDateTimeHasBeenSet(false)
{
}

LedgerEncryptionDescription::LedgerEncryptionDescription(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false),
    m_encryptionStatus(EncryptionStatus::NOT_SET),
    m_encryptionStatusHasBeenSet(false),
    m_inaccessibleKmsKeyDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LedgerEncryptionDescription& LedgerEncryptionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionStatus"))
  {
    m_encryptionStatus = EncryptionStatusMapper::GetEncryptionStatusForName(jsonValue.GetString("EncryptionStatus"));

    m_encryptionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InaccessibleKmsKeyDateTime"))
  {
    m_inaccessibleKmsKeyDateTime = jsonValue.GetDouble("InaccessibleKmsKeyDateTime");

    m_inaccessibleKmsKeyDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LedgerEncryptionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_encryptionStatusHasBeenSet)
  {
   payload.WithString("EncryptionStatus", EncryptionStatusMapper::GetNameForEncryptionStatus(m_encryptionStatus));
  }

  if(m_inaccessibleKmsKeyDateTimeHasBeenSet)
  {
   payload.WithDouble("InaccessibleKmsKeyDateTime", m_inaccessibleKmsKeyDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QLDB
} // namespace Aws
