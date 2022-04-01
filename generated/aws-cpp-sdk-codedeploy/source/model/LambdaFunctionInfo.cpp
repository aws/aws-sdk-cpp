﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/LambdaFunctionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

LambdaFunctionInfo::LambdaFunctionInfo() : 
    m_functionNameHasBeenSet(false),
    m_functionAliasHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_targetVersionWeight(0.0),
    m_targetVersionWeightHasBeenSet(false)
{
}

LambdaFunctionInfo::LambdaFunctionInfo(JsonView jsonValue) : 
    m_functionNameHasBeenSet(false),
    m_functionAliasHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_targetVersionWeight(0.0),
    m_targetVersionWeightHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionInfo& LambdaFunctionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionName"))
  {
    m_functionName = jsonValue.GetString("functionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionAlias"))
  {
    m_functionAlias = jsonValue.GetString("functionAlias");

    m_functionAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentVersion"))
  {
    m_currentVersion = jsonValue.GetString("currentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetVersion"))
  {
    m_targetVersion = jsonValue.GetString("targetVersion");

    m_targetVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetVersionWeight"))
  {
    m_targetVersionWeight = jsonValue.GetDouble("targetVersionWeight");

    m_targetVersionWeightHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("functionName", m_functionName);

  }

  if(m_functionAliasHasBeenSet)
  {
   payload.WithString("functionAlias", m_functionAlias);

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_targetVersionHasBeenSet)
  {
   payload.WithString("targetVersion", m_targetVersion);

  }

  if(m_targetVersionWeightHasBeenSet)
  {
   payload.WithDouble("targetVersionWeight", m_targetVersionWeight);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
