/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SourceAlgorithm.h>
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

SourceAlgorithm::SourceAlgorithm() : 
    m_modelDataUrlHasBeenSet(false),
    m_algorithmNameHasBeenSet(false)
{
}

SourceAlgorithm::SourceAlgorithm(JsonView jsonValue) : 
    m_modelDataUrlHasBeenSet(false),
    m_algorithmNameHasBeenSet(false)
{
  *this = jsonValue;
}

SourceAlgorithm& SourceAlgorithm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelDataUrl"))
  {
    m_modelDataUrl = jsonValue.GetString("ModelDataUrl");

    m_modelDataUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = jsonValue.GetString("AlgorithmName");

    m_algorithmNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceAlgorithm::Jsonize() const
{
  JsonValue payload;

  if(m_modelDataUrlHasBeenSet)
  {
   payload.WithString("ModelDataUrl", m_modelDataUrl);

  }

  if(m_algorithmNameHasBeenSet)
  {
   payload.WithString("AlgorithmName", m_algorithmName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
