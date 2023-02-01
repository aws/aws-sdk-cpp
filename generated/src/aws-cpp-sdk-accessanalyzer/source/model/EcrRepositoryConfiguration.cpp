/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/EcrRepositoryConfiguration.h>
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

EcrRepositoryConfiguration::EcrRepositoryConfiguration() : 
    m_repositoryPolicyHasBeenSet(false)
{
}

EcrRepositoryConfiguration::EcrRepositoryConfiguration(JsonView jsonValue) : 
    m_repositoryPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

EcrRepositoryConfiguration& EcrRepositoryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryPolicy"))
  {
    m_repositoryPolicy = jsonValue.GetString("repositoryPolicy");

    m_repositoryPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue EcrRepositoryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryPolicyHasBeenSet)
  {
   payload.WithString("repositoryPolicy", m_repositoryPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
