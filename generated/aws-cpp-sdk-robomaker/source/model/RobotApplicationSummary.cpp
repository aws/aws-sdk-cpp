﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotApplicationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

RobotApplicationSummary::RobotApplicationSummary() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_robotSoftwareSuiteHasBeenSet(false)
{
}

RobotApplicationSummary::RobotApplicationSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_robotSoftwareSuiteHasBeenSet(false)
{
  *this = jsonValue;
}

RobotApplicationSummary& RobotApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("robotSoftwareSuite"))
  {
    m_robotSoftwareSuite = jsonValue.GetObject("robotSoftwareSuite");

    m_robotSoftwareSuiteHasBeenSet = true;
  }

  return *this;
}

JsonValue RobotApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_robotSoftwareSuiteHasBeenSet)
  {
   payload.WithObject("robotSoftwareSuite", m_robotSoftwareSuite.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
