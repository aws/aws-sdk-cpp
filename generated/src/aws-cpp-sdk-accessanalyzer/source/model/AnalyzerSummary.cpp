/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AnalyzerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

AnalyzerSummary::AnalyzerSummary() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastResourceAnalyzedHasBeenSet(false),
    m_lastResourceAnalyzedAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_status(AnalyzerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

AnalyzerSummary::AnalyzerSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastResourceAnalyzedHasBeenSet(false),
    m_lastResourceAnalyzedAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_status(AnalyzerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyzerSummary& AnalyzerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastResourceAnalyzed"))
  {
    m_lastResourceAnalyzed = jsonValue.GetString("lastResourceAnalyzed");

    m_lastResourceAnalyzedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastResourceAnalyzedAt"))
  {
    m_lastResourceAnalyzedAt = jsonValue.GetString("lastResourceAnalyzedAt");

    m_lastResourceAnalyzedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AnalyzerStatusMapper::GetAnalyzerStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetObject("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyzerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastResourceAnalyzedHasBeenSet)
  {
   payload.WithString("lastResourceAnalyzed", m_lastResourceAnalyzed);

  }

  if(m_lastResourceAnalyzedAtHasBeenSet)
  {
   payload.WithString("lastResourceAnalyzedAt", m_lastResourceAnalyzedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AnalyzerStatusMapper::GetNameForAnalyzerStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithObject("statusReason", m_statusReason.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
