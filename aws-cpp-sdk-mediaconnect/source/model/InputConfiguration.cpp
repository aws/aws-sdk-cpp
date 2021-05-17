/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/InputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

InputConfiguration::InputConfiguration() : 
    m_inputIpHasBeenSet(false),
    m_inputPort(0),
    m_inputPortHasBeenSet(false),
    m_interfaceHasBeenSet(false)
{
}

InputConfiguration::InputConfiguration(JsonView jsonValue) : 
    m_inputIpHasBeenSet(false),
    m_inputPort(0),
    m_inputPortHasBeenSet(false),
    m_interfaceHasBeenSet(false)
{
  *this = jsonValue;
}

InputConfiguration& InputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputIp"))
  {
    m_inputIp = jsonValue.GetString("inputIp");

    m_inputIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputPort"))
  {
    m_inputPort = jsonValue.GetInteger("inputPort");

    m_inputPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interface"))
  {
    m_interface = jsonValue.GetObject("interface");

    m_interfaceHasBeenSet = true;
  }

  return *this;
}

JsonValue InputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputIpHasBeenSet)
  {
   payload.WithString("inputIp", m_inputIp);

  }

  if(m_inputPortHasBeenSet)
  {
   payload.WithInteger("inputPort", m_inputPort);

  }

  if(m_interfaceHasBeenSet)
  {
   payload.WithObject("interface", m_interface.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
