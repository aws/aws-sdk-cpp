﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CampaignUpdateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

CampaignUpdateSummary::CampaignUpdateSummary() : 
    m_solutionVersionArnHasBeenSet(false),
    m_minProvisionedTPS(0),
    m_minProvisionedTPSHasBeenSet(false),
    m_campaignConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

CampaignUpdateSummary::CampaignUpdateSummary(JsonView jsonValue) : 
    m_solutionVersionArnHasBeenSet(false),
    m_minProvisionedTPS(0),
    m_minProvisionedTPSHasBeenSet(false),
    m_campaignConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignUpdateSummary& CampaignUpdateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("solutionVersionArn"))
  {
    m_solutionVersionArn = jsonValue.GetString("solutionVersionArn");

    m_solutionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minProvisionedTPS"))
  {
    m_minProvisionedTPS = jsonValue.GetInteger("minProvisionedTPS");

    m_minProvisionedTPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("campaignConfig"))
  {
    m_campaignConfig = jsonValue.GetObject("campaignConfig");

    m_campaignConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignUpdateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  if(m_minProvisionedTPSHasBeenSet)
  {
   payload.WithInteger("minProvisionedTPS", m_minProvisionedTPS);

  }

  if(m_campaignConfigHasBeenSet)
  {
   payload.WithObject("campaignConfig", m_campaignConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
