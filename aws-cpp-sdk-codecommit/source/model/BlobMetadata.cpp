/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

BlobMetadata::BlobMetadata(const JsonValue& jsonValue) : 
    m_blobIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

BlobMetadata& BlobMetadata::operator =(const JsonValue& jsonValue)
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