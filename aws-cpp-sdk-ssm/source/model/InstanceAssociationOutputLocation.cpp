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

InstanceAssociationOutputLocation::InstanceAssociationOutputLocation(const JsonValue& jsonValue) : 
    m_s3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAssociationOutputLocation& InstanceAssociationOutputLocation::operator =(const JsonValue& jsonValue)
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