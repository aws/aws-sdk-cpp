/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/RepositoryScanningConfigurationFailure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

RepositoryScanningConfigurationFailure::RepositoryScanningConfigurationFailure() : 
    m_repositoryNameHasBeenSet(false),
    m_failureCode(ScanningConfigurationFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

RepositoryScanningConfigurationFailure::RepositoryScanningConfigurationFailure(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_failureCode(ScanningConfigurationFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryScanningConfigurationFailure& RepositoryScanningConfigurationFailure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = ScanningConfigurationFailureCodeMapper::GetScanningConfigurationFailureCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryScanningConfigurationFailure::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", ScanningConfigurationFailureCodeMapper::GetNameForScanningConfigurationFailureCode(m_failureCode));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
