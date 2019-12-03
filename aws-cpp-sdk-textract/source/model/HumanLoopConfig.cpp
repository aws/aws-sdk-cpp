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

#include <aws/textract/model/HumanLoopConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

HumanLoopConfig::HumanLoopConfig() : 
    m_humanLoopNameHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false),
    m_dataAttributesHasBeenSet(false)
{
}

HumanLoopConfig::HumanLoopConfig(JsonView jsonValue) : 
    m_humanLoopNameHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false),
    m_dataAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopConfig& HumanLoopConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLoopName"))
  {
    m_humanLoopName = jsonValue.GetString("HumanLoopName");

    m_humanLoopNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowDefinitionArn"))
  {
    m_flowDefinitionArn = jsonValue.GetString("FlowDefinitionArn");

    m_flowDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAttributes"))
  {
    m_dataAttributes = jsonValue.GetObject("DataAttributes");

    m_dataAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopConfig::Jsonize() const
{
  JsonValue payload;

  if(m_humanLoopNameHasBeenSet)
  {
   payload.WithString("HumanLoopName", m_humanLoopName);

  }

  if(m_flowDefinitionArnHasBeenSet)
  {
   payload.WithString("FlowDefinitionArn", m_flowDefinitionArn);

  }

  if(m_dataAttributesHasBeenSet)
  {
   payload.WithObject("DataAttributes", m_dataAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
