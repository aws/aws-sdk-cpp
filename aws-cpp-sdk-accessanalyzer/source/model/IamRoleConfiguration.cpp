/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/IamRoleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

IamRoleConfiguration::IamRoleConfiguration() : 
    m_trustPolicyHasBeenSet(false)
{
}

IamRoleConfiguration::IamRoleConfiguration(JsonView jsonValue) : 
    m_trustPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

IamRoleConfiguration& IamRoleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trustPolicy"))
  {
    m_trustPolicy = jsonValue.GetString("trustPolicy");

    m_trustPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue IamRoleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_trustPolicyHasBeenSet)
  {
   payload.WithString("trustPolicy", m_trustPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
