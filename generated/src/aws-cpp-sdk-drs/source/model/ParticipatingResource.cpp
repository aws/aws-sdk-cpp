/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ParticipatingResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

ParticipatingResource::ParticipatingResource() : 
    m_launchStatus(LaunchStatus::NOT_SET),
    m_launchStatusHasBeenSet(false),
    m_participatingResourceIDHasBeenSet(false)
{
}

ParticipatingResource::ParticipatingResource(JsonView jsonValue) : 
    m_launchStatus(LaunchStatus::NOT_SET),
    m_launchStatusHasBeenSet(false),
    m_participatingResourceIDHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipatingResource& ParticipatingResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("launchStatus"))
  {
    m_launchStatus = LaunchStatusMapper::GetLaunchStatusForName(jsonValue.GetString("launchStatus"));

    m_launchStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("participatingResourceID"))
  {
    m_participatingResourceID = jsonValue.GetObject("participatingResourceID");

    m_participatingResourceIDHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipatingResource::Jsonize() const
{
  JsonValue payload;

  if(m_launchStatusHasBeenSet)
  {
   payload.WithString("launchStatus", LaunchStatusMapper::GetNameForLaunchStatus(m_launchStatus));
  }

  if(m_participatingResourceIDHasBeenSet)
  {
   payload.WithObject("participatingResourceID", m_participatingResourceID.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
