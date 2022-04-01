/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSUserOrGroupQuota.h>
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

OpenZFSUserOrGroupQuota::OpenZFSUserOrGroupQuota() : 
    m_type(OpenZFSQuotaType::NOT_SET),
    m_typeHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_storageCapacityQuotaGiB(0),
    m_storageCapacityQuotaGiBHasBeenSet(false)
{
}

OpenZFSUserOrGroupQuota::OpenZFSUserOrGroupQuota(JsonView jsonValue) : 
    m_type(OpenZFSQuotaType::NOT_SET),
    m_typeHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_storageCapacityQuotaGiB(0),
    m_storageCapacityQuotaGiBHasBeenSet(false)
{
  *this = jsonValue;
}

OpenZFSUserOrGroupQuota& OpenZFSUserOrGroupQuota::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = OpenZFSQuotaTypeMapper::GetOpenZFSQuotaTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetInteger("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageCapacityQuotaGiB"))
  {
    m_storageCapacityQuotaGiB = jsonValue.GetInteger("StorageCapacityQuotaGiB");

    m_storageCapacityQuotaGiBHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenZFSUserOrGroupQuota::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OpenZFSQuotaTypeMapper::GetNameForOpenZFSQuotaType(m_type));
  }

  if(m_idHasBeenSet)
  {
   payload.WithInteger("Id", m_id);

  }

  if(m_storageCapacityQuotaGiBHasBeenSet)
  {
   payload.WithInteger("StorageCapacityQuotaGiB", m_storageCapacityQuotaGiB);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
