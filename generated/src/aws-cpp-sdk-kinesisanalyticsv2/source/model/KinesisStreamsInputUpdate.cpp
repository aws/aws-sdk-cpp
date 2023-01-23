/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/KinesisStreamsInputUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

KinesisStreamsInputUpdate::KinesisStreamsInputUpdate() : 
    m_resourceARNUpdateHasBeenSet(false)
{
}

KinesisStreamsInputUpdate::KinesisStreamsInputUpdate(JsonView jsonValue) : 
    m_resourceARNUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisStreamsInputUpdate& KinesisStreamsInputUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceARNUpdate"))
  {
    m_resourceARNUpdate = jsonValue.GetString("ResourceARNUpdate");

    m_resourceARNUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisStreamsInputUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNUpdateHasBeenSet)
  {
   payload.WithString("ResourceARNUpdate", m_resourceARNUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
