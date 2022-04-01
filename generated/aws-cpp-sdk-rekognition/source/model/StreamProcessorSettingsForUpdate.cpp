/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorSettingsForUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

StreamProcessorSettingsForUpdate::StreamProcessorSettingsForUpdate() : 
    m_connectedHomeForUpdateHasBeenSet(false)
{
}

StreamProcessorSettingsForUpdate::StreamProcessorSettingsForUpdate(JsonView jsonValue) : 
    m_connectedHomeForUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorSettingsForUpdate& StreamProcessorSettingsForUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectedHomeForUpdate"))
  {
    m_connectedHomeForUpdate = jsonValue.GetObject("ConnectedHomeForUpdate");

    m_connectedHomeForUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessorSettingsForUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_connectedHomeForUpdateHasBeenSet)
  {
   payload.WithObject("ConnectedHomeForUpdate", m_connectedHomeForUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
