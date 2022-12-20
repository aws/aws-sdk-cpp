/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DnssecKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

DnssecKey::DnssecKey() : 
    m_algorithm(0),
    m_algorithmHasBeenSet(false),
    m_flags(0),
    m_flagsHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_digestType(0),
    m_digestTypeHasBeenSet(false),
    m_digestHasBeenSet(false),
    m_keyTag(0),
    m_keyTagHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

DnssecKey::DnssecKey(JsonView jsonValue) : 
    m_algorithm(0),
    m_algorithmHasBeenSet(false),
    m_flags(0),
    m_flagsHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_digestType(0),
    m_digestTypeHasBeenSet(false),
    m_digestHasBeenSet(false),
    m_keyTag(0),
    m_keyTagHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

DnssecKey& DnssecKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Algorithm"))
  {
    m_algorithm = jsonValue.GetInteger("Algorithm");

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Flags"))
  {
    m_flags = jsonValue.GetInteger("Flags");

    m_flagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = jsonValue.GetString("PublicKey");

    m_publicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DigestType"))
  {
    m_digestType = jsonValue.GetInteger("DigestType");

    m_digestTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Digest"))
  {
    m_digest = jsonValue.GetString("Digest");

    m_digestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyTag"))
  {
    m_keyTag = jsonValue.GetInteger("KeyTag");

    m_keyTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue DnssecKey::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithInteger("Algorithm", m_algorithm);

  }

  if(m_flagsHasBeenSet)
  {
   payload.WithInteger("Flags", m_flags);

  }

  if(m_publicKeyHasBeenSet)
  {
   payload.WithString("PublicKey", m_publicKey);

  }

  if(m_digestTypeHasBeenSet)
  {
   payload.WithInteger("DigestType", m_digestType);

  }

  if(m_digestHasBeenSet)
  {
   payload.WithString("Digest", m_digest);

  }

  if(m_keyTagHasBeenSet)
  {
   payload.WithInteger("KeyTag", m_keyTag);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
