/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SecurityHubConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SecurityHubConfiguration::SecurityHubConfiguration() : 
    m_publishClassificationFindings(false),
    m_publishClassificationFindingsHasBeenSet(false),
    m_publishPolicyFindings(false),
    m_publishPolicyFindingsHasBeenSet(false)
{
}

SecurityHubConfiguration::SecurityHubConfiguration(JsonView jsonValue) : 
    m_publishClassificationFindings(false),
    m_publishClassificationFindingsHasBeenSet(false),
    m_publishPolicyFindings(false),
    m_publishPolicyFindingsHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityHubConfiguration& SecurityHubConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("publishClassificationFindings"))
  {
    m_publishClassificationFindings = jsonValue.GetBool("publishClassificationFindings");

    m_publishClassificationFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publishPolicyFindings"))
  {
    m_publishPolicyFindings = jsonValue.GetBool("publishPolicyFindings");

    m_publishPolicyFindingsHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityHubConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_publishClassificationFindingsHasBeenSet)
  {
   payload.WithBool("publishClassificationFindings", m_publishClassificationFindings);

  }

  if(m_publishPolicyFindingsHasBeenSet)
  {
   payload.WithBool("publishPolicyFindings", m_publishPolicyFindings);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
