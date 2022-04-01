/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
