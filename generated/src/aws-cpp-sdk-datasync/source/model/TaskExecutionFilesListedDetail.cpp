/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskExecutionFilesListedDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

TaskExecutionFilesListedDetail::TaskExecutionFilesListedDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

TaskExecutionFilesListedDetail& TaskExecutionFilesListedDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AtSource"))
  {
    m_atSource = jsonValue.GetInt64("AtSource");
    m_atSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AtDestinationForDelete"))
  {
    m_atDestinationForDelete = jsonValue.GetInt64("AtDestinationForDelete");
    m_atDestinationForDeleteHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskExecutionFilesListedDetail::Jsonize() const
{
  JsonValue payload;

  if(m_atSourceHasBeenSet)
  {
   payload.WithInt64("AtSource", m_atSource);

  }

  if(m_atDestinationForDeleteHasBeenSet)
  {
   payload.WithInt64("AtDestinationForDelete", m_atDestinationForDelete);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
