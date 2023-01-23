/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TransferData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TransferData::TransferData() : 
    m_transferMessageHasBeenSet(false),
    m_rejectReasonHasBeenSet(false),
    m_transferDateHasBeenSet(false),
    m_acceptDateHasBeenSet(false),
    m_rejectDateHasBeenSet(false)
{
}

TransferData::TransferData(JsonView jsonValue) : 
    m_transferMessageHasBeenSet(false),
    m_rejectReasonHasBeenSet(false),
    m_transferDateHasBeenSet(false),
    m_acceptDateHasBeenSet(false),
    m_rejectDateHasBeenSet(false)
{
  *this = jsonValue;
}

TransferData& TransferData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transferMessage"))
  {
    m_transferMessage = jsonValue.GetString("transferMessage");

    m_transferMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rejectReason"))
  {
    m_rejectReason = jsonValue.GetString("rejectReason");

    m_rejectReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transferDate"))
  {
    m_transferDate = jsonValue.GetDouble("transferDate");

    m_transferDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acceptDate"))
  {
    m_acceptDate = jsonValue.GetDouble("acceptDate");

    m_acceptDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rejectDate"))
  {
    m_rejectDate = jsonValue.GetDouble("rejectDate");

    m_rejectDateHasBeenSet = true;
  }

  return *this;
}

JsonValue TransferData::Jsonize() const
{
  JsonValue payload;

  if(m_transferMessageHasBeenSet)
  {
   payload.WithString("transferMessage", m_transferMessage);

  }

  if(m_rejectReasonHasBeenSet)
  {
   payload.WithString("rejectReason", m_rejectReason);

  }

  if(m_transferDateHasBeenSet)
  {
   payload.WithDouble("transferDate", m_transferDate.SecondsWithMSPrecision());
  }

  if(m_acceptDateHasBeenSet)
  {
   payload.WithDouble("acceptDate", m_acceptDate.SecondsWithMSPrecision());
  }

  if(m_rejectDateHasBeenSet)
  {
   payload.WithDouble("rejectDate", m_rejectDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
