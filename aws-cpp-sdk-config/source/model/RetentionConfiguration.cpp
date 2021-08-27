/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RetentionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RetentionConfiguration::RetentionConfiguration() : 
    m_nameHasBeenSet(false),
    m_retentionPeriodInDays(0),
    m_retentionPeriodInDaysHasBeenSet(false)
{
}

RetentionConfiguration::RetentionConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_retentionPeriodInDays(0),
    m_retentionPeriodInDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionConfiguration& RetentionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriodInDays"))
  {
    m_retentionPeriodInDays = jsonValue.GetInteger("RetentionPeriodInDays");

    m_retentionPeriodInDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_retentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("RetentionPeriodInDays", m_retentionPeriodInDays);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
