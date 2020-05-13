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

#include <aws/macie2/model/FindingActor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

FindingActor::FindingActor() : 
    m_domainDetailsHasBeenSet(false),
    m_ipAddressDetailsHasBeenSet(false),
    m_userIdentityHasBeenSet(false)
{
}

FindingActor::FindingActor(JsonView jsonValue) : 
    m_domainDetailsHasBeenSet(false),
    m_ipAddressDetailsHasBeenSet(false),
    m_userIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

FindingActor& FindingActor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainDetails"))
  {
    m_domainDetails = jsonValue.GetObject("domainDetails");

    m_domainDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddressDetails"))
  {
    m_ipAddressDetails = jsonValue.GetObject("ipAddressDetails");

    m_ipAddressDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userIdentity"))
  {
    m_userIdentity = jsonValue.GetObject("userIdentity");

    m_userIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingActor::Jsonize() const
{
  JsonValue payload;

  if(m_domainDetailsHasBeenSet)
  {
   payload.WithObject("domainDetails", m_domainDetails.Jsonize());

  }

  if(m_ipAddressDetailsHasBeenSet)
  {
   payload.WithObject("ipAddressDetails", m_ipAddressDetails.Jsonize());

  }

  if(m_userIdentityHasBeenSet)
  {
   payload.WithObject("userIdentity", m_userIdentity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
