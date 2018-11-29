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
