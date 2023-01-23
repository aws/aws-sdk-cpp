/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

EC2Specification::EC2Specification(JsonView jsonValue) : 
    m_offeringClass(OfferingClass::NOT_SET),
    m_offeringClassHasBeenSet(false)
{
  *this = jsonValue;
}

EC2Specification& EC2Specification::operator =(JsonView jsonValue)
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
