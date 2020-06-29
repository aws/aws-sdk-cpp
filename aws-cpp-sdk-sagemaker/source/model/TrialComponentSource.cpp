/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialComponentSource.h>
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

TrialComponentSource::TrialComponentSource() : 
    m_sourceArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

TrialComponentSource::TrialComponentSource(JsonView jsonValue) : 
    m_sourceArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TrialComponentSource& TrialComponentSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialComponentSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
