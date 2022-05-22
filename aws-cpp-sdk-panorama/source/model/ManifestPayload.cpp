/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ManifestPayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

ManifestPayload::ManifestPayload() : 
    m_payloadDataHasBeenSet(false)
{
}

ManifestPayload::ManifestPayload(JsonView jsonValue) : 
    m_payloadDataHasBeenSet(false)
{
  *this = jsonValue;
}

ManifestPayload& ManifestPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PayloadData"))
  {
    m_payloadData = jsonValue.GetString("PayloadData");

    m_payloadDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ManifestPayload::Jsonize() const
{
  JsonValue payload;

  if(m_payloadDataHasBeenSet)
  {
   payload.WithString("PayloadData", m_payloadData);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
