/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/VcfHostnames.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

VcfHostnames::VcfHostnames(JsonView jsonValue)
{
  *this = jsonValue;
}

VcfHostnames& VcfHostnames::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vCenter"))
  {
    m_vCenter = jsonValue.GetString("vCenter");
    m_vCenterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsx"))
  {
    m_nsx = jsonValue.GetString("nsx");
    m_nsxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsxManager1"))
  {
    m_nsxManager1 = jsonValue.GetString("nsxManager1");
    m_nsxManager1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsxManager2"))
  {
    m_nsxManager2 = jsonValue.GetString("nsxManager2");
    m_nsxManager2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsxManager3"))
  {
    m_nsxManager3 = jsonValue.GetString("nsxManager3");
    m_nsxManager3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsxEdge1"))
  {
    m_nsxEdge1 = jsonValue.GetString("nsxEdge1");
    m_nsxEdge1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsxEdge2"))
  {
    m_nsxEdge2 = jsonValue.GetString("nsxEdge2");
    m_nsxEdge2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("sddcManager"))
  {
    m_sddcManager = jsonValue.GetString("sddcManager");
    m_sddcManagerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudBuilder"))
  {
    m_cloudBuilder = jsonValue.GetString("cloudBuilder");
    m_cloudBuilderHasBeenSet = true;
  }
  return *this;
}

JsonValue VcfHostnames::Jsonize() const
{
  JsonValue payload;

  if(m_vCenterHasBeenSet)
  {
   payload.WithString("vCenter", m_vCenter);

  }

  if(m_nsxHasBeenSet)
  {
   payload.WithString("nsx", m_nsx);

  }

  if(m_nsxManager1HasBeenSet)
  {
   payload.WithString("nsxManager1", m_nsxManager1);

  }

  if(m_nsxManager2HasBeenSet)
  {
   payload.WithString("nsxManager2", m_nsxManager2);

  }

  if(m_nsxManager3HasBeenSet)
  {
   payload.WithString("nsxManager3", m_nsxManager3);

  }

  if(m_nsxEdge1HasBeenSet)
  {
   payload.WithString("nsxEdge1", m_nsxEdge1);

  }

  if(m_nsxEdge2HasBeenSet)
  {
   payload.WithString("nsxEdge2", m_nsxEdge2);

  }

  if(m_sddcManagerHasBeenSet)
  {
   payload.WithString("sddcManager", m_sddcManager);

  }

  if(m_cloudBuilderHasBeenSet)
  {
   payload.WithString("cloudBuilder", m_cloudBuilder);

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
