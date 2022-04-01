/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AwsIotAnalyticsParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AwsIotAnalyticsParameters::AwsIotAnalyticsParameters() : 
    m_dataSetNameHasBeenSet(false)
{
}

AwsIotAnalyticsParameters::AwsIotAnalyticsParameters(JsonView jsonValue) : 
    m_dataSetNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIotAnalyticsParameters& AwsIotAnalyticsParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetName"))
  {
    m_dataSetName = jsonValue.GetString("DataSetName");

    m_dataSetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIotAnalyticsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetNameHasBeenSet)
  {
   payload.WithString("DataSetName", m_dataSetName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
