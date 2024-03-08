/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxSavedownStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxSavedownStorageConfiguration::KxSavedownStorageConfiguration() : 
    m_type(KxSavedownStorageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_volumeNameHasBeenSet(false)
{
}

KxSavedownStorageConfiguration::KxSavedownStorageConfiguration(JsonView jsonValue) : 
    m_type(KxSavedownStorageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_volumeNameHasBeenSet(false)
{
  *this = jsonValue;
}

KxSavedownStorageConfiguration& KxSavedownStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = KxSavedownStorageTypeMapper::GetKxSavedownStorageTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeName"))
  {
    m_volumeName = jsonValue.GetString("volumeName");

    m_volumeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue KxSavedownStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", KxSavedownStorageTypeMapper::GetNameForKxSavedownStorageType(m_type));
  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  if(m_volumeNameHasBeenSet)
  {
   payload.WithString("volumeName", m_volumeName);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
