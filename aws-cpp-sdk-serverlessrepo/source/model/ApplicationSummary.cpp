/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/ApplicationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

ApplicationSummary::ApplicationSummary() : 
    m_applicationIdHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_homePageUrlHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_spdxLicenseIdHasBeenSet(false)
{
}

ApplicationSummary::ApplicationSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_homePageUrlHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_spdxLicenseIdHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSummary& ApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("author"))
  {
    m_author = jsonValue.GetString("author");

    m_authorHasBeenSet = true;
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

  if(jsonValue.ValueExists("homePageUrl"))
  {
    m_homePageUrl = jsonValue.GetString("homePageUrl");

    m_homePageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spdxLicenseId"))
  {
    m_spdxLicenseId = jsonValue.GetString("spdxLicenseId");

    m_spdxLicenseIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_authorHasBeenSet)
  {
   payload.WithString("author", m_author);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_homePageUrlHasBeenSet)
  {
   payload.WithString("homePageUrl", m_homePageUrl);

  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("labels", std::move(labelsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_spdxLicenseIdHasBeenSet)
  {
   payload.WithString("spdxLicenseId", m_spdxLicenseId);

  }

  return payload;
}

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
