/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

LayerFailure::LayerFailure(JsonView jsonValue) : 
    m_layerDigestHasBeenSet(false),
    m_failureCode(LayerFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

LayerFailure& LayerFailure::operator =(JsonView jsonValue)
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
