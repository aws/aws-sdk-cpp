/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/Service.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

Service::Service() : 
    m_arnHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_repositoryConnectionArnHasBeenSet(false),
    m_repositoryIdHasBeenSet(false),
    m_specHasBeenSet(false),
    m_status(ServiceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Service::Service(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_repositoryConnectionArnHasBeenSet(false),
    m_repositoryIdHasBeenSet(false),
    m_specHasBeenSet(false),
    m_status(ServiceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
  *this = jsonValue;
}

Service& Service::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchName"))
  {
    m_branchName = jsonValue.GetString("branchName");

    m_branchNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipeline"))
  {
    m_pipeline = jsonValue.GetObject("pipeline");

    m_pipelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryConnectionArn"))
  {
    m_repositoryConnectionArn = jsonValue.GetString("repositoryConnectionArn");

    m_repositoryConnectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryId"))
  {
    m_repositoryId = jsonValue.GetString("repositoryId");

    m_repositoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spec"))
  {
    m_spec = jsonValue.GetString("spec");

    m_specHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceStatusMapper::GetServiceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

    m_templateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Service::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pipelineHasBeenSet)
  {
   payload.WithObject("pipeline", m_pipeline.Jsonize());

  }

  if(m_repositoryConnectionArnHasBeenSet)
  {
   payload.WithString("repositoryConnectionArn", m_repositoryConnectionArn);

  }

  if(m_repositoryIdHasBeenSet)
  {
   payload.WithString("repositoryId", m_repositoryId);

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ServiceStatusMapper::GetNameForServiceStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
