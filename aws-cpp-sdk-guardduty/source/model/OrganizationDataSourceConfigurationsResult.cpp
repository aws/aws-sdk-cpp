/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationDataSourceConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

OrganizationDataSourceConfigurationsResult::OrganizationDataSourceConfigurationsResult() : 
    m_s3LogsHasBeenSet(false)
{
}

OrganizationDataSourceConfigurationsResult::OrganizationDataSourceConfigurationsResult(JsonView jsonValue) : 
    m_s3LogsHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationDataSourceConfigurationsResult& OrganizationDataSourceConfigurationsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Logs"))
  {
    m_s3Logs = jsonValue.GetObject("s3Logs");

    m_s3LogsHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationDataSourceConfigurationsResult::Jsonize() const
{
  JsonValue payload;

  if(m_s3LogsHasBeenSet)
  {
   payload.WithObject("s3Logs", m_s3Logs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
