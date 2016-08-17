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
#include <aws/gamelift/model/EC2InstanceCounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

EC2InstanceCounts::EC2InstanceCounts() : 
    m_dESIRED(0),
    m_dESIREDHasBeenSet(false),
    m_mINIMUM(0),
    m_mINIMUMHasBeenSet(false),
    m_mAXIMUM(0),
    m_mAXIMUMHasBeenSet(false),
    m_pENDING(0),
    m_pENDINGHasBeenSet(false),
    m_aCTIVE(0),
    m_aCTIVEHasBeenSet(false),
    m_iDLE(0),
    m_iDLEHasBeenSet(false),
    m_tERMINATING(0),
    m_tERMINATINGHasBeenSet(false)
{
}

EC2InstanceCounts::EC2InstanceCounts(const JsonValue& jsonValue) : 
    m_dESIRED(0),
    m_dESIREDHasBeenSet(false),
    m_mINIMUM(0),
    m_mINIMUMHasBeenSet(false),
    m_mAXIMUM(0),
    m_mAXIMUMHasBeenSet(false),
    m_pENDING(0),
    m_pENDINGHasBeenSet(false),
    m_aCTIVE(0),
    m_aCTIVEHasBeenSet(false),
    m_iDLE(0),
    m_iDLEHasBeenSet(false),
    m_tERMINATING(0),
    m_tERMINATINGHasBeenSet(false)
{
  *this = jsonValue;
}

EC2InstanceCounts& EC2InstanceCounts::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DESIRED"))
  {
    m_dESIRED = jsonValue.GetInteger("DESIRED");

    m_dESIREDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MINIMUM"))
  {
    m_mINIMUM = jsonValue.GetInteger("MINIMUM");

    m_mINIMUMHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MAXIMUM"))
  {
    m_mAXIMUM = jsonValue.GetInteger("MAXIMUM");

    m_mAXIMUMHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PENDING"))
  {
    m_pENDING = jsonValue.GetInteger("PENDING");

    m_pENDINGHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ACTIVE"))
  {
    m_aCTIVE = jsonValue.GetInteger("ACTIVE");

    m_aCTIVEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IDLE"))
  {
    m_iDLE = jsonValue.GetInteger("IDLE");

    m_iDLEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TERMINATING"))
  {
    m_tERMINATING = jsonValue.GetInteger("TERMINATING");

    m_tERMINATINGHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2InstanceCounts::Jsonize() const
{
  JsonValue payload;

  if(m_dESIREDHasBeenSet)
  {
   payload.WithInteger("DESIRED", m_dESIRED);

  }

  if(m_mINIMUMHasBeenSet)
  {
   payload.WithInteger("MINIMUM", m_mINIMUM);

  }

  if(m_mAXIMUMHasBeenSet)
  {
   payload.WithInteger("MAXIMUM", m_mAXIMUM);

  }

  if(m_pENDINGHasBeenSet)
  {
   payload.WithInteger("PENDING", m_pENDING);

  }

  if(m_aCTIVEHasBeenSet)
  {
   payload.WithInteger("ACTIVE", m_aCTIVE);

  }

  if(m_iDLEHasBeenSet)
  {
   payload.WithInteger("IDLE", m_iDLE);

  }

  if(m_tERMINATINGHasBeenSet)
  {
   payload.WithInteger("TERMINATING", m_tERMINATING);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws