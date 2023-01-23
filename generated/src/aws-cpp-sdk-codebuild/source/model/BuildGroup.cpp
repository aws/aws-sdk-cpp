/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

BuildGroup::BuildGroup() : 
    m_identifierHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_ignoreFailure(false),
    m_ignoreFailureHasBeenSet(false),
    m_currentBuildSummaryHasBeenSet(false),
    m_priorBuildSummaryListHasBeenSet(false)
{
}

BuildGroup::BuildGroup(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_ignoreFailure(false),
    m_ignoreFailureHasBeenSet(false),
    m_currentBuildSummaryHasBeenSet(false),
    m_priorBuildSummaryListHasBeenSet(false)
{
  *this = jsonValue;
}

BuildGroup& BuildGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependsOn"))
  {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("dependsOn");
    for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
    {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsString());
    }
    m_dependsOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ignoreFailure"))
  {
    m_ignoreFailure = jsonValue.GetBool("ignoreFailure");

    m_ignoreFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentBuildSummary"))
  {
    m_currentBuildSummary = jsonValue.GetObject("currentBuildSummary");

    m_currentBuildSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priorBuildSummaryList"))
  {
    Aws::Utils::Array<JsonView> priorBuildSummaryListJsonList = jsonValue.GetArray("priorBuildSummaryList");
    for(unsigned priorBuildSummaryListIndex = 0; priorBuildSummaryListIndex < priorBuildSummaryListJsonList.GetLength(); ++priorBuildSummaryListIndex)
    {
      m_priorBuildSummaryList.push_back(priorBuildSummaryListJsonList[priorBuildSummaryListIndex].AsObject());
    }
    m_priorBuildSummaryListHasBeenSet = true;
  }

  return *this;
}

JsonValue BuildGroup::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_dependsOnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
   for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
   {
     dependsOnJsonList[dependsOnIndex].AsString(m_dependsOn[dependsOnIndex]);
   }
   payload.WithArray("dependsOn", std::move(dependsOnJsonList));

  }

  if(m_ignoreFailureHasBeenSet)
  {
   payload.WithBool("ignoreFailure", m_ignoreFailure);

  }

  if(m_currentBuildSummaryHasBeenSet)
  {
   payload.WithObject("currentBuildSummary", m_currentBuildSummary.Jsonize());

  }

  if(m_priorBuildSummaryListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> priorBuildSummaryListJsonList(m_priorBuildSummaryList.size());
   for(unsigned priorBuildSummaryListIndex = 0; priorBuildSummaryListIndex < priorBuildSummaryListJsonList.GetLength(); ++priorBuildSummaryListIndex)
   {
     priorBuildSummaryListJsonList[priorBuildSummaryListIndex].AsObject(m_priorBuildSummaryList[priorBuildSummaryListIndex].Jsonize());
   }
   payload.WithArray("priorBuildSummaryList", std::move(priorBuildSummaryListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
