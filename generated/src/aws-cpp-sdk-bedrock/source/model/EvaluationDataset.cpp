/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationDataset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

EvaluationDataset::EvaluationDataset() : 
    m_nameHasBeenSet(false),
    m_datasetLocationHasBeenSet(false)
{
}

EvaluationDataset::EvaluationDataset(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_datasetLocationHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationDataset& EvaluationDataset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetLocation"))
  {
    m_datasetLocation = jsonValue.GetObject("datasetLocation");

    m_datasetLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationDataset::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_datasetLocationHasBeenSet)
  {
   payload.WithObject("datasetLocation", m_datasetLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
