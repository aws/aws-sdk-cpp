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

#include <aws/sagemaker/model/AlgorithmSummary.h>
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

AlgorithmSummary::AlgorithmSummary() : 
    m_algorithmNameHasBeenSet(false),
    m_algorithmArnHasBeenSet(false),
    m_algorithmDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_algorithmStatus(AlgorithmStatus::NOT_SET),
    m_algorithmStatusHasBeenSet(false)
{
}

AlgorithmSummary::AlgorithmSummary(JsonView jsonValue) : 
    m_algorithmNameHasBeenSet(false),
    m_algorithmArnHasBeenSet(false),
    m_algorithmDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_algorithmStatus(AlgorithmStatus::NOT_SET),
    m_algorithmStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmSummary& AlgorithmSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = jsonValue.GetString("AlgorithmName");

    m_algorithmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("AlgorithmArn");

    m_algorithmArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmDescription"))
  {
    m_algorithmDescription = jsonValue.GetString("AlgorithmDescription");

    m_algorithmDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmStatus"))
  {
    m_algorithmStatus = AlgorithmStatusMapper::GetAlgorithmStatusForName(jsonValue.GetString("AlgorithmStatus"));

    m_algorithmStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmSummary::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmNameHasBeenSet)
  {
   payload.WithString("AlgorithmName", m_algorithmName);

  }

  if(m_algorithmArnHasBeenSet)
  {
   payload.WithString("AlgorithmArn", m_algorithmArn);

  }

  if(m_algorithmDescriptionHasBeenSet)
  {
   payload.WithString("AlgorithmDescription", m_algorithmDescription);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_algorithmStatusHasBeenSet)
  {
   payload.WithString("AlgorithmStatus", AlgorithmStatusMapper::GetNameForAlgorithmStatus(m_algorithmStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
