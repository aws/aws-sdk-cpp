/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DefaultServerSideEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

DefaultServerSideEncryption::DefaultServerSideEncryption() : 
    m_encryptionTypeHasBeenSet(false),
    m_kmsMasterKeyArnHasBeenSet(false)
{
}

DefaultServerSideEncryption::DefaultServerSideEncryption(JsonView jsonValue) : 
    m_encryptionTypeHasBeenSet(false),
    m_kmsMasterKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultServerSideEncryption& DefaultServerSideEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = jsonValue.GetString("encryptionType");

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsMasterKeyArn"))
  {
    m_kmsMasterKeyArn = jsonValue.GetString("kmsMasterKeyArn");

    m_kmsMasterKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultServerSideEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", m_encryptionType);

  }

  if(m_kmsMasterKeyArnHasBeenSet)
  {
   payload.WithString("kmsMasterKeyArn", m_kmsMasterKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
