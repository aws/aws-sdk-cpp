/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/ProductionBranch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

ProductionBranch::ProductionBranch() : 
    m_lastDeployTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
}

ProductionBranch::ProductionBranch(JsonView jsonValue) : 
    m_lastDeployTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionBranch& ProductionBranch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastDeployTime"))
  {
    m_lastDeployTime = jsonValue.GetDouble("lastDeployTime");

    m_lastDeployTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thumbnailUrl"))
  {
    m_thumbnailUrl = jsonValue.GetString("thumbnailUrl");

    m_thumbnailUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchName"))
  {
    m_branchName = jsonValue.GetString("branchName");

    m_branchNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionBranch::Jsonize() const
{
  JsonValue payload;

  if(m_lastDeployTimeHasBeenSet)
  {
   payload.WithDouble("lastDeployTime", m_lastDeployTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_thumbnailUrlHasBeenSet)
  {
   payload.WithString("thumbnailUrl", m_thumbnailUrl);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
