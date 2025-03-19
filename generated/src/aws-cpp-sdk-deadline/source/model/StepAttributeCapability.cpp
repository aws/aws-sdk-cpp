/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepAttributeCapability.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

StepAttributeCapability::StepAttributeCapability(JsonView jsonValue)
{
  *this = jsonValue;
}

StepAttributeCapability& StepAttributeCapability::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("anyOf"))
  {
    Aws::Utils::Array<JsonView> anyOfJsonList = jsonValue.GetArray("anyOf");
    for(unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex)
    {
      m_anyOf.push_back(anyOfJsonList[anyOfIndex].AsString());
    }
    m_anyOfHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allOf"))
  {
    Aws::Utils::Array<JsonView> allOfJsonList = jsonValue.GetArray("allOf");
    for(unsigned allOfIndex = 0; allOfIndex < allOfJsonList.GetLength(); ++allOfIndex)
    {
      m_allOf.push_back(allOfJsonList[allOfIndex].AsString());
    }
    m_allOfHasBeenSet = true;
  }
  return *this;
}

JsonValue StepAttributeCapability::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_anyOfHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> anyOfJsonList(m_anyOf.size());
   for(unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex)
   {
     anyOfJsonList[anyOfIndex].AsString(m_anyOf[anyOfIndex]);
   }
   payload.WithArray("anyOf", std::move(anyOfJsonList));

  }

  if(m_allOfHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allOfJsonList(m_allOf.size());
   for(unsigned allOfIndex = 0; allOfIndex < allOfJsonList.GetLength(); ++allOfIndex)
   {
     allOfJsonList[allOfIndex].AsString(m_allOf[allOfIndex]);
   }
   payload.WithArray("allOf", std::move(allOfJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
