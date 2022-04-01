/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyGenerationDetails.h>
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

PolicyGenerationDetails::PolicyGenerationDetails() : 
    m_principalArnHasBeenSet(false)
{
}

PolicyGenerationDetails::PolicyGenerationDetails(JsonView jsonValue) : 
    m_principalArnHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyGenerationDetails& PolicyGenerationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("principalArn"))
  {
    m_principalArn = jsonValue.GetString("principalArn");

    m_principalArnHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyGenerationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
