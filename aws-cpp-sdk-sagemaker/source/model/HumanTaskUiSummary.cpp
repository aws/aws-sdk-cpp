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

#include <aws/sagemaker/model/HumanTaskUiSummary.h>
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

HumanTaskUiSummary::HumanTaskUiSummary() : 
    m_humanTaskUiNameHasBeenSet(false),
    m_humanTaskUiArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

HumanTaskUiSummary::HumanTaskUiSummary(JsonView jsonValue) : 
    m_humanTaskUiNameHasBeenSet(false),
    m_humanTaskUiArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

HumanTaskUiSummary& HumanTaskUiSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanTaskUiName"))
  {
    m_humanTaskUiName = jsonValue.GetString("HumanTaskUiName");

    m_humanTaskUiNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HumanTaskUiArn"))
  {
    m_humanTaskUiArn = jsonValue.GetString("HumanTaskUiArn");

    m_humanTaskUiArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanTaskUiSummary::Jsonize() const
{
  JsonValue payload;

  if(m_humanTaskUiNameHasBeenSet)
  {
   payload.WithString("HumanTaskUiName", m_humanTaskUiName);

  }

  if(m_humanTaskUiArnHasBeenSet)
  {
   payload.WithString("HumanTaskUiArn", m_humanTaskUiArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
