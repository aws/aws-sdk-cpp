/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsClusterConfigurationExecuteCommandConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsClusterConfigurationExecuteCommandConfigurationDetails::AwsEcsClusterConfigurationExecuteCommandConfigurationDetails() : 
    m_kmsKeyIdHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_loggingHasBeenSet(false)
{
}

AwsEcsClusterConfigurationExecuteCommandConfigurationDetails::AwsEcsClusterConfigurationExecuteCommandConfigurationDetails(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_loggingHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& AwsEcsClusterConfigurationExecuteCommandConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("LogConfiguration");

    m_logConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logging"))
  {
    m_logging = jsonValue.GetString("Logging");

    m_loggingHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsClusterConfigurationExecuteCommandConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("LogConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithString("Logging", m_logging);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
