/*
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

#include <aws/fms/model/ComplianceViolator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ComplianceViolator::ComplianceViolator() : 
    m_resourceIdHasBeenSet(false),
    m_violationReason(ViolationReason::NOT_SET),
    m_violationReasonHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

ComplianceViolator::ComplianceViolator(const JsonValue& jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_violationReason(ViolationReason::NOT_SET),
    m_violationReasonHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceViolator& ComplianceViolator::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolationReason"))
  {
    m_violationReason = ViolationReasonMapper::GetViolationReasonForName(jsonValue.GetString("ViolationReason"));

    m_violationReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceViolator::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_violationReasonHasBeenSet)
  {
   payload.WithString("ViolationReason", ViolationReasonMapper::GetNameForViolationReason(m_violationReason));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
