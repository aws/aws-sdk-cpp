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
#include <aws/servicecatalog/model/ConstraintDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ConstraintDetail::ConstraintDetail() : 
    m_constraintIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

ConstraintDetail::ConstraintDetail(const JsonValue& jsonValue) : 
    m_constraintIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
  *this = jsonValue;
}

ConstraintDetail& ConstraintDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ConstraintId"))
  {
    m_constraintId = jsonValue.GetString("ConstraintId");

    m_constraintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  return *this;
}

JsonValue ConstraintDetail::Jsonize() const
{
  JsonValue payload;

  if(m_constraintIdHasBeenSet)
  {
   payload.WithString("ConstraintId", m_constraintId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws