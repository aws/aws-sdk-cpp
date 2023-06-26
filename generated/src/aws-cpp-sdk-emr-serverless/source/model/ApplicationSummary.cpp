/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/ApplicationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

ApplicationSummary::ApplicationSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_state(ApplicationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false)
{
}

ApplicationSummary::ApplicationSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_state(ApplicationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSummary& ApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("releaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("releaseLabel");

    m_releaseLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ApplicationStateMapper::GetApplicationStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateDetails"))
  {
    m_stateDetails = jsonValue.GetString("stateDetails");

    m_stateDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));

    m_architectureHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ApplicationStateMapper::GetNameForApplicationState(m_state));
  }

  if(m_stateDetailsHasBeenSet)
  {
   payload.WithString("stateDetails", m_stateDetails);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
