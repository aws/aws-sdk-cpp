/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/vitalservices/model/SearchForDoctorsResult_doctorsItem_serviceDetailsListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VitalServices
{
namespace Model
{

SearchForDoctorsResult_doctorsItem_serviceDetailsListItem::SearchForDoctorsResult_doctorsItem_serviceDetailsListItem() : 
    m_doctorIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_priceDollarsHasBeenSet(false),
    m_durationSecondsHasBeenSet(false)
{
}

SearchForDoctorsResult_doctorsItem_serviceDetailsListItem::SearchForDoctorsResult_doctorsItem_serviceDetailsListItem(const JsonValue& jsonValue) : 
    m_doctorIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_priceDollarsHasBeenSet(false),
    m_durationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

SearchForDoctorsResult_doctorsItem_serviceDetailsListItem& SearchForDoctorsResult_doctorsItem_serviceDetailsListItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("doctorId"))
  {
    m_doctorId = jsonValue.GetString("doctorId");

    m_doctorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceId"))
  {
    m_serviceId = jsonValue.GetString("serviceId");

    m_serviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priceDollars"))
  {
    m_priceDollars = jsonValue.GetString("priceDollars");

    m_priceDollarsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationSeconds"))
  {
    m_durationSeconds = jsonValue.GetString("durationSeconds");

    m_durationSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchForDoctorsResult_doctorsItem_serviceDetailsListItem::Jsonize() const
{
  JsonValue payload;

  if(m_doctorIdHasBeenSet)
  {
   payload.WithString("doctorId", m_doctorId);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("serviceId", m_serviceId);

  }

  if(m_priceDollarsHasBeenSet)
  {
   payload.WithString("priceDollars", m_priceDollars);

  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithString("durationSeconds", m_durationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace VitalServices
} // namespace Aws