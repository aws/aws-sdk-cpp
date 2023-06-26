/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ReceivedMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

ReceivedMetadata::ReceivedMetadata() : 
    m_receivedStatus(ReceivedStatus::NOT_SET),
    m_receivedStatusHasBeenSet(false),
    m_receivedStatusReasonHasBeenSet(false),
    m_allowedOperationsHasBeenSet(false)
{
}

ReceivedMetadata::ReceivedMetadata(JsonView jsonValue) : 
    m_receivedStatus(ReceivedStatus::NOT_SET),
    m_receivedStatusHasBeenSet(false),
    m_receivedStatusReasonHasBeenSet(false),
    m_allowedOperationsHasBeenSet(false)
{
  *this = jsonValue;
}

ReceivedMetadata& ReceivedMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReceivedStatus"))
  {
    m_receivedStatus = ReceivedStatusMapper::GetReceivedStatusForName(jsonValue.GetString("ReceivedStatus"));

    m_receivedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceivedStatusReason"))
  {
    m_receivedStatusReason = jsonValue.GetString("ReceivedStatusReason");

    m_receivedStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedOperations"))
  {
    Aws::Utils::Array<JsonView> allowedOperationsJsonList = jsonValue.GetArray("AllowedOperations");
    for(unsigned allowedOperationsIndex = 0; allowedOperationsIndex < allowedOperationsJsonList.GetLength(); ++allowedOperationsIndex)
    {
      m_allowedOperations.push_back(AllowedOperationMapper::GetAllowedOperationForName(allowedOperationsJsonList[allowedOperationsIndex].AsString()));
    }
    m_allowedOperationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReceivedMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_receivedStatusHasBeenSet)
  {
   payload.WithString("ReceivedStatus", ReceivedStatusMapper::GetNameForReceivedStatus(m_receivedStatus));
  }

  if(m_receivedStatusReasonHasBeenSet)
  {
   payload.WithString("ReceivedStatusReason", m_receivedStatusReason);

  }

  if(m_allowedOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedOperationsJsonList(m_allowedOperations.size());
   for(unsigned allowedOperationsIndex = 0; allowedOperationsIndex < allowedOperationsJsonList.GetLength(); ++allowedOperationsIndex)
   {
     allowedOperationsJsonList[allowedOperationsIndex].AsString(AllowedOperationMapper::GetNameForAllowedOperation(m_allowedOperations[allowedOperationsIndex]));
   }
   payload.WithArray("AllowedOperations", std::move(allowedOperationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
