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

IcebergInput::IcebergInput() : 
    m_metadataOperation(MetadataOperation::NOT_SET),
    m_metadataOperationHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

IcebergInput::IcebergInput(JsonView jsonValue) : 
    m_metadataOperation(MetadataOperation::NOT_SET),
    m_metadataOperationHasBeenSet(false),
    m_versionHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
