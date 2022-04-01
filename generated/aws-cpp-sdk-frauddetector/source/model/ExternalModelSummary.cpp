/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ExternalModelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ExternalModelSummary::ExternalModelSummary() : 
    m_modelEndpointHasBeenSet(false),
    m_modelSource(ModelSource::NOT_SET),
    m_modelSourceHasBeenSet(false)
{
}

ExternalModelSummary::ExternalModelSummary(JsonView jsonValue) : 
    m_modelEndpointHasBeenSet(false),
    m_modelSource(ModelSource::NOT_SET),
    m_modelSourceHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalModelSummary& ExternalModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelEndpoint"))
  {
    m_modelEndpoint = jsonValue.GetString("modelEndpoint");

    m_modelEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelSource"))
  {
    m_modelSource = ModelSourceMapper::GetModelSourceForName(jsonValue.GetString("modelSource"));

    m_modelSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelEndpointHasBeenSet)
  {
   payload.WithString("modelEndpoint", m_modelEndpoint);

  }

  if(m_modelSourceHasBeenSet)
  {
   payload.WithString("modelSource", ModelSourceMapper::GetNameForModelSource(m_modelSource));
  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
