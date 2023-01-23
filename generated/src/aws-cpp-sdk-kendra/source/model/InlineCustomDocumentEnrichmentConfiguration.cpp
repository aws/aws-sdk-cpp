/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/InlineCustomDocumentEnrichmentConfiguration.h>
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

InlineCustomDocumentEnrichmentConfiguration::InlineCustomDocumentEnrichmentConfiguration() : 
    m_conditionHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_documentContentDeletion(false),
    m_documentContentDeletionHasBeenSet(false)
{
}

InlineCustomDocumentEnrichmentConfiguration::InlineCustomDocumentEnrichmentConfiguration(JsonView jsonValue) : 
    m_conditionHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_documentContentDeletion(false),
    m_documentContentDeletionHasBeenSet(false)
{
  *this = jsonValue;
}

InlineCustomDocumentEnrichmentConfiguration& InlineCustomDocumentEnrichmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetObject("Condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetObject("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentContentDeletion"))
  {
    m_documentContentDeletion = jsonValue.GetBool("DocumentContentDeletion");

    m_documentContentDeletionHasBeenSet = true;
  }

  return *this;
}

JsonValue InlineCustomDocumentEnrichmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("Condition", m_condition.Jsonize());

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  if(m_documentContentDeletionHasBeenSet)
  {
   payload.WithBool("DocumentContentDeletion", m_documentContentDeletion);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
