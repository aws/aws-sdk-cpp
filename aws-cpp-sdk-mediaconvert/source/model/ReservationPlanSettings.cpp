/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/mediaconvert/model/ReservationPlanSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

ReservationPlanSettings::ReservationPlanSettings() : 
    m_commitment(Commitment::NOT_SET),
    m_commitmentHasBeenSet(false),
    m_renewalType(RenewalType::NOT_SET),
    m_renewalTypeHasBeenSet(false),
    m_reservedSlots(0),
    m_reservedSlotsHasBeenSet(false)
{
}

ReservationPlanSettings::ReservationPlanSettings(JsonView jsonValue) : 
    m_commitment(Commitment::NOT_SET),
    m_commitmentHasBeenSet(false),
    m_renewalType(RenewalType::NOT_SET),
    m_renewalTypeHasBeenSet(false),
    m_reservedSlots(0),
    m_reservedSlotsHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationPlanSettings& ReservationPlanSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitment"))
  {
    m_commitment = CommitmentMapper::GetCommitmentForName(jsonValue.GetString("commitment"));

    m_commitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renewalType"))
  {
    m_renewalType = RenewalTypeMapper::GetRenewalTypeForName(jsonValue.GetString("renewalType"));

    m_renewalTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reservedSlots"))
  {
    m_reservedSlots = jsonValue.GetInteger("reservedSlots");

    m_reservedSlotsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationPlanSettings::Jsonize() const
{
  JsonValue payload;

  if(m_commitmentHasBeenSet)
  {
   payload.WithString("commitment", CommitmentMapper::GetNameForCommitment(m_commitment));
  }

  if(m_renewalTypeHasBeenSet)
  {
   payload.WithString("renewalType", RenewalTypeMapper::GetNameForRenewalType(m_renewalType));
  }

  if(m_reservedSlotsHasBeenSet)
  {
   payload.WithInteger("reservedSlots", m_reservedSlots);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
