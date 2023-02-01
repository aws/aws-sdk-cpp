/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentRelevanceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DocumentRelevanceConfiguration::DocumentRelevanceConfiguration() : 
    m_nameHasBeenSet(false),
    m_relevanceHasBeenSet(false)
{
}

DocumentRelevanceConfiguration::DocumentRelevanceConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_relevanceHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentRelevanceConfiguration& DocumentRelevanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Relevance"))
  {
    m_relevance = jsonValue.GetObject("Relevance");

    m_relevanceHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentRelevanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_relevanceHasBeenSet)
  {
   payload.WithObject("Relevance", m_relevance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
