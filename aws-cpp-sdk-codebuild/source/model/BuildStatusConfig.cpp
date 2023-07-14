/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildStatusConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

BuildStatusConfig::BuildStatusConfig() : 
    m_contextHasBeenSet(false),
    m_targetUrlHasBeenSet(false)
{
}

BuildStatusConfig::BuildStatusConfig(JsonView jsonValue) : 
    m_contextHasBeenSet(false),
    m_targetUrlHasBeenSet(false)
{
  *this = jsonValue;
}

BuildStatusConfig& BuildStatusConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("context"))
  {
    m_context = jsonValue.GetString("context");

    m_contextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetUrl"))
  {
    m_targetUrl = jsonValue.GetString("targetUrl");

    m_targetUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue BuildStatusConfig::Jsonize() const
{
  JsonValue payload;

  if(m_contextHasBeenSet)
  {
   payload.WithString("context", m_context);

  }

  if(m_targetUrlHasBeenSet)
  {
   payload.WithString("targetUrl", m_targetUrl);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
