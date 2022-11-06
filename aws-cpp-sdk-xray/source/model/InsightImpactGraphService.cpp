/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/InsightImpactGraphService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

InsightImpactGraphService::InsightImpactGraphService() : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_edgesHasBeenSet(false)
{
}

InsightImpactGraphService::InsightImpactGraphService(JsonView jsonValue) : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_edgesHasBeenSet(false)
{
  *this = jsonValue;
}

InsightImpactGraphService& InsightImpactGraphService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetInteger("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Names"))
  {
    Aws::Utils::Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
    {
      m_names.push_back(namesJsonList[namesIndex].AsString());
    }
    m_namesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edges"))
  {
    Aws::Utils::Array<JsonView> edgesJsonList = jsonValue.GetArray("Edges");
    for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
    {
      m_edges.push_back(edgesJsonList[edgesIndex].AsObject());
    }
    m_edgesHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightImpactGraphService::Jsonize() const
{
  JsonValue payload;

  if(m_referenceIdHasBeenSet)
  {
   payload.WithInteger("ReferenceId", m_referenceId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_edgesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgesJsonList(m_edges.size());
   for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
   {
     edgesJsonList[edgesIndex].AsObject(m_edges[edgesIndex].Jsonize());
   }
   payload.WithArray("Edges", std::move(edgesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
