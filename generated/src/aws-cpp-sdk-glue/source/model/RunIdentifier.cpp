/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RunIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

RunIdentifier::RunIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

RunIdentifier& RunIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");
    m_runIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobRunId"))
  {
    m_jobRunId = jsonValue.GetString("JobRunId");
    m_jobRunIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RunIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  if(m_jobRunIdHasBeenSet)
  {
   payload.WithString("JobRunId", m_jobRunId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
