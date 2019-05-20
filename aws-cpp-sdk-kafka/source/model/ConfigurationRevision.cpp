/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kafka/model/ConfigurationRevision.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

ConfigurationRevision::ConfigurationRevision() : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
}

ConfigurationRevision::ConfigurationRevision(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationRevision& ConfigurationRevision::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInt64("revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationRevision::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInt64("revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
