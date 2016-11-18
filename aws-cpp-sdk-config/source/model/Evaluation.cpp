/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/model/Evaluation.h>
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

Evaluation::Evaluation() : 
    m_complianceResourceTypeHasBeenSet(false),
    m_complianceResourceIdHasBeenSet(false),
    m_complianceType(ComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_annotationHasBeenSet(false),
    m_orderingTimestampHasBeenSet(false)
{
}

Evaluation::Evaluation(const JsonValue& jsonValue) : 
    m_complianceResourceTypeHasBeenSet(false),
    m_complianceResourceIdHasBeenSet(false),
    m_complianceType(ComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_annotationHasBeenSet(false),
    m_orderingTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

Evaluation& Evaluation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ComplianceResourceType"))
  {
    m_complianceResourceType = jsonValue.GetString("ComplianceResourceType");

    m_complianceResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceResourceId"))
  {
    m_complianceResourceId = jsonValue.GetString("ComplianceResourceId");

    m_complianceResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ComplianceTypeMapper::GetComplianceTypeForName(jsonValue.GetString("ComplianceType"));

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Annotation"))
  {
    m_annotation = jsonValue.GetString("Annotation");

    m_annotationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderingTimestamp"))
  {
    m_orderingTimestamp = jsonValue.GetDouble("OrderingTimestamp");

    m_orderingTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Evaluation::Jsonize() const
{
  JsonValue payload;

  if(m_complianceResourceTypeHasBeenSet)
  {
   payload.WithString("ComplianceResourceType", m_complianceResourceType);

  }

  if(m_complianceResourceIdHasBeenSet)
  {
   payload.WithString("ComplianceResourceId", m_complianceResourceId);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ComplianceTypeMapper::GetNameForComplianceType(m_complianceType));
  }

  if(m_annotationHasBeenSet)
  {
   payload.WithString("Annotation", m_annotation);

  }

  if(m_orderingTimestampHasBeenSet)
  {
   payload.WithDouble("OrderingTimestamp", m_orderingTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws