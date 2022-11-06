/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Update.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Update::Update() : 
    m_idHasBeenSet(false),
    m_status(UpdateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(UpdateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
}

Update::Update(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_status(UpdateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(UpdateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
  *this = jsonValue;
}

Update& Update::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = UpdateStatusMapper::GetUpdateStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UpdateTypeMapper::GetUpdateTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("params"))
  {
    Aws::Utils::Array<JsonView> paramsJsonList = jsonValue.GetArray("params");
    for(unsigned paramsIndex = 0; paramsIndex < paramsJsonList.GetLength(); ++paramsIndex)
    {
      m_params.push_back(paramsJsonList[paramsIndex].AsObject());
    }
    m_paramsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  return *this;
}

JsonValue Update::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UpdateStatusMapper::GetNameForUpdateStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UpdateTypeMapper::GetNameForUpdateType(m_type));
  }

  if(m_paramsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> paramsJsonList(m_params.size());
   for(unsigned paramsIndex = 0; paramsIndex < paramsJsonList.GetLength(); ++paramsIndex)
   {
     paramsJsonList[paramsIndex].AsObject(m_params[paramsIndex].Jsonize());
   }
   payload.WithArray("params", std::move(paramsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("errors", std::move(errorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
