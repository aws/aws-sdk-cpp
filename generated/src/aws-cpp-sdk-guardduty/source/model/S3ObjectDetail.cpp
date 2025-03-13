/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/S3ObjectDetail.h>
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

S3ObjectDetail::S3ObjectDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

S3ObjectDetail& S3ObjectDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("objectArn"))
  {
    m_objectArn = jsonValue.GetString("objectArn");
    m_objectArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eTag"))
  {
    m_eTag = jsonValue.GetString("eTag");
    m_eTagHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hash"))
  {
    m_hash = jsonValue.GetString("hash");
    m_hashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ObjectDetail::Jsonize() const
{
  JsonValue payload;

  if(m_objectArnHasBeenSet)
  {
   payload.WithString("objectArn", m_objectArn);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("eTag", m_eTag);

  }

  if(m_hashHasBeenSet)
  {
   payload.WithString("hash", m_hash);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("versionId", m_versionId);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
