/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GrokClassifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

GrokClassifier::GrokClassifier() : 
    m_nameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_grokPatternHasBeenSet(false),
    m_customPatternsHasBeenSet(false)
{
}

GrokClassifier::GrokClassifier(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_grokPatternHasBeenSet(false),
    m_customPatternsHasBeenSet(false)
{
  *this = jsonValue;
}

GrokClassifier& GrokClassifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrokPattern"))
  {
    m_grokPattern = jsonValue.GetString("GrokPattern");

    m_grokPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomPatterns"))
  {
    m_customPatterns = jsonValue.GetString("CustomPatterns");

    m_customPatternsHasBeenSet = true;
  }

  return *this;
}

JsonValue GrokClassifier::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

  }

  if(m_grokPatternHasBeenSet)
  {
   payload.WithString("GrokPattern", m_grokPattern);

  }

  if(m_customPatternsHasBeenSet)
  {
   payload.WithString("CustomPatterns", m_customPatterns);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
