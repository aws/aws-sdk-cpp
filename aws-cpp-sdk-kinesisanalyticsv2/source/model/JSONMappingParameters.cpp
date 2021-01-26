/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/JSONMappingParameters.h>
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

JSONMappingParameters::JSONMappingParameters() : 
    m_recordRowPathHasBeenSet(false)
{
}

JSONMappingParameters::JSONMappingParameters(JsonView jsonValue) : 
    m_recordRowPathHasBeenSet(false)
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
} // namespace KinesisAnalyticsV2
} // namespace Aws
