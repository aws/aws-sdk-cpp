/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ParsePostgres.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

ParsePostgres::ParsePostgres(JsonView jsonValue)
{
  *this = jsonValue;
}

ParsePostgres& ParsePostgres::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ParsePostgres::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
