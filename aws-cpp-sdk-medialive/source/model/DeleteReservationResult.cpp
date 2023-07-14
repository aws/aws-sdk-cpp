/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DeleteReservationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteReservationResult::DeleteReservationResult() : 
    m_count(0),
    m_duration(0),
    m_durationUnits(OfferingDurationUnits::NOT_SET),
    m_fixedPrice(0.0),
    m_offeringType(OfferingType::NOT_SET),
    m_state(ReservationState::NOT_SET),
    m_usagePrice(0.0)
{
}

DeleteReservationResult::DeleteReservationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_count(0),
    m_duration(0),
    m_durationUnits(OfferingDurationUnits::NOT_SET),
    m_fixedPrice(0.0),
    m_offeringType(OfferingType::NOT_SET),
    m_state(ReservationState::NOT_SET),
    m_usagePrice(0.0)
{
  *this = result;
}

DeleteReservationResult& DeleteReservationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

  }

  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInteger("duration");

  }

  if(jsonValue.ValueExists("durationUnits"))
  {
    m_durationUnits = OfferingDurationUnitsMapper::GetOfferingDurationUnitsForName(jsonValue.GetString("durationUnits"));

  }

  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetString("end");

  }

  if(jsonValue.ValueExists("fixedPrice"))
  {
    m_fixedPrice = jsonValue.GetDouble("fixedPrice");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("offeringDescription"))
  {
    m_offeringDescription = jsonValue.GetString("offeringDescription");

  }

  if(jsonValue.ValueExists("offeringId"))
  {
    m_offeringId = jsonValue.GetString("offeringId");

  }

  if(jsonValue.ValueExists("offeringType"))
  {
    m_offeringType = OfferingTypeMapper::GetOfferingTypeForName(jsonValue.GetString("offeringType"));

  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

  }

  if(jsonValue.ValueExists("reservationId"))
  {
    m_reservationId = jsonValue.GetString("reservationId");

  }

  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");

  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetString("start");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ReservationStateMapper::GetReservationStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("usagePrice"))
  {
    m_usagePrice = jsonValue.GetDouble("usagePrice");

  }



  return *this;
}
