/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ObjectiveFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

ObjectiveFilter::ObjectiveFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ObjectiveFilter& ObjectiveFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domains"))
  {
    Aws::Utils::Array<JsonView> domainsJsonList = jsonValue.GetArray("Domains");
    for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
    {
      m_domains.push_back(domainsJsonList[domainsIndex].AsObject());
    }
    m_domainsHasBeenSet = true;
  }
  return *this;
}

JsonValue ObjectiveFilter::Jsonize() const
{
  JsonValue payload;

  if(m_domainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
   for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
   {
     domainsJsonList[domainsIndex].AsObject(m_domains[domainsIndex].Jsonize());
   }
   payload.WithArray("Domains", std::move(domainsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
