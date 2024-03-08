/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/WorkerConfigurationSummary.h>
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

WorkerConfigurationSummary::WorkerConfigurationSummary() : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_workerConfigurationArnHasBeenSet(false),
    m_workerConfigurationState(WorkerConfigurationState::NOT_SET),
    m_workerConfigurationStateHasBeenSet(false)
{
}

WorkerConfigurationSummary::WorkerConfigurationSummary(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_workerConfigurationArnHasBeenSet(false),
    m_workerConfigurationState(WorkerConfigurationState::NOT_SET),
    m_workerConfigurationStateHasBeenSet(false)
{
  *this = jsonValue;
}

WorkerConfigurationSummary& WorkerConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestRevision"))
  {
    m_latestRevision = jsonValue.GetObject("latestRevision");

    m_latestRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerConfigurationArn"))
  {
    m_workerConfigurationArn = jsonValue.GetString("workerConfigurationArn");

    m_workerConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerConfigurationState"))
  {
    m_workerConfigurationState = WorkerConfigurationStateMapper::GetWorkerConfigurationStateForName(jsonValue.GetString("workerConfigurationState"));

    m_workerConfigurationStateHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkerConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_latestRevisionHasBeenSet)
  {
   payload.WithObject("latestRevision", m_latestRevision.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_workerConfigurationArnHasBeenSet)
  {
   payload.WithString("workerConfigurationArn", m_workerConfigurationArn);

  }

  if(m_workerConfigurationStateHasBeenSet)
  {
   payload.WithString("workerConfigurationState", WorkerConfigurationStateMapper::GetNameForWorkerConfigurationState(m_workerConfigurationState));
  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
