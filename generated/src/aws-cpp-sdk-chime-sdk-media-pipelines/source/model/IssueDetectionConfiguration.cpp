/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/IssueDetectionConfiguration.h>
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

IssueDetectionConfiguration::IssueDetectionConfiguration() : 
    m_ruleNameHasBeenSet(false)
{
}

IssueDetectionConfiguration::IssueDetectionConfiguration(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false)
{
  *this = jsonValue;
}

IssueDetectionConfiguration& IssueDetectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  return *this;
}

JsonValue IssueDetectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
