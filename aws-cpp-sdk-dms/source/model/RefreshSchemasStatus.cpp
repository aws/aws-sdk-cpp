/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/dms/model/RefreshSchemasStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

RefreshSchemasStatus::RefreshSchemasStatus() : 
    m_endpointArnHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_status(RefreshSchemasStatusTypeValue::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastRefreshDateHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false)
{
}

RefreshSchemasStatus::RefreshSchemasStatus(const JsonValue& jsonValue) : 
    m_endpointArnHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_status(RefreshSchemasStatusTypeValue::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastRefreshDateHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false)
{
  *this = jsonValue;
}

RefreshSchemasStatus& RefreshSchemasStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceArn"))
  {
    m_replicationInstanceArn = jsonValue.GetString("ReplicationInstanceArn");

    m_replicationInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RefreshSchemasStatusTypeValueMapper::GetRefreshSchemasStatusTypeValueForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRefreshDate"))
  {
    m_lastRefreshDate = jsonValue.GetDouble("LastRefreshDate");

    m_lastRefreshDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFailureMessage"))
  {
    m_lastFailureMessage = jsonValue.GetString("LastFailureMessage");

    m_lastFailureMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue RefreshSchemasStatus::Jsonize() const
{
  JsonValue payload;

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RefreshSchemasStatusTypeValueMapper::GetNameForRefreshSchemasStatusTypeValue(m_status));
  }

  if(m_lastRefreshDateHasBeenSet)
  {
   payload.WithDouble("LastRefreshDate", m_lastRefreshDate.SecondsWithMSPrecision());
  }

  if(m_lastFailureMessageHasBeenSet)
  {
   payload.WithString("LastFailureMessage", m_lastFailureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws