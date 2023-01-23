/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AppInstanceUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

AppInstanceUser::AppInstanceUser() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false)
{
}

AppInstanceUser::AppInstanceUser(JsonView jsonValue) : 
    m_appInstanceUserArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceUser& AppInstanceUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppInstanceUserArn"))
  {
    m_appInstanceUserArn = jsonValue.GetString("AppInstanceUserArn");

    m_appInstanceUserArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceUser::Jsonize() const
{
  JsonValue payload;

  if(m_appInstanceUserArnHasBeenSet)
  {
   payload.WithString("AppInstanceUserArn", m_appInstanceUserArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
