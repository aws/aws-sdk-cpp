/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentNodeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AnalyticsIntentNodeSummary::AnalyticsIntentNodeSummary() : 
    m_intentNameHasBeenSet(false),
    m_intentPathHasBeenSet(false),
    m_intentCount(0),
    m_intentCountHasBeenSet(false),
    m_intentLevel(0),
    m_intentLevelHasBeenSet(false),
    m_nodeType(AnalyticsNodeType::NOT_SET),
    m_nodeTypeHasBeenSet(false)
{
}

AnalyticsIntentNodeSummary::AnalyticsIntentNodeSummary(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_intentPathHasBeenSet(false),
    m_intentCount(0),
    m_intentCountHasBeenSet(false),
    m_intentLevel(0),
    m_intentLevelHasBeenSet(false),
    m_nodeType(AnalyticsNodeType::NOT_SET),
    m_nodeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsIntentNodeSummary& AnalyticsIntentNodeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentPath"))
  {
    m_intentPath = jsonValue.GetString("intentPath");

    m_intentPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentCount"))
  {
    m_intentCount = jsonValue.GetInteger("intentCount");

    m_intentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentLevel"))
  {
    m_intentLevel = jsonValue.GetInteger("intentLevel");

    m_intentLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeType"))
  {
    m_nodeType = AnalyticsNodeTypeMapper::GetAnalyticsNodeTypeForName(jsonValue.GetString("nodeType"));

    m_nodeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsIntentNodeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_intentPathHasBeenSet)
  {
   payload.WithString("intentPath", m_intentPath);

  }

  if(m_intentCountHasBeenSet)
  {
   payload.WithInteger("intentCount", m_intentCount);

  }

  if(m_intentLevelHasBeenSet)
  {
   payload.WithInteger("intentLevel", m_intentLevel);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("nodeType", AnalyticsNodeTypeMapper::GetNameForAnalyticsNodeType(m_nodeType));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
