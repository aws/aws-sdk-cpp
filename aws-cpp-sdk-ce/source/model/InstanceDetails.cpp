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

#include <aws/ce/model/InstanceDetails.h>
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

InstanceDetails::InstanceDetails() : 
    m_eC2InstanceDetailsHasBeenSet(false),
    m_rDSInstanceDetailsHasBeenSet(false)
{
}

InstanceDetails::InstanceDetails(const JsonValue& jsonValue) : 
    m_eC2InstanceDetailsHasBeenSet(false),
    m_rDSInstanceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceDetails& InstanceDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EC2InstanceDetails"))
  {
    m_eC2InstanceDetails = jsonValue.GetObject("EC2InstanceDetails");

    m_eC2InstanceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RDSInstanceDetails"))
  {
    m_rDSInstanceDetails = jsonValue.GetObject("RDSInstanceDetails");

    m_rDSInstanceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_eC2InstanceDetailsHasBeenSet)
  {
   payload.WithObject("EC2InstanceDetails", m_eC2InstanceDetails.Jsonize());

  }

  if(m_rDSInstanceDetailsHasBeenSet)
  {
   payload.WithObject("RDSInstanceDetails", m_rDSInstanceDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
