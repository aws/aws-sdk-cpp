﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/ProcessingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

ProcessingConfiguration::ProcessingConfiguration() : 
    m_auditLogHasBeenSet(false)
{
}

ProcessingConfiguration::ProcessingConfiguration(JsonView jsonValue) : 
    m_auditLogHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingConfiguration& ProcessingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("auditLog"))
  {
    m_auditLog = jsonValue.GetObject("auditLog");

    m_auditLogHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_auditLogHasBeenSet)
  {
   payload.WithObject("auditLog", m_auditLog.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
