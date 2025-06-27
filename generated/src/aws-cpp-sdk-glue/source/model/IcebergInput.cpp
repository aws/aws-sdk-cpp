/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

IcebergInput::IcebergInput(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergInput& IcebergInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetadataOperation"))
  {
    m_metadataOperation = MetadataOperationMapper::GetMetadataOperationForName(jsonValue.GetString("MetadataOperation"));
    m_metadataOperationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateIcebergTableInput"))
  {
    m_createIcebergTableInput = jsonValue.GetObject("CreateIcebergTableInput");
    m_createIcebergTableInputHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergInput::Jsonize() const
{
  JsonValue payload;

  if(m_metadataOperationHasBeenSet)
  {
   payload.WithString("MetadataOperation", MetadataOperationMapper::GetNameForMetadataOperation(m_metadataOperation));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_createIcebergTableInputHasBeenSet)
  {
   payload.WithObject("CreateIcebergTableInput", m_createIcebergTableInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
