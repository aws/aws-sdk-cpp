/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/S3BatchJobIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

S3BatchJobIdentifier::S3BatchJobIdentifier() : 
    m_bucketHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
}

S3BatchJobIdentifier::S3BatchJobIdentifier(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3BatchJobIdentifier& S3BatchJobIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetObject("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyPrefix"))
  {
    m_keyPrefix = jsonValue.GetString("keyPrefix");

    m_keyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BatchJobIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithObject("identifier", m_identifier.Jsonize());

  }

  if(m_keyPrefixHasBeenSet)
  {
   payload.WithString("keyPrefix", m_keyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
