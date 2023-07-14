/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListenerTls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

ListenerTls::ListenerTls() : 
    m_certificateHasBeenSet(false),
    m_mode(ListenerTlsMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_validationHasBeenSet(false)
{
}

ListenerTls::ListenerTls(JsonView jsonValue) : 
    m_certificateHasBeenSet(false),
    m_mode(ListenerTlsMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_validationHasBeenSet(false)
{
  *this = jsonValue;
}

ListenerTls& ListenerTls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificate"))
  {
    m_certificate = jsonValue.GetObject("certificate");

    m_certificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mode"))
  {
    m_mode = ListenerTlsModeMapper::GetListenerTlsModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validation"))
  {
    m_validation = jsonValue.GetObject("validation");

    m_validationHasBeenSet = true;
  }

  return *this;
}

JsonValue ListenerTls::Jsonize() const
{
  JsonValue payload;

  if(m_certificateHasBeenSet)
  {
   payload.WithObject("certificate", m_certificate.Jsonize());

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", ListenerTlsModeMapper::GetNameForListenerTlsMode(m_mode));
  }

  if(m_validationHasBeenSet)
  {
   payload.WithObject("validation", m_validation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
