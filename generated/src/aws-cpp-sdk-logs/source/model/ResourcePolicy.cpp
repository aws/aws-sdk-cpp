/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ResourcePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

ResourcePolicy::ResourcePolicy() : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_lastUpdatedTime(0),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

ResourcePolicy::ResourcePolicy(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_lastUpdatedTime(0),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicy& ResourcePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");

    m_policyDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetInt64("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithInt64("lastUpdatedTime", m_lastUpdatedTime);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
