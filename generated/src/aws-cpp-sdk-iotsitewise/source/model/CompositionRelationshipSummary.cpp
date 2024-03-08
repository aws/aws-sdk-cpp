/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CompositionRelationshipSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

CompositionRelationshipSummary::CompositionRelationshipSummary() : 
    m_assetModelIdHasBeenSet(false),
    m_assetModelCompositeModelIdHasBeenSet(false),
    m_assetModelCompositeModelTypeHasBeenSet(false)
{
}

CompositionRelationshipSummary::CompositionRelationshipSummary(JsonView jsonValue) : 
    m_assetModelIdHasBeenSet(false),
    m_assetModelCompositeModelIdHasBeenSet(false),
    m_assetModelCompositeModelTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CompositionRelationshipSummary& CompositionRelationshipSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");

    m_assetModelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetModelCompositeModelId"))
  {
    m_assetModelCompositeModelId = jsonValue.GetString("assetModelCompositeModelId");

    m_assetModelCompositeModelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetModelCompositeModelType"))
  {
    m_assetModelCompositeModelType = jsonValue.GetString("assetModelCompositeModelType");

    m_assetModelCompositeModelTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CompositionRelationshipSummary::Jsonize() const
{
  JsonValue payload;

  if(m_assetModelIdHasBeenSet)
  {
   payload.WithString("assetModelId", m_assetModelId);

  }

  if(m_assetModelCompositeModelIdHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelId", m_assetModelCompositeModelId);

  }

  if(m_assetModelCompositeModelTypeHasBeenSet)
  {
   payload.WithString("assetModelCompositeModelType", m_assetModelCompositeModelType);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
