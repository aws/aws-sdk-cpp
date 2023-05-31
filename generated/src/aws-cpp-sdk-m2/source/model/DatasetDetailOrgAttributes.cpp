/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DatasetDetailOrgAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

DatasetDetailOrgAttributes::DatasetDetailOrgAttributes() : 
    m_gdgHasBeenSet(false),
    m_poHasBeenSet(false),
    m_psHasBeenSet(false),
    m_vsamHasBeenSet(false)
{
}

DatasetDetailOrgAttributes::DatasetDetailOrgAttributes(JsonView jsonValue) : 
    m_gdgHasBeenSet(false),
    m_poHasBeenSet(false),
    m_psHasBeenSet(false),
    m_vsamHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetDetailOrgAttributes& DatasetDetailOrgAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gdg"))
  {
    m_gdg = jsonValue.GetObject("gdg");

    m_gdgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("po"))
  {
    m_po = jsonValue.GetObject("po");

    m_poHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ps"))
  {
    m_ps = jsonValue.GetObject("ps");

    m_psHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vsam"))
  {
    m_vsam = jsonValue.GetObject("vsam");

    m_vsamHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetDetailOrgAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_gdgHasBeenSet)
  {
   payload.WithObject("gdg", m_gdg.Jsonize());

  }

  if(m_poHasBeenSet)
  {
   payload.WithObject("po", m_po.Jsonize());

  }

  if(m_psHasBeenSet)
  {
   payload.WithObject("ps", m_ps.Jsonize());

  }

  if(m_vsamHasBeenSet)
  {
   payload.WithObject("vsam", m_vsam.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
