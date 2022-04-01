/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateCACertificateParams.h>
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

UpdateCACertificateParams::UpdateCACertificateParams() : 
    m_action(CACertificateUpdateAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

UpdateCACertificateParams::UpdateCACertificateParams(JsonView jsonValue) : 
    m_action(CACertificateUpdateAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateCACertificateParams& UpdateCACertificateParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = CACertificateUpdateActionMapper::GetCACertificateUpdateActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateCACertificateParams::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", CACertificateUpdateActionMapper::GetNameForCACertificateUpdateAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
