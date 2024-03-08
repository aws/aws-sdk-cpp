/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetModelCompositeModelPathSegment.h>
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

AssetModelCompositeModelPathSegment::AssetModelCompositeModelPathSegment() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AssetModelCompositeModelPathSegment::AssetModelCompositeModelPathSegment(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AssetModelCompositeModelPathSegment& AssetModelCompositeModelPathSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetModelCompositeModelPathSegment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
