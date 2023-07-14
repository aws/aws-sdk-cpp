/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

FeatureValue::FeatureValue() : 
    m_featureNameHasBeenSet(false),
    m_valueAsStringHasBeenSet(false)
{
}

FeatureValue::FeatureValue(JsonView jsonValue) : 
    m_featureNameHasBeenSet(false),
    m_valueAsStringHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureValue& FeatureValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureName"))
  {
    m_featureName = jsonValue.GetString("FeatureName");

    m_featureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueAsString"))
  {
    m_valueAsString = jsonValue.GetString("ValueAsString");

    m_valueAsStringHasBeenSet = true;
  }

  return *this;
}

JsonValue FeatureValue::Jsonize() const
{
  JsonValue payload;

  if(m_featureNameHasBeenSet)
  {
   payload.WithString("FeatureName", m_featureName);

  }

  if(m_valueAsStringHasBeenSet)
  {
   payload.WithString("ValueAsString", m_valueAsString);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
