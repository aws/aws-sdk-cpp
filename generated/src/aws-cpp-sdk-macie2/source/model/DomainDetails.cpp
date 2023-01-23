/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DomainDetails.h>
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

DomainDetails::DomainDetails() : 
    m_domainNameHasBeenSet(false)
{
}

DomainDetails::DomainDetails(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false)
{
  *this = jsonValue;
}

DomainDetails& DomainDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainDetails::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
