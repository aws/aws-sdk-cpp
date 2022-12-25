/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/MetricAttributionOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

MetricAttributionOutput::MetricAttributionOutput() : 
    m_s3DataDestinationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

MetricAttributionOutput::MetricAttributionOutput(JsonView jsonValue) : 
    m_s3DataDestinationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

MetricAttributionOutput& MetricAttributionOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataDestination"))
  {
    m_s3DataDestination = jsonValue.GetObject("s3DataDestination");

    m_s3DataDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricAttributionOutput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataDestinationHasBeenSet)
  {
   payload.WithObject("s3DataDestination", m_s3DataDestination.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
