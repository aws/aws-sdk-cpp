/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails::AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails() : 
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_softLimit(0),
    m_softLimitHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails::AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails(JsonView jsonValue) : 
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_softLimit(0),
    m_softLimitHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails& AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HardLimit"))
  {
    m_hardLimit = jsonValue.GetInteger("HardLimit");

    m_hardLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SoftLimit"))
  {
    m_softLimit = jsonValue.GetInteger("SoftLimit");

    m_softLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_hardLimitHasBeenSet)
  {
   payload.WithInteger("HardLimit", m_hardLimit);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_softLimitHasBeenSet)
  {
   payload.WithInteger("SoftLimit", m_softLimit);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
