/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SvmEndpoints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

SvmEndpoints::SvmEndpoints() : 
    m_iscsiHasBeenSet(false),
    m_managementHasBeenSet(false),
    m_nfsHasBeenSet(false),
    m_smbHasBeenSet(false)
{
}

SvmEndpoints::SvmEndpoints(JsonView jsonValue) : 
    m_iscsiHasBeenSet(false),
    m_managementHasBeenSet(false),
    m_nfsHasBeenSet(false),
    m_smbHasBeenSet(false)
{
  *this = jsonValue;
}

SvmEndpoints& SvmEndpoints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Iscsi"))
  {
    m_iscsi = jsonValue.GetObject("Iscsi");

    m_iscsiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Management"))
  {
    m_management = jsonValue.GetObject("Management");

    m_managementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Nfs"))
  {
    m_nfs = jsonValue.GetObject("Nfs");

    m_nfsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Smb"))
  {
    m_smb = jsonValue.GetObject("Smb");

    m_smbHasBeenSet = true;
  }

  return *this;
}

JsonValue SvmEndpoints::Jsonize() const
{
  JsonValue payload;

  if(m_iscsiHasBeenSet)
  {
   payload.WithObject("Iscsi", m_iscsi.Jsonize());

  }

  if(m_managementHasBeenSet)
  {
   payload.WithObject("Management", m_management.Jsonize());

  }

  if(m_nfsHasBeenSet)
  {
   payload.WithObject("Nfs", m_nfs.Jsonize());

  }

  if(m_smbHasBeenSet)
  {
   payload.WithObject("Smb", m_smb.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
