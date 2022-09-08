/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/WorkerConfigurationRevisionDescription.h>
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

WorkerConfigurationRevisionDescription::WorkerConfigurationRevisionDescription() : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_propertiesFileContentHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
}

WorkerConfigurationRevisionDescription::WorkerConfigurationRevisionDescription(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_propertiesFileContentHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

WorkerConfigurationRevisionDescription& WorkerConfigurationRevisionDescription::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("propertiesFileContent"))
  {
    m_propertiesFileContent = jsonValue.GetString("propertiesFileContent");

    m_propertiesFileContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInt64("revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkerConfigurationRevisionDescription::Jsonize() const
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

  if(m_propertiesFileContentHasBeenSet)
  {
   payload.WithString("propertiesFileContent", m_propertiesFileContent);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInt64("revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
