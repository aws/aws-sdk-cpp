/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ContactChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

ContactChannel::ContactChannel() : 
    m_contactChannelArnHasBeenSet(false),
    m_contactArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false),
    m_deliveryAddressHasBeenSet(false),
    m_activationStatus(ActivationStatus::NOT_SET),
    m_activationStatusHasBeenSet(false)
{
}

ContactChannel::ContactChannel(JsonView jsonValue) : 
    m_contactChannelArnHasBeenSet(false),
    m_contactArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false),
    m_deliveryAddressHasBeenSet(false),
    m_activationStatus(ActivationStatus::NOT_SET),
    m_activationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ContactChannel& ContactChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactChannelArn"))
  {
    m_contactChannelArn = jsonValue.GetString("ContactChannelArn");

    m_contactChannelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactArn"))
  {
    m_contactArn = jsonValue.GetString("ContactArn");

    m_contactArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryAddress"))
  {
    m_deliveryAddress = jsonValue.GetObject("DeliveryAddress");

    m_deliveryAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActivationStatus"))
  {
    m_activationStatus = ActivationStatusMapper::GetActivationStatusForName(jsonValue.GetString("ActivationStatus"));

    m_activationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactChannel::Jsonize() const
{
  JsonValue payload;

  if(m_contactChannelArnHasBeenSet)
  {
   payload.WithString("ContactChannelArn", m_contactChannelArn);

  }

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("ContactArn", m_contactArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChannelTypeMapper::GetNameForChannelType(m_type));
  }

  if(m_deliveryAddressHasBeenSet)
  {
   payload.WithObject("DeliveryAddress", m_deliveryAddress.Jsonize());

  }

  if(m_activationStatusHasBeenSet)
  {
   payload.WithString("ActivationStatus", ActivationStatusMapper::GetNameForActivationStatus(m_activationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
