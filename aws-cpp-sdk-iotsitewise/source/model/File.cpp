/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/File.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

File::File() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

File::File(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
  *this = jsonValue;
}

File& File::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetString("versionId");

    m_versionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue File::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("versionId", m_versionId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
