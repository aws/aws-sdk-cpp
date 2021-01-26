/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/GitSubmodulesConfig.h>
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

GitSubmodulesConfig::GitSubmodulesConfig() : 
    m_fetchSubmodules(false),
    m_fetchSubmodulesHasBeenSet(false)
{
}

GitSubmodulesConfig::GitSubmodulesConfig(JsonView jsonValue) : 
    m_fetchSubmodules(false),
    m_fetchSubmodulesHasBeenSet(false)
{
  *this = jsonValue;
}

GitSubmodulesConfig& GitSubmodulesConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fetchSubmodules"))
  {
    m_fetchSubmodules = jsonValue.GetBool("fetchSubmodules");

    m_fetchSubmodulesHasBeenSet = true;
  }

  return *this;
}

JsonValue GitSubmodulesConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fetchSubmodulesHasBeenSet)
  {
   payload.WithBool("fetchSubmodules", m_fetchSubmodules);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
