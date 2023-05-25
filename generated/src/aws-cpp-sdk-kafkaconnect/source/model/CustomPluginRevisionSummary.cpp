/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CustomPluginRevisionSummary.h>
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

CustomPluginRevisionSummary::CustomPluginRevisionSummary() : 
    m_contentType(CustomPluginContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fileDescriptionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
}

CustomPluginRevisionSummary::CustomPluginRevisionSummary(JsonView jsonValue) : 
    m_contentType(CustomPluginContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fileDescriptionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomPluginRevisionSummary& CustomPluginRevisionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = CustomPluginContentTypeMapper::GetCustomPluginContentTypeForName(jsonValue.GetString("contentType"));

    m_contentTypeHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("fileDescription"))
  {
    m_fileDescription = jsonValue.GetObject("fileDescription");

    m_fileDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInt64("revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomPluginRevisionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", CustomPluginContentTypeMapper::GetNameForCustomPluginContentType(m_contentType));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_fileDescriptionHasBeenSet)
  {
   payload.WithObject("fileDescription", m_fileDescription.Jsonize());

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

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
