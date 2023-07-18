/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

AppVersionSummary::AppVersionSummary() : 
    m_appVersionHasBeenSet(false)
{
}

AppVersionSummary::AppVersionSummary(JsonView jsonValue) : 
    m_appVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AppVersionSummary& AppVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetString("appVersion");

    m_appVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AppVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appVersionHasBeenSet)
  {
   payload.WithString("appVersion", m_appVersion);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
