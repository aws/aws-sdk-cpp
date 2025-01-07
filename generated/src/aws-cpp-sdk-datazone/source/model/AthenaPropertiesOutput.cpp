﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AthenaPropertiesOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AthenaPropertiesOutput::AthenaPropertiesOutput() : 
    m_workgroupNameHasBeenSet(false)
{
}

AthenaPropertiesOutput::AthenaPropertiesOutput(JsonView jsonValue)
  : AthenaPropertiesOutput()
{
  *this = jsonValue;
}

AthenaPropertiesOutput& AthenaPropertiesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");

    m_workgroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AthenaPropertiesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
