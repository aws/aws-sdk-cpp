/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceAssociationOutputLocation::InstanceAssociationOutputLocation() : 
    m_s3LocationHasBeenSet(false)
{
}

InstanceAssociationOutputLocation::InstanceAssociationOutputLocation(JsonView jsonValue) : 
    m_s3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAssociationOutputLocation& InstanceAssociationOutputLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Location"))
  {
    m_s3Location = jsonValue.GetObject("S3Location");

    m_s3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAssociationOutputLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("S3Location", m_s3Location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
