/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/DomainValidationOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace Model
{

DomainValidationOption::DomainValidationOption() : 
    m_domainNameHasBeenSet(false),
    m_validationDomainHasBeenSet(false)
{
}

DomainValidationOption::DomainValidationOption(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_validationDomainHasBeenSet(false)
{
  *this = jsonValue;
}

DomainValidationOption& DomainValidationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationDomain"))
  {
    m_validationDomain = jsonValue.GetString("ValidationDomain");

    m_validationDomainHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainValidationOption::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_validationDomainHasBeenSet)
  {
   payload.WithString("ValidationDomain", m_validationDomain);

  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
