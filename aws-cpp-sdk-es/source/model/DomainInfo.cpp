/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DomainInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

DomainInfo::DomainInfo() : 
    m_domainNameHasBeenSet(false)
{
}

DomainInfo::DomainInfo(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false)
{
  *this = jsonValue;
}

DomainInfo& DomainInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainInfo::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
