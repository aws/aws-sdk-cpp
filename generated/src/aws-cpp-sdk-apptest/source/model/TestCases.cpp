/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestCases.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

TestCases::TestCases(JsonView jsonValue)
{
  *this = jsonValue;
}

TestCases& TestCases::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sequential"))
  {
    Aws::Utils::Array<JsonView> sequentialJsonList = jsonValue.GetArray("sequential");
    for(unsigned sequentialIndex = 0; sequentialIndex < sequentialJsonList.GetLength(); ++sequentialIndex)
    {
      m_sequential.push_back(sequentialJsonList[sequentialIndex].AsString());
    }
    m_sequentialHasBeenSet = true;
  }
  return *this;
}

JsonValue TestCases::Jsonize() const
{
  JsonValue payload;

  if(m_sequentialHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sequentialJsonList(m_sequential.size());
   for(unsigned sequentialIndex = 0; sequentialIndex < sequentialJsonList.GetLength(); ++sequentialIndex)
   {
     sequentialJsonList[sequentialIndex].AsString(m_sequential[sequentialIndex]);
   }
   payload.WithArray("sequential", std::move(sequentialJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
