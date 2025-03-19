/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationVersionChangeDetails.h>
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

ApplicationVersionChangeDetails::ApplicationVersionChangeDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationVersionChangeDetails& ApplicationVersionChangeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationVersionUpdatedFrom"))
  {
    m_applicationVersionUpdatedFrom = jsonValue.GetInt64("ApplicationVersionUpdatedFrom");
    m_applicationVersionUpdatedFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationVersionUpdatedTo"))
  {
    m_applicationVersionUpdatedTo = jsonValue.GetInt64("ApplicationVersionUpdatedTo");
    m_applicationVersionUpdatedToHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationVersionChangeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_applicationVersionUpdatedFromHasBeenSet)
  {
   payload.WithInt64("ApplicationVersionUpdatedFrom", m_applicationVersionUpdatedFrom);

  }

  if(m_applicationVersionUpdatedToHasBeenSet)
  {
   payload.WithInt64("ApplicationVersionUpdatedTo", m_applicationVersionUpdatedTo);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
