/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TransferringInputDeviceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

TransferringInputDeviceSummary::TransferringInputDeviceSummary() : 
    m_idHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_targetCustomerIdHasBeenSet(false),
    m_transferType(InputDeviceTransferType::NOT_SET),
    m_transferTypeHasBeenSet(false)
{
}

TransferringInputDeviceSummary::TransferringInputDeviceSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_targetCustomerIdHasBeenSet(false),
    m_transferType(InputDeviceTransferType::NOT_SET),
    m_transferTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TransferringInputDeviceSummary& TransferringInputDeviceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetCustomerId"))
  {
    m_targetCustomerId = jsonValue.GetString("targetCustomerId");

    m_targetCustomerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transferType"))
  {
    m_transferType = InputDeviceTransferTypeMapper::GetInputDeviceTransferTypeForName(jsonValue.GetString("transferType"));

    m_transferTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TransferringInputDeviceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_targetCustomerIdHasBeenSet)
  {
   payload.WithString("targetCustomerId", m_targetCustomerId);

  }

  if(m_transferTypeHasBeenSet)
  {
   payload.WithString("transferType", InputDeviceTransferTypeMapper::GetNameForInputDeviceTransferType(m_transferType));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
