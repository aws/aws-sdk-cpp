/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionTypeSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionTypeSettings::ActionTypeSettings() : 
    m_thirdPartyConfigurationUrlHasBeenSet(false),
    m_entityUrlTemplateHasBeenSet(false),
    m_executionUrlTemplateHasBeenSet(false),
    m_revisionUrlTemplateHasBeenSet(false)
{
}

ActionTypeSettings::ActionTypeSettings(JsonView jsonValue) : 
    m_thirdPartyConfigurationUrlHasBeenSet(false),
    m_entityUrlTemplateHasBeenSet(false),
    m_executionUrlTemplateHasBeenSet(false),
    m_revisionUrlTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

ActionTypeSettings& ActionTypeSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thirdPartyConfigurationUrl"))
  {
    m_thirdPartyConfigurationUrl = jsonValue.GetString("thirdPartyConfigurationUrl");

    m_thirdPartyConfigurationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityUrlTemplate"))
  {
    m_entityUrlTemplate = jsonValue.GetString("entityUrlTemplate");

    m_entityUrlTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionUrlTemplate"))
  {
    m_executionUrlTemplate = jsonValue.GetString("executionUrlTemplate");

    m_executionUrlTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionUrlTemplate"))
  {
    m_revisionUrlTemplate = jsonValue.GetString("revisionUrlTemplate");

    m_revisionUrlTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionTypeSettings::Jsonize() const
{
  JsonValue payload;

  if(m_thirdPartyConfigurationUrlHasBeenSet)
  {
   payload.WithString("thirdPartyConfigurationUrl", m_thirdPartyConfigurationUrl);

  }

  if(m_entityUrlTemplateHasBeenSet)
  {
   payload.WithString("entityUrlTemplate", m_entityUrlTemplate);

  }

  if(m_executionUrlTemplateHasBeenSet)
  {
   payload.WithString("executionUrlTemplate", m_executionUrlTemplate);

  }

  if(m_revisionUrlTemplateHasBeenSet)
  {
   payload.WithString("revisionUrlTemplate", m_revisionUrlTemplate);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
