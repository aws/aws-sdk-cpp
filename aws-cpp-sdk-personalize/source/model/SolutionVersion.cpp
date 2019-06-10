/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/personalize/model/SolutionVersion.h>
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

SolutionVersion::SolutionVersion() : 
    m_solutionVersionArnHasBeenSet(false),
    m_solutionArnHasBeenSet(false),
    m_performHPO(false),
    m_performHPOHasBeenSet(false),
    m_performAutoML(false),
    m_performAutoMLHasBeenSet(false),
    m_recipeArnHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_solutionConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

SolutionVersion::SolutionVersion(JsonView jsonValue) : 
    m_solutionVersionArnHasBeenSet(false),
    m_solutionArnHasBeenSet(false),
    m_performHPO(false),
    m_performHPOHasBeenSet(false),
    m_performAutoML(false),
    m_performAutoMLHasBeenSet(false),
    m_recipeArnHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_solutionConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SolutionVersion& SolutionVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("solutionVersionArn"))
  {
    m_solutionVersionArn = jsonValue.GetString("solutionVersionArn");

    m_solutionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("solutionArn"))
  {
    m_solutionArn = jsonValue.GetString("solutionArn");

    m_solutionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("performHPO"))
  {
    m_performHPO = jsonValue.GetBool("performHPO");

    m_performHPOHasBeenSet = true;
  }

  if(jsonValue.ValueExists("performAutoML"))
  {
    m_performAutoML = jsonValue.GetBool("performAutoML");

    m_performAutoMLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recipeArn"))
  {
    m_recipeArn = jsonValue.GetString("recipeArn");

    m_recipeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("datasetGroupArn");

    m_datasetGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("solutionConfig"))
  {
    m_solutionConfig = jsonValue.GetObject("solutionConfig");

    m_solutionConfigHasBeenSet = true;
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

JsonValue SolutionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  if(m_solutionArnHasBeenSet)
  {
   payload.WithString("solutionArn", m_solutionArn);

  }

  if(m_performHPOHasBeenSet)
  {
   payload.WithBool("performHPO", m_performHPO);

  }

  if(m_performAutoMLHasBeenSet)
  {
   payload.WithBool("performAutoML", m_performAutoML);

  }

  if(m_recipeArnHasBeenSet)
  {
   payload.WithString("recipeArn", m_recipeArn);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_solutionConfigHasBeenSet)
  {
   payload.WithObject("solutionConfig", m_solutionConfig.Jsonize());

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
