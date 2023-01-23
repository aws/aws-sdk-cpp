/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AssessmentTemplate::AssessmentTemplate() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_assessmentTargetArnHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false),
    m_userAttributesForFindingsHasBeenSet(false),
    m_lastAssessmentRunArnHasBeenSet(false),
    m_assessmentRunCount(0),
    m_assessmentRunCountHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

AssessmentTemplate::AssessmentTemplate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_assessmentTargetArnHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false),
    m_userAttributesForFindingsHasBeenSet(false),
    m_lastAssessmentRunArnHasBeenSet(false),
    m_assessmentRunCount(0),
    m_assessmentRunCountHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentTemplate& AssessmentTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentTargetArn"))
  {
    m_assessmentTargetArn = jsonValue.GetString("assessmentTargetArn");

    m_assessmentTargetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("durationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rulesPackageArns"))
  {
    Aws::Utils::Array<JsonView> rulesPackageArnsJsonList = jsonValue.GetArray("rulesPackageArns");
    for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
    {
      m_rulesPackageArns.push_back(rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString());
    }
    m_rulesPackageArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttributesForFindings"))
  {
    Aws::Utils::Array<JsonView> userAttributesForFindingsJsonList = jsonValue.GetArray("userAttributesForFindings");
    for(unsigned userAttributesForFindingsIndex = 0; userAttributesForFindingsIndex < userAttributesForFindingsJsonList.GetLength(); ++userAttributesForFindingsIndex)
    {
      m_userAttributesForFindings.push_back(userAttributesForFindingsJsonList[userAttributesForFindingsIndex].AsObject());
    }
    m_userAttributesForFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAssessmentRunArn"))
  {
    m_lastAssessmentRunArn = jsonValue.GetString("lastAssessmentRunArn");

    m_lastAssessmentRunArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentRunCount"))
  {
    m_assessmentRunCount = jsonValue.GetInteger("assessmentRunCount");

    m_assessmentRunCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_assessmentTargetArnHasBeenSet)
  {
   payload.WithString("assessmentTargetArn", m_assessmentTargetArn);

  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("durationInSeconds", m_durationInSeconds);

  }

  if(m_rulesPackageArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
   for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
   {
     rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString(m_rulesPackageArns[rulesPackageArnsIndex]);
   }
   payload.WithArray("rulesPackageArns", std::move(rulesPackageArnsJsonList));

  }

  if(m_userAttributesForFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAttributesForFindingsJsonList(m_userAttributesForFindings.size());
   for(unsigned userAttributesForFindingsIndex = 0; userAttributesForFindingsIndex < userAttributesForFindingsJsonList.GetLength(); ++userAttributesForFindingsIndex)
   {
     userAttributesForFindingsJsonList[userAttributesForFindingsIndex].AsObject(m_userAttributesForFindings[userAttributesForFindingsIndex].Jsonize());
   }
   payload.WithArray("userAttributesForFindings", std::move(userAttributesForFindingsJsonList));

  }

  if(m_lastAssessmentRunArnHasBeenSet)
  {
   payload.WithString("lastAssessmentRunArn", m_lastAssessmentRunArn);

  }

  if(m_assessmentRunCountHasBeenSet)
  {
   payload.WithInteger("assessmentRunCount", m_assessmentRunCount);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
