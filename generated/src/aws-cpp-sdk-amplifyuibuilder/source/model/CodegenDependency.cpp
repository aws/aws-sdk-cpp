/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenDependency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

CodegenDependency::CodegenDependency() : 
    m_nameHasBeenSet(false),
    m_supportedVersionHasBeenSet(false),
    m_isSemVer(false),
    m_isSemVerHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CodegenDependency::CodegenDependency(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_supportedVersionHasBeenSet(false),
    m_isSemVer(false),
    m_isSemVerHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenDependency& CodegenDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedVersion"))
  {
    m_supportedVersion = jsonValue.GetString("supportedVersion");

    m_supportedVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isSemVer"))
  {
    m_isSemVer = jsonValue.GetBool("isSemVer");

    m_isSemVerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenDependency::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_supportedVersionHasBeenSet)
  {
   payload.WithString("supportedVersion", m_supportedVersion);

  }

  if(m_isSemVerHasBeenSet)
  {
   payload.WithBool("isSemVer", m_isSemVer);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
