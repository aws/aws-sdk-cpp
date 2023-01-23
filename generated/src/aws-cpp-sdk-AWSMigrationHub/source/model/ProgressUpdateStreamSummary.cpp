/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ProgressUpdateStreamSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

ProgressUpdateStreamSummary::ProgressUpdateStreamSummary() : 
    m_progressUpdateStreamNameHasBeenSet(false)
{
}

ProgressUpdateStreamSummary::ProgressUpdateStreamSummary(JsonView jsonValue) : 
    m_progressUpdateStreamNameHasBeenSet(false)
{
  *this = jsonValue;
}

ProgressUpdateStreamSummary& ProgressUpdateStreamSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProgressUpdateStreamName"))
  {
    m_progressUpdateStreamName = jsonValue.GetString("ProgressUpdateStreamName");

    m_progressUpdateStreamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ProgressUpdateStreamSummary::Jsonize() const
{
  JsonValue payload;

  if(m_progressUpdateStreamNameHasBeenSet)
  {
   payload.WithString("ProgressUpdateStreamName", m_progressUpdateStreamName);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
