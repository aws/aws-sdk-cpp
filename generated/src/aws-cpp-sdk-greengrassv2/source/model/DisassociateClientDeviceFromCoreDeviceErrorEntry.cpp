﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DisassociateClientDeviceFromCoreDeviceErrorEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

DisassociateClientDeviceFromCoreDeviceErrorEntry::DisassociateClientDeviceFromCoreDeviceErrorEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

DisassociateClientDeviceFromCoreDeviceErrorEntry& DisassociateClientDeviceFromCoreDeviceErrorEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");
    m_thingNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue DisassociateClientDeviceFromCoreDeviceErrorEntry::Jsonize() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
