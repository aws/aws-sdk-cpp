/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/KinesisStreamsOutputUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

KinesisStreamsOutputUpdate::KinesisStreamsOutputUpdate() : 
    m_resourceARNUpdateHasBeenSet(false),
    m_roleARNUpdateHasBeenSet(false)
{
}

KinesisStreamsOutputUpdate::KinesisStreamsOutputUpdate(JsonView jsonValue) : 
    m_resourceARNUpdateHasBeenSet(false),
    m_roleARNUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisStreamsOutputUpdate& KinesisStreamsOutputUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceARNUpdate"))
  {
    m_resourceARNUpdate = jsonValue.GetString("ResourceARNUpdate");

    m_resourceARNUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARNUpdate"))
  {
    m_roleARNUpdate = jsonValue.GetString("RoleARNUpdate");

    m_roleARNUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisStreamsOutputUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNUpdateHasBeenSet)
  {
   payload.WithString("ResourceARNUpdate", m_resourceARNUpdate);

  }

  if(m_roleARNUpdateHasBeenSet)
  {
   payload.WithString("RoleARNUpdate", m_roleARNUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
