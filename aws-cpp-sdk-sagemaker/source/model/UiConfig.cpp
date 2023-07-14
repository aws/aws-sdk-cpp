/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
