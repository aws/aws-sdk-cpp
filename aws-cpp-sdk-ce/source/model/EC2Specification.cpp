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

#include <aws/ce/model/EC2Specification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

EC2Specification::EC2Specification() : 
    m_offeringClass(OfferingClass::NOT_SET),
    m_offeringClassHasBeenSet(false)
{
}

EC2Specification::EC2Specification(const JsonValue& jsonValue) : 
    m_offeringClass(OfferingClass::NOT_SET),
    m_offeringClassHasBeenSet(false)
{
  *this = jsonValue;
}

EC2Specification& EC2Specification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("OfferingClass"))
  {
    m_offeringClass = OfferingClassMapper::GetOfferingClassForName(jsonValue.GetString("OfferingClass"));

    m_offeringClassHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2Specification::Jsonize() const
{
  JsonValue payload;

  if(m_offeringClassHasBeenSet)
  {
   payload.WithString("OfferingClass", OfferingClassMapper::GetNameForOfferingClass(m_offeringClass));
  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
