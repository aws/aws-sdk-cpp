/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UserProfileSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

UserProfileSummary::UserProfileSummary() : 
    m_detailsHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(UserProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(UserProfileType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

UserProfileSummary::UserProfileSummary(JsonView jsonValue) : 
    m_detailsHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(UserProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(UserProfileType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

UserProfileSummary& UserProfileSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetObject("details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = UserProfileStatusMapper::GetUserProfileStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UserProfileTypeMapper::GetUserProfileTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue UserProfileSummary::Jsonize() const
{
  JsonValue payload;

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("details", m_details.Jsonize());

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UserProfileStatusMapper::GetNameForUserProfileStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UserProfileTypeMapper::GetNameForUserProfileType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
