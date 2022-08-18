/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/GridViewConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

GridViewConfiguration::GridViewConfiguration() : 
    m_contentShareLayout(ContentShareLayoutOption::NOT_SET),
    m_contentShareLayoutHasBeenSet(false),
    m_presenterOnlyConfigurationHasBeenSet(false)
{
}

GridViewConfiguration::GridViewConfiguration(JsonView jsonValue) : 
    m_contentShareLayout(ContentShareLayoutOption::NOT_SET),
    m_contentShareLayoutHasBeenSet(false),
    m_presenterOnlyConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

GridViewConfiguration& GridViewConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentShareLayout"))
  {
    m_contentShareLayout = ContentShareLayoutOptionMapper::GetContentShareLayoutOptionForName(jsonValue.GetString("ContentShareLayout"));

    m_contentShareLayoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PresenterOnlyConfiguration"))
  {
    m_presenterOnlyConfiguration = jsonValue.GetObject("PresenterOnlyConfiguration");

    m_presenterOnlyConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue GridViewConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_contentShareLayoutHasBeenSet)
  {
   payload.WithString("ContentShareLayout", ContentShareLayoutOptionMapper::GetNameForContentShareLayoutOption(m_contentShareLayout));
  }

  if(m_presenterOnlyConfigurationHasBeenSet)
  {
   payload.WithObject("PresenterOnlyConfiguration", m_presenterOnlyConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
