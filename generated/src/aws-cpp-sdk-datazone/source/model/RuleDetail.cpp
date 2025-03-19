/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RuleDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RuleDetail::RuleDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleDetail& RuleDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadataFormEnforcementDetail"))
  {
    m_metadataFormEnforcementDetail = jsonValue.GetObject("metadataFormEnforcementDetail");
    m_metadataFormEnforcementDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleDetail::Jsonize() const
{
  JsonValue payload;

  if(m_metadataFormEnforcementDetailHasBeenSet)
  {
   payload.WithObject("metadataFormEnforcementDetail", m_metadataFormEnforcementDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
