/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
