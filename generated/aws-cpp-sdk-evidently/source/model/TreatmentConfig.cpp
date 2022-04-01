/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/TreatmentConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

TreatmentConfig::TreatmentConfig() : 
    m_descriptionHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_variationHasBeenSet(false)
{
}

TreatmentConfig::TreatmentConfig(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_variationHasBeenSet(false)
{
  *this = jsonValue;
}

TreatmentConfig& TreatmentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("feature"))
  {
    m_feature = jsonValue.GetString("feature");

    m_featureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variation"))
  {
    m_variation = jsonValue.GetString("variation");

    m_variationHasBeenSet = true;
  }

  return *this;
}

JsonValue TreatmentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_featureHasBeenSet)
  {
   payload.WithString("feature", m_feature);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_variationHasBeenSet)
  {
   payload.WithString("variation", m_variation);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
