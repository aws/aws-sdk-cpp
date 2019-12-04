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

#include <aws/sagemaker/model/TrialComponentSimpleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrialComponentSimpleSummary::TrialComponentSimpleSummary() : 
    m_trialComponentNameHasBeenSet(false),
    m_trialComponentArnHasBeenSet(false),
    m_trialComponentSourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
}

TrialComponentSimpleSummary::TrialComponentSimpleSummary(JsonView jsonValue) : 
    m_trialComponentNameHasBeenSet(false),
    m_trialComponentArnHasBeenSet(false),
    m_trialComponentSourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
  *this = jsonValue;
}

TrialComponentSimpleSummary& TrialComponentSimpleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrialComponentName"))
  {
    m_trialComponentName = jsonValue.GetString("TrialComponentName");

    m_trialComponentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialComponentArn"))
  {
    m_trialComponentArn = jsonValue.GetString("TrialComponentArn");

    m_trialComponentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialComponentSource"))
  {
    m_trialComponentSource = jsonValue.GetObject("TrialComponentSource");

    m_trialComponentSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialComponentSimpleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_trialComponentNameHasBeenSet)
  {
   payload.WithString("TrialComponentName", m_trialComponentName);

  }

  if(m_trialComponentArnHasBeenSet)
  {
   payload.WithString("TrialComponentArn", m_trialComponentArn);

  }

  if(m_trialComponentSourceHasBeenSet)
  {
   payload.WithObject("TrialComponentSource", m_trialComponentSource.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
