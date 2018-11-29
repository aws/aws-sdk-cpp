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

#include <aws/sagemaker/model/LabelCountersForWorkteam.h>
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

LabelCountersForWorkteam::LabelCountersForWorkteam() : 
    m_humanLabeled(0),
    m_humanLabeledHasBeenSet(false),
    m_pendingHuman(0),
    m_pendingHumanHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
}

LabelCountersForWorkteam::LabelCountersForWorkteam(JsonView jsonValue) : 
    m_humanLabeled(0),
    m_humanLabeledHasBeenSet(false),
    m_pendingHuman(0),
    m_pendingHumanHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

LabelCountersForWorkteam& LabelCountersForWorkteam::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLabeled"))
  {
    m_humanLabeled = jsonValue.GetInteger("HumanLabeled");

    m_humanLabeledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingHuman"))
  {
    m_pendingHuman = jsonValue.GetInteger("PendingHuman");

    m_pendingHumanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetInteger("Total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelCountersForWorkteam::Jsonize() const
{
  JsonValue payload;

  if(m_humanLabeledHasBeenSet)
  {
   payload.WithInteger("HumanLabeled", m_humanLabeled);

  }

  if(m_pendingHumanHasBeenSet)
  {
   payload.WithInteger("PendingHuman", m_pendingHuman);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("Total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
