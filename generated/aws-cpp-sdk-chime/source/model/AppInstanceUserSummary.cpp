/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AppInstanceUserSummary.h>
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

AppInstanceUserSummary::AppInstanceUserSummary() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

AppInstanceUserSummary::AppInstanceUserSummary(JsonView jsonValue) : 
    m_appInstanceUserArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceUserSummary& AppInstanceUserSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceUserSummary::Jsonize() const
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

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
