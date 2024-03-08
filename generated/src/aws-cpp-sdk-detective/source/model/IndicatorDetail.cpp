/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/IndicatorDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

IndicatorDetail::IndicatorDetail() : 
    m_tTPsObservedDetailHasBeenSet(false),
    m_impossibleTravelDetailHasBeenSet(false),
    m_flaggedIpAddressDetailHasBeenSet(false),
    m_newGeolocationDetailHasBeenSet(false),
    m_newAsoDetailHasBeenSet(false),
    m_newUserAgentDetailHasBeenSet(false),
    m_relatedFindingDetailHasBeenSet(false),
    m_relatedFindingGroupDetailHasBeenSet(false)
{
}

IndicatorDetail::IndicatorDetail(JsonView jsonValue) : 
    m_tTPsObservedDetailHasBeenSet(false),
    m_impossibleTravelDetailHasBeenSet(false),
    m_flaggedIpAddressDetailHasBeenSet(false),
    m_newGeolocationDetailHasBeenSet(false),
    m_newAsoDetailHasBeenSet(false),
    m_newUserAgentDetailHasBeenSet(false),
    m_relatedFindingDetailHasBeenSet(false),
    m_relatedFindingGroupDetailHasBeenSet(false)
{
  *this = jsonValue;
}

IndicatorDetail& IndicatorDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TTPsObservedDetail"))
  {
    m_tTPsObservedDetail = jsonValue.GetObject("TTPsObservedDetail");

    m_tTPsObservedDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImpossibleTravelDetail"))
  {
    m_impossibleTravelDetail = jsonValue.GetObject("ImpossibleTravelDetail");

    m_impossibleTravelDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlaggedIpAddressDetail"))
  {
    m_flaggedIpAddressDetail = jsonValue.GetObject("FlaggedIpAddressDetail");

    m_flaggedIpAddressDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewGeolocationDetail"))
  {
    m_newGeolocationDetail = jsonValue.GetObject("NewGeolocationDetail");

    m_newGeolocationDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewAsoDetail"))
  {
    m_newAsoDetail = jsonValue.GetObject("NewAsoDetail");

    m_newAsoDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewUserAgentDetail"))
  {
    m_newUserAgentDetail = jsonValue.GetObject("NewUserAgentDetail");

    m_newUserAgentDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedFindingDetail"))
  {
    m_relatedFindingDetail = jsonValue.GetObject("RelatedFindingDetail");

    m_relatedFindingDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedFindingGroupDetail"))
  {
    m_relatedFindingGroupDetail = jsonValue.GetObject("RelatedFindingGroupDetail");

    m_relatedFindingGroupDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue IndicatorDetail::Jsonize() const
{
  JsonValue payload;

  if(m_tTPsObservedDetailHasBeenSet)
  {
   payload.WithObject("TTPsObservedDetail", m_tTPsObservedDetail.Jsonize());

  }

  if(m_impossibleTravelDetailHasBeenSet)
  {
   payload.WithObject("ImpossibleTravelDetail", m_impossibleTravelDetail.Jsonize());

  }

  if(m_flaggedIpAddressDetailHasBeenSet)
  {
   payload.WithObject("FlaggedIpAddressDetail", m_flaggedIpAddressDetail.Jsonize());

  }

  if(m_newGeolocationDetailHasBeenSet)
  {
   payload.WithObject("NewGeolocationDetail", m_newGeolocationDetail.Jsonize());

  }

  if(m_newAsoDetailHasBeenSet)
  {
   payload.WithObject("NewAsoDetail", m_newAsoDetail.Jsonize());

  }

  if(m_newUserAgentDetailHasBeenSet)
  {
   payload.WithObject("NewUserAgentDetail", m_newUserAgentDetail.Jsonize());

  }

  if(m_relatedFindingDetailHasBeenSet)
  {
   payload.WithObject("RelatedFindingDetail", m_relatedFindingDetail.Jsonize());

  }

  if(m_relatedFindingGroupDetailHasBeenSet)
  {
   payload.WithObject("RelatedFindingGroupDetail", m_relatedFindingGroupDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
