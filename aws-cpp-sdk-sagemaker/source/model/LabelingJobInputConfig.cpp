/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobInputConfig.h>
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

LabelingJobInputConfig::LabelingJobInputConfig() : 
    m_dataSourceHasBeenSet(false),
    m_dataAttributesHasBeenSet(false)
{
}

LabelingJobInputConfig::LabelingJobInputConfig(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_dataAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobInputConfig& LabelingJobInputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAttributes"))
  {
    m_dataAttributes = jsonValue.GetObject("DataAttributes");

    m_dataAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobInputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_dataAttributesHasBeenSet)
  {
   payload.WithObject("DataAttributes", m_dataAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
