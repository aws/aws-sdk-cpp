/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecr/model/LayerFailure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

LayerFailure::LayerFailure() : 
    m_layerDigestHasBeenSet(false),
    m_failureCode(LayerFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

LayerFailure::LayerFailure(const JsonValue& jsonValue) : 
    m_layerDigestHasBeenSet(false),
    m_failureCode(LayerFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

LayerFailure& LayerFailure::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("layerDigest"))
  {
    m_layerDigest = jsonValue.GetString("layerDigest");

    m_layerDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = LayerFailureCodeMapper::GetLayerFailureCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue LayerFailure::Jsonize() const
{
  JsonValue payload;

  if(m_layerDigestHasBeenSet)
  {
   payload.WithString("layerDigest", m_layerDigest);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", LayerFailureCodeMapper::GetNameForLayerFailureCode(m_failureCode));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws