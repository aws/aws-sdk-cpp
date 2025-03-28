﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/JSONMappingParameters.h>
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

JSONMappingParameters::JSONMappingParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

JSONMappingParameters& JSONMappingParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordRowPath"))
  {
    m_recordRowPath = jsonValue.GetString("RecordRowPath");
    m_recordRowPathHasBeenSet = true;
  }
  return *this;
}

JsonValue JSONMappingParameters::Jsonize() const
{
  JsonValue payload;

  if(m_recordRowPathHasBeenSet)
  {
   payload.WithString("RecordRowPath", m_recordRowPath);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
