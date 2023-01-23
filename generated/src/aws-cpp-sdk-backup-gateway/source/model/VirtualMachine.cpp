/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/VirtualMachine.h>
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

VirtualMachine::VirtualMachine() : 
    m_hostNameHasBeenSet(false),
    m_hypervisorIdHasBeenSet(false),
    m_lastBackupDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

VirtualMachine::VirtualMachine(JsonView jsonValue) : 
    m_hostNameHasBeenSet(false),
    m_hypervisorIdHasBeenSet(false),
    m_lastBackupDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualMachine& VirtualMachine::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostName"))
  {
    m_hostName = jsonValue.GetString("HostName");

    m_hostNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HypervisorId"))
  {
    m_hypervisorId = jsonValue.GetString("HypervisorId");

    m_hypervisorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastBackupDate"))
  {
    m_lastBackupDate = jsonValue.GetDouble("LastBackupDate");

    m_lastBackupDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualMachine::Jsonize() const
{
  JsonValue payload;

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("HostName", m_hostName);

  }

  if(m_hypervisorIdHasBeenSet)
  {
   payload.WithString("HypervisorId", m_hypervisorId);

  }

  if(m_lastBackupDateHasBeenSet)
  {
   payload.WithDouble("LastBackupDate", m_lastBackupDate.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
