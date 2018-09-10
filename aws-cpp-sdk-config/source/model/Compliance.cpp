﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/config/model/Compliance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

Compliance::Compliance() : 
    m_complianceType(ComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_complianceContributorCountHasBeenSet(false)
{
}

Compliance::Compliance(JsonView jsonValue) : 
    m_complianceType(ComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_complianceContributorCountHasBeenSet(false)
{
  *this = jsonValue;
}

Compliance& Compliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ComplianceTypeMapper::GetComplianceTypeForName(jsonValue.GetString("ComplianceType"));

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceContributorCount"))
  {
    m_complianceContributorCount = jsonValue.GetObject("ComplianceContributorCount");

    m_complianceContributorCountHasBeenSet = true;
  }

  return *this;
}

JsonValue Compliance::Jsonize() const
{
  JsonValue payload;

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ComplianceTypeMapper::GetNameForComplianceType(m_complianceType));
  }

  if(m_complianceContributorCountHasBeenSet)
  {
   payload.WithObject("ComplianceContributorCount", m_complianceContributorCount.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
