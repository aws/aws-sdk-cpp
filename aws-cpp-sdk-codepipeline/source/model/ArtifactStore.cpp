/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ArtifactStore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ArtifactStore::ArtifactStore() : 
    m_type(ArtifactStoreType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false)
{
}

ArtifactStore::ArtifactStore(JsonView jsonValue) : 
    m_type(ArtifactStoreType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactStore& ArtifactStore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ArtifactStoreTypeMapper::GetArtifactStoreTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetObject("encryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactStore::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ArtifactStoreTypeMapper::GetNameForArtifactStoreType(m_type));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithObject("encryptionKey", m_encryptionKey.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
