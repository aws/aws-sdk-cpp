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

#include <aws/sagemaker/model/UiConfig.h>
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

UiConfig::UiConfig() : 
    m_uiTemplateS3UriHasBeenSet(false),
    m_humanTaskUiArnHasBeenSet(false)
{
}

UiConfig::UiConfig(JsonView jsonValue) : 
    m_uiTemplateS3UriHasBeenSet(false),
    m_humanTaskUiArnHasBeenSet(false)
{
  *this = jsonValue;
}

UiConfig& UiConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UiTemplateS3Uri"))
  {
    m_uiTemplateS3Uri = jsonValue.GetString("UiTemplateS3Uri");

    m_uiTemplateS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HumanTaskUiArn"))
  {
    m_humanTaskUiArn = jsonValue.GetString("HumanTaskUiArn");

    m_humanTaskUiArnHasBeenSet = true;
  }

  return *this;
}

JsonValue UiConfig::Jsonize() const
{
  JsonValue payload;

  if(m_uiTemplateS3UriHasBeenSet)
  {
   payload.WithString("UiTemplateS3Uri", m_uiTemplateS3Uri);

  }

  if(m_humanTaskUiArnHasBeenSet)
  {
   payload.WithString("HumanTaskUiArn", m_humanTaskUiArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
