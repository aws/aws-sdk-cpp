/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/IndexPolicy.h>
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

IndexPolicy::IndexPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

IndexPolicy& IndexPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupIdentifier"))
  {
    m_logGroupIdentifier = jsonValue.GetString("logGroupIdentifier");
    m_logGroupIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetInt64("lastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");
    m_policyDocumentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");
    m_policyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = IndexSourceMapper::GetIndexSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue IndexPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupIdentifierHasBeenSet)
  {
   payload.WithString("logGroupIdentifier", m_logGroupIdentifier);

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithInt64("lastUpdateTime", m_lastUpdateTime);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", IndexSourceMapper::GetNameForIndexSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
