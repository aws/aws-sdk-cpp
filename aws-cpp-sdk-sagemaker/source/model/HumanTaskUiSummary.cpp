/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
