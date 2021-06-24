/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticsearchDomainServiceSoftwareOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElasticsearchDomainServiceSoftwareOptions::AwsElasticsearchDomainServiceSoftwareOptions() : 
    m_automatedUpdateDateHasBeenSet(false),
    m_cancellable(false),
    m_cancellableHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_newVersionHasBeenSet(false),
    m_updateAvailable(false),
    m_updateAvailableHasBeenSet(false),
    m_updateStatusHasBeenSet(false)
{
}

AwsElasticsearchDomainServiceSoftwareOptions::AwsElasticsearchDomainServiceSoftwareOptions(JsonView jsonValue) : 
    m_automatedUpdateDateHasBeenSet(false),
    m_cancellable(false),
    m_cancellableHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_newVersionHasBeenSet(false),
    m_updateAvailable(false),
    m_updateAvailableHasBeenSet(false),
    m_updateStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElasticsearchDomainServiceSoftwareOptions& AwsElasticsearchDomainServiceSoftwareOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomatedUpdateDate"))
  {
    m_automatedUpdateDate = jsonValue.GetString("AutomatedUpdateDate");

    m_automatedUpdateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cancellable"))
  {
    m_cancellable = jsonValue.GetBool("Cancellable");

    m_cancellableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentVersion"))
  {
    m_currentVersion = jsonValue.GetString("CurrentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewVersion"))
  {
    m_newVersion = jsonValue.GetString("NewVersion");

    m_newVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateAvailable"))
  {
    m_updateAvailable = jsonValue.GetBool("UpdateAvailable");

    m_updateAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = jsonValue.GetString("UpdateStatus");

    m_updateStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElasticsearchDomainServiceSoftwareOptions::Jsonize() const
{
  JsonValue payload;

  if(m_automatedUpdateDateHasBeenSet)
  {
   payload.WithString("AutomatedUpdateDate", m_automatedUpdateDate);

  }

  if(m_cancellableHasBeenSet)
  {
   payload.WithBool("Cancellable", m_cancellable);

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("CurrentVersion", m_currentVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_newVersionHasBeenSet)
  {
   payload.WithString("NewVersion", m_newVersion);

  }

  if(m_updateAvailableHasBeenSet)
  {
   payload.WithBool("UpdateAvailable", m_updateAvailable);

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", m_updateStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
