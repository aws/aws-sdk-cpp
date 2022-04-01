/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/KMSKeyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

KMSKeyDetails::KMSKeyDetails() : 
    m_kMSKeyIdHasBeenSet(false),
    m_encryptionOption(EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false)
{
}

KMSKeyDetails::KMSKeyDetails(JsonView jsonValue) : 
    m_kMSKeyIdHasBeenSet(false),
    m_encryptionOption(EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false)
{
  *this = jsonValue;
}

KMSKeyDetails& KMSKeyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KMSKeyId"))
  {
    m_kMSKeyId = jsonValue.GetString("KMSKeyId");

    m_kMSKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionOption"))
  {
    m_encryptionOption = EncryptionOptionMapper::GetEncryptionOptionForName(jsonValue.GetString("EncryptionOption"));

    m_encryptionOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue KMSKeyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_kMSKeyIdHasBeenSet)
  {
   payload.WithString("KMSKeyId", m_kMSKeyId);

  }

  if(m_encryptionOptionHasBeenSet)
  {
   payload.WithString("EncryptionOption", EncryptionOptionMapper::GetNameForEncryptionOption(m_encryptionOption));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
