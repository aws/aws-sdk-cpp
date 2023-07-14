/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BlobMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

BlobMetadata::BlobMetadata() : 
    m_blobIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

BlobMetadata::BlobMetadata(JsonView jsonValue) : 
    m_blobIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

BlobMetadata& BlobMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blobId"))
  {
    m_blobId = jsonValue.GetString("blobId");

    m_blobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mode"))
  {
    m_mode = jsonValue.GetString("mode");

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue BlobMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_blobIdHasBeenSet)
  {
   payload.WithString("blobId", m_blobId);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", m_mode);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
