/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualServiceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualServiceData::VirtualServiceData() : 
    m_meshNameHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_specHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_virtualServiceNameHasBeenSet(false)
{
}

VirtualServiceData::VirtualServiceData(JsonView jsonValue) : 
    m_meshNameHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_specHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_virtualServiceNameHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualServiceData& VirtualServiceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("meshName"))
  {
    m_meshName = jsonValue.GetString("meshName");

    m_meshNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spec"))
  {
    m_spec = jsonValue.GetObject("spec");

    m_specHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualServiceName"))
  {
    m_virtualServiceName = jsonValue.GetString("virtualServiceName");

    m_virtualServiceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualServiceData::Jsonize() const
{
  JsonValue payload;

  if(m_meshNameHasBeenSet)
  {
   payload.WithString("meshName", m_meshName);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_specHasBeenSet)
  {
   payload.WithObject("spec", m_spec.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_virtualServiceNameHasBeenSet)
  {
   payload.WithString("virtualServiceName", m_virtualServiceName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
