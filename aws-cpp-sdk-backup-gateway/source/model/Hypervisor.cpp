/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/Hypervisor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

Hypervisor::Hypervisor() : 
    m_hostHasBeenSet(false),
    m_hypervisorArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(HypervisorState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Hypervisor::Hypervisor(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_hypervisorArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(HypervisorState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

Hypervisor& Hypervisor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HypervisorArn"))
  {
    m_hypervisorArn = jsonValue.GetString("HypervisorArn");

    m_hypervisorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = HypervisorStateMapper::GetHypervisorStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue Hypervisor::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_hypervisorArnHasBeenSet)
  {
   payload.WithString("HypervisorArn", m_hypervisorArn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", HypervisorStateMapper::GetNameForHypervisorState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
