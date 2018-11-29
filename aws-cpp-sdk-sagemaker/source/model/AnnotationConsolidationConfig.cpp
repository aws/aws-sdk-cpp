/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
