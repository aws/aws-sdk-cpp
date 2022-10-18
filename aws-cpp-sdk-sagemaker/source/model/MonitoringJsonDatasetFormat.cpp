/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringJsonDatasetFormat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringJsonDatasetFormat::MonitoringJsonDatasetFormat() : 
    m_line(false),
    m_lineHasBeenSet(false)
{
}

MonitoringJsonDatasetFormat::MonitoringJsonDatasetFormat(JsonView jsonValue) : 
    m_line(false),
    m_lineHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringJsonDatasetFormat& MonitoringJsonDatasetFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Line"))
  {
    m_line = jsonValue.GetBool("Line");

    m_lineHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringJsonDatasetFormat::Jsonize() const
{
  JsonValue payload;

  if(m_lineHasBeenSet)
  {
   payload.WithBool("Line", m_line);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
