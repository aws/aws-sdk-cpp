/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/WorkerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

WorkerConfiguration::WorkerConfiguration() : 
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_workerConfigurationArnHasBeenSet(false)
{
}

WorkerConfiguration::WorkerConfiguration(JsonView jsonValue) : 
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_workerConfigurationArnHasBeenSet(false)
{
  *this = jsonValue;
}

WorkerConfiguration& WorkerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInt64("revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerConfigurationArn"))
  {
    m_workerConfigurationArn = jsonValue.GetString("workerConfigurationArn");

    m_workerConfigurationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_revisionHasBeenSet)
  {
   payload.WithInt64("revision", m_revision);

  }

  if(m_workerConfigurationArnHasBeenSet)
  {
   payload.WithString("workerConfigurationArn", m_workerConfigurationArn);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
