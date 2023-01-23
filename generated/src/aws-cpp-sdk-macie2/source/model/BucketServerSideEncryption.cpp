/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketServerSideEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

BucketServerSideEncryption::BucketServerSideEncryption() : 
    m_kmsMasterKeyIdHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

BucketServerSideEncryption::BucketServerSideEncryption(JsonView jsonValue) : 
    m_kmsMasterKeyIdHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

BucketServerSideEncryption& BucketServerSideEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsMasterKeyId"))
  {
    m_kmsMasterKeyId = jsonValue.GetString("kmsMasterKeyId");

    m_kmsMasterKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketServerSideEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_kmsMasterKeyIdHasBeenSet)
  {
   payload.WithString("kmsMasterKeyId", m_kmsMasterKeyId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
