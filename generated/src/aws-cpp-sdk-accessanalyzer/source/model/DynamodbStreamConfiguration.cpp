/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/DynamodbStreamConfiguration.h>
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

DynamodbStreamConfiguration::DynamodbStreamConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DynamodbStreamConfiguration& DynamodbStreamConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamPolicy"))
  {
    m_streamPolicy = jsonValue.GetString("streamPolicy");
    m_streamPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue DynamodbStreamConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamPolicyHasBeenSet)
  {
   payload.WithString("streamPolicy", m_streamPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
