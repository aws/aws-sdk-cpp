/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/CdcSpecificationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

CdcSpecificationSummary::CdcSpecificationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CdcSpecificationSummary& CdcSpecificationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = CdcStatusMapper::GetCdcStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("viewType"))
  {
    m_viewType = ViewTypeMapper::GetViewTypeForName(jsonValue.GetString("viewType"));
    m_viewTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CdcSpecificationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CdcStatusMapper::GetNameForCdcStatus(m_status));
  }

  if(m_viewTypeHasBeenSet)
  {
   payload.WithString("viewType", ViewTypeMapper::GetNameForViewType(m_viewType));
  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
