/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskExecutionFilesFailedDetail.h>
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

TaskExecutionFilesFailedDetail::TaskExecutionFilesFailedDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

TaskExecutionFilesFailedDetail& TaskExecutionFilesFailedDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Prepare"))
  {
    m_prepare = jsonValue.GetInt64("Prepare");
    m_prepareHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Transfer"))
  {
    m_transfer = jsonValue.GetInt64("Transfer");
    m_transferHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Verify"))
  {
    m_verify = jsonValue.GetInt64("Verify");
    m_verifyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Delete"))
  {
    m_delete = jsonValue.GetInt64("Delete");
    m_deleteHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskExecutionFilesFailedDetail::Jsonize() const
{
  JsonValue payload;

  if(m_prepareHasBeenSet)
  {
   payload.WithInt64("Prepare", m_prepare);

  }

  if(m_transferHasBeenSet)
  {
   payload.WithInt64("Transfer", m_transfer);

  }

  if(m_verifyHasBeenSet)
  {
   payload.WithInt64("Verify", m_verify);

  }

  if(m_deleteHasBeenSet)
  {
   payload.WithInt64("Delete", m_delete);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
