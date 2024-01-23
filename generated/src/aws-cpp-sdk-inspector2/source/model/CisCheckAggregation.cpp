/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisCheckAggregation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CisCheckAggregation::CisCheckAggregation() : 
    m_accountIdHasBeenSet(false),
    m_checkDescriptionHasBeenSet(false),
    m_checkIdHasBeenSet(false),
    m_level(CisSecurityLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_scanArnHasBeenSet(false),
    m_statusCountsHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CisCheckAggregation::CisCheckAggregation(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_checkDescriptionHasBeenSet(false),
    m_checkIdHasBeenSet(false),
    m_level(CisSecurityLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_scanArnHasBeenSet(false),
    m_statusCountsHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

CisCheckAggregation& CisCheckAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checkDescription"))
  {
    m_checkDescription = jsonValue.GetString("checkDescription");

    m_checkDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checkId"))
  {
    m_checkId = jsonValue.GetString("checkId");

    m_checkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("level"))
  {
    m_level = CisSecurityLevelMapper::GetCisSecurityLevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanArn"))
  {
    m_scanArn = jsonValue.GetString("scanArn");

    m_scanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCounts"))
  {
    m_statusCounts = jsonValue.GetObject("statusCounts");

    m_statusCountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue CisCheckAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_checkDescriptionHasBeenSet)
  {
   payload.WithString("checkDescription", m_checkDescription);

  }

  if(m_checkIdHasBeenSet)
  {
   payload.WithString("checkId", m_checkId);

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", CisSecurityLevelMapper::GetNameForCisSecurityLevel(m_level));
  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_scanArnHasBeenSet)
  {
   payload.WithString("scanArn", m_scanArn);

  }

  if(m_statusCountsHasBeenSet)
  {
   payload.WithObject("statusCounts", m_statusCounts.Jsonize());

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
