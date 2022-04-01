/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobTemplateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

JobTemplateSummary::JobTemplateSummary() : 
    m_jobTemplateArnHasBeenSet(false),
    m_jobTemplateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

JobTemplateSummary::JobTemplateSummary(JsonView jsonValue) : 
    m_jobTemplateArnHasBeenSet(false),
    m_jobTemplateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

JobTemplateSummary& JobTemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobTemplateArn"))
  {
    m_jobTemplateArn = jsonValue.GetString("jobTemplateArn");

    m_jobTemplateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobTemplateId"))
  {
    m_jobTemplateId = jsonValue.GetString("jobTemplateId");

    m_jobTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue JobTemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobTemplateArnHasBeenSet)
  {
   payload.WithString("jobTemplateArn", m_jobTemplateArn);

  }

  if(m_jobTemplateIdHasBeenSet)
  {
   payload.WithString("jobTemplateId", m_jobTemplateId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
