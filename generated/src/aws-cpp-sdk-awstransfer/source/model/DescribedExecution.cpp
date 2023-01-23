/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedExecution.h>
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

DescribedExecution::DescribedExecution() : 
    m_executionIdHasBeenSet(false),
    m_initialFileLocationHasBeenSet(false),
    m_serviceMetadataHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_loggingConfigurationHasBeenSet(false),
    m_posixProfileHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resultsHasBeenSet(false)
{
}

DescribedExecution::DescribedExecution(JsonView jsonValue) : 
    m_executionIdHasBeenSet(false),
    m_initialFileLocationHasBeenSet(false),
    m_serviceMetadataHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_loggingConfigurationHasBeenSet(false),
    m_posixProfileHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resultsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedExecution& DescribedExecution::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ExecutionRole"))
  {
    m_executionRole = jsonValue.GetString("ExecutionRole");

    m_executionRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("LoggingConfiguration");

    m_loggingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PosixProfile"))
  {
    m_posixProfile = jsonValue.GetObject("PosixProfile");

    m_posixProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Results"))
  {
    m_results = jsonValue.GetObject("Results");

    m_resultsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedExecution::Jsonize() const
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

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("ExecutionRole", m_executionRole);

  }

  if(m_loggingConfigurationHasBeenSet)
  {
   payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());

  }

  if(m_posixProfileHasBeenSet)
  {
   payload.WithObject("PosixProfile", m_posixProfile.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  if(m_resultsHasBeenSet)
  {
   payload.WithObject("Results", m_results.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
