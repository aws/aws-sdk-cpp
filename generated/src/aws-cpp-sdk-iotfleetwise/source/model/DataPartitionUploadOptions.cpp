/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DataPartitionUploadOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

DataPartitionUploadOptions::DataPartitionUploadOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DataPartitionUploadOptions& DataPartitionUploadOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditionLanguageVersion"))
  {
    m_conditionLanguageVersion = jsonValue.GetInteger("conditionLanguageVersion");
    m_conditionLanguageVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPartitionUploadOptions::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_conditionLanguageVersionHasBeenSet)
  {
   payload.WithInteger("conditionLanguageVersion", m_conditionLanguageVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
