/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/Finding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

Finding::Finding() : 
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_detectorNameHasBeenSet(false),
    m_detectorTagsHasBeenSet(false),
    m_generatorIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_vulnerabilityHasBeenSet(false)
{
}

Finding::Finding(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_detectorNameHasBeenSet(false),
    m_detectorTagsHasBeenSet(false),
    m_generatorIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_vulnerabilityHasBeenSet(false)
{
  *this = jsonValue;
}

Finding& Finding::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

    m_detectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorName"))
  {
    m_detectorName = jsonValue.GetString("detectorName");

    m_detectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorTags"))
  {
    Aws::Utils::Array<JsonView> detectorTagsJsonList = jsonValue.GetArray("detectorTags");
    for(unsigned detectorTagsIndex = 0; detectorTagsIndex < detectorTagsJsonList.GetLength(); ++detectorTagsIndex)
    {
      m_detectorTags.push_back(detectorTagsJsonList[detectorTagsIndex].AsString());
    }
    m_detectorTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generatorId"))
  {
    m_generatorId = jsonValue.GetString("generatorId");

    m_generatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remediation"))
  {
    m_remediation = jsonValue.GetObject("remediation");

    m_remediationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleId"))
  {
    m_ruleId = jsonValue.GetString("ruleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vulnerability"))
  {
    m_vulnerability = jsonValue.GetObject("vulnerability");

    m_vulnerabilityHasBeenSet = true;
  }

  return *this;
}

JsonValue Finding::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_detectorNameHasBeenSet)
  {
   payload.WithString("detectorName", m_detectorName);

  }

  if(m_detectorTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detectorTagsJsonList(m_detectorTags.size());
   for(unsigned detectorTagsIndex = 0; detectorTagsIndex < detectorTagsJsonList.GetLength(); ++detectorTagsIndex)
   {
     detectorTagsJsonList[detectorTagsIndex].AsString(m_detectorTags[detectorTagsIndex]);
   }
   payload.WithArray("detectorTags", std::move(detectorTagsJsonList));

  }

  if(m_generatorIdHasBeenSet)
  {
   payload.WithString("generatorId", m_generatorId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_remediationHasBeenSet)
  {
   payload.WithObject("remediation", m_remediation.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_vulnerabilityHasBeenSet)
  {
   payload.WithObject("vulnerability", m_vulnerability.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
