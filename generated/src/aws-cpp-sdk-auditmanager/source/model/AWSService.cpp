﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AWSService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

AWSService::AWSService() : 
    m_serviceNameHasBeenSet(false)
{
}

AWSService::AWSService(JsonView jsonValue) : 
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

AWSService& AWSService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AWSService::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
