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
    m_domainNameHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false)
{
}

DomainInfo::DomainInfo(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false)
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

  if(jsonValue.ValueExists("EngineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("EngineType"));

    m_engineTypeHasBeenSet = true;
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

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("EngineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
