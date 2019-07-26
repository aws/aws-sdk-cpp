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

#include <aws/ce/model/ResourceDetails.h>
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

ResourceDetails::ResourceDetails() : 
    m_eC2ResourceDetailsHasBeenSet(false)
{
}

ResourceDetails::ResourceDetails(JsonView jsonValue) : 
    m_eC2ResourceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EC2ResourceDetails"))
  {
    m_eC2ResourceDetails = jsonValue.GetObject("EC2ResourceDetails");

    m_eC2ResourceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_eC2ResourceDetailsHasBeenSet)
  {
   payload.WithObject("EC2ResourceDetails", m_eC2ResourceDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
