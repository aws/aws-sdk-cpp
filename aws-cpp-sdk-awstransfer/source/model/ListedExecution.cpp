/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ListedExecution::ListedExecution() : 
    m_executionIdHasBeenSet(false),
    m_initialFileLocationHasBeenSet(false),
    m_serviceMetadataHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ListedExecution::ListedExecution(JsonView jsonValue) : 
    m_executionIdHasBeenSet(false),
    m_initialFileLocationHasBeenSet(false),
    m_serviceMetadataHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ListedExecution& ListedExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialFileLocation"))
  {
    m_initialFileLocation = jsonValue.GetObject("InitialFileLocation");

    m_initialFileLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceMetadata"))
  {
    m_serviceMetadata = jsonValue.GetObject("ServiceMetadata");

    m_serviceMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedExecution::Jsonize() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_initialFileLocationHasBeenSet)
  {
   payload.WithObject("InitialFileLocation", m_initialFileLocation.Jsonize());

  }

  if(m_serviceMetadataHasBeenSet)
  {
   payload.WithObject("ServiceMetadata", m_serviceMetadata.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
