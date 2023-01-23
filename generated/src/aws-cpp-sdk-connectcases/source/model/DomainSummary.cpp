/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/DomainSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

DomainSummary::DomainSummary() : 
    m_domainArnHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

DomainSummary::DomainSummary(JsonView jsonValue) : 
    m_domainArnHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

DomainSummary& DomainSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainArn"))
  {
    m_domainArn = jsonValue.GetString("domainArn");

    m_domainArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainArnHasBeenSet)
  {
   payload.WithString("domainArn", m_domainArn);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
