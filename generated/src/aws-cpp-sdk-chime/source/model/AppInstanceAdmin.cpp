/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AppInstanceAdmin.h>
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

AppInstanceAdmin::AppInstanceAdmin() : 
    m_adminHasBeenSet(false),
    m_appInstanceArnHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

AppInstanceAdmin::AppInstanceAdmin(JsonView jsonValue) : 
    m_adminHasBeenSet(false),
    m_appInstanceArnHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceAdmin& AppInstanceAdmin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Admin"))
  {
    m_admin = jsonValue.GetObject("Admin");

    m_adminHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppInstanceArn"))
  {
    m_appInstanceArn = jsonValue.GetString("AppInstanceArn");

    m_appInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceAdmin::Jsonize() const
{
  JsonValue payload;

  if(m_adminHasBeenSet)
  {
   payload.WithObject("Admin", m_admin.Jsonize());

  }

  if(m_appInstanceArnHasBeenSet)
  {
   payload.WithString("AppInstanceArn", m_appInstanceArn);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
