/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/DynamodbTableConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

DynamodbTableConfiguration::DynamodbTableConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DynamodbTableConfiguration& DynamodbTableConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tablePolicy"))
  {
    m_tablePolicy = jsonValue.GetString("tablePolicy");
    m_tablePolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue DynamodbTableConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tablePolicyHasBeenSet)
  {
   payload.WithString("tablePolicy", m_tablePolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
