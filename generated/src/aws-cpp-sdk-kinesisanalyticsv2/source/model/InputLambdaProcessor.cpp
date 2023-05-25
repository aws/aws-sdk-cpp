/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/InputLambdaProcessor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

InputLambdaProcessor::InputLambdaProcessor() : 
    m_resourceARNHasBeenSet(false)
{
}

InputLambdaProcessor::InputLambdaProcessor(JsonView jsonValue) : 
    m_resourceARNHasBeenSet(false)
{
  *this = jsonValue;
}

InputLambdaProcessor& InputLambdaProcessor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  return *this;
}

JsonValue InputLambdaProcessor::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
