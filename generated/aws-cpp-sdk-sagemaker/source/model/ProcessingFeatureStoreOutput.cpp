/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingFeatureStoreOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ProcessingFeatureStoreOutput::ProcessingFeatureStoreOutput() : 
    m_featureGroupNameHasBeenSet(false)
{
}

ProcessingFeatureStoreOutput::ProcessingFeatureStoreOutput(JsonView jsonValue) : 
    m_featureGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingFeatureStoreOutput& ProcessingFeatureStoreOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

    m_featureGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingFeatureStoreOutput::Jsonize() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
