/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/IncrementalPullConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

IncrementalPullConfig::IncrementalPullConfig() : 
    m_datetimeTypeFieldNameHasBeenSet(false)
{
}

IncrementalPullConfig::IncrementalPullConfig(JsonView jsonValue) : 
    m_datetimeTypeFieldNameHasBeenSet(false)
{
  *this = jsonValue;
}

IncrementalPullConfig& IncrementalPullConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datetimeTypeFieldName"))
  {
    m_datetimeTypeFieldName = jsonValue.GetString("datetimeTypeFieldName");

    m_datetimeTypeFieldNameHasBeenSet = true;
  }

  return *this;
}

JsonValue IncrementalPullConfig::Jsonize() const
{
  JsonValue payload;

  if(m_datetimeTypeFieldNameHasBeenSet)
  {
   payload.WithString("datetimeTypeFieldName", m_datetimeTypeFieldName);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
