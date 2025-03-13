/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/SourceDatabaseMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

SourceDatabaseMetadata::SourceDatabaseMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceDatabaseMetadata& SourceDatabaseMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = SourceDatabaseMapper::GetSourceDatabaseForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("captureTool"))
  {
    m_captureTool = CaptureToolMapper::GetCaptureToolForName(jsonValue.GetString("captureTool"));
    m_captureToolHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceDatabaseMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SourceDatabaseMapper::GetNameForSourceDatabase(m_type));
  }

  if(m_captureToolHasBeenSet)
  {
   payload.WithString("captureTool", CaptureToolMapper::GetNameForCaptureTool(m_captureTool));
  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
