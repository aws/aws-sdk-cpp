/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AnnotationConsolidationConfig.h>
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

AnnotationConsolidationConfig::AnnotationConsolidationConfig() : 
    m_annotationConsolidationLambdaArnHasBeenSet(false)
{
}

AnnotationConsolidationConfig::AnnotationConsolidationConfig(JsonView jsonValue) : 
    m_annotationConsolidationLambdaArnHasBeenSet(false)
{
  *this = jsonValue;
}

AnnotationConsolidationConfig& AnnotationConsolidationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnnotationConsolidationLambdaArn"))
  {
    m_annotationConsolidationLambdaArn = jsonValue.GetString("AnnotationConsolidationLambdaArn");

    m_annotationConsolidationLambdaArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AnnotationConsolidationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_annotationConsolidationLambdaArnHasBeenSet)
  {
   payload.WithString("AnnotationConsolidationLambdaArn", m_annotationConsolidationLambdaArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
