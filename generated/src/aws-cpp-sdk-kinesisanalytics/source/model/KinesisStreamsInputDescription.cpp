/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/KinesisStreamsInputDescription.h>
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

KinesisStreamsInputDescription::KinesisStreamsInputDescription() : 
    m_resourceARNHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
}

KinesisStreamsInputDescription::KinesisStreamsInputDescription(JsonView jsonValue) : 
    m_resourceARNHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisStreamsInputDescription& KinesisStreamsInputDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisStreamsInputDescription::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
