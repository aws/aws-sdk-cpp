/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails::AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails() : 
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_sourceContainerHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails::AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails(JsonView jsonValue) : 
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_sourceContainerHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails& AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReadOnly"))
  {
    m_readOnly = jsonValue.GetBool("ReadOnly");

    m_readOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceContainer"))
  {
    m_sourceContainer = jsonValue.GetString("SourceContainer");

    m_sourceContainerHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails::Jsonize() const
{
  JsonValue payload;

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("ReadOnly", m_readOnly);

  }

  if(m_sourceContainerHasBeenSet)
  {
   payload.WithString("SourceContainer", m_sourceContainer);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
