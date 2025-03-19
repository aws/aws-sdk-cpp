/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TargetDatabaseMetadata.h>
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

TargetDatabaseMetadata::TargetDatabaseMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetDatabaseMetadata& TargetDatabaseMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = TargetDatabaseMapper::GetTargetDatabaseForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("captureTool"))
  {
    m_captureTool = CaptureToolMapper::GetCaptureToolForName(jsonValue.GetString("captureTool"));
    m_captureToolHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetDatabaseMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TargetDatabaseMapper::GetNameForTargetDatabase(m_type));
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
