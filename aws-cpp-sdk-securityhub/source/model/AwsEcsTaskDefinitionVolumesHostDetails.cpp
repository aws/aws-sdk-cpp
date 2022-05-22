/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesHostDetails.h>
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

AwsEcsTaskDefinitionVolumesHostDetails::AwsEcsTaskDefinitionVolumesHostDetails() : 
    m_sourcePathHasBeenSet(false)
{
}

AwsEcsTaskDefinitionVolumesHostDetails::AwsEcsTaskDefinitionVolumesHostDetails(JsonView jsonValue) : 
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionVolumesHostDetails& AwsEcsTaskDefinitionVolumesHostDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourcePath"))
  {
    m_sourcePath = jsonValue.GetString("SourcePath");

    m_sourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionVolumesHostDetails::Jsonize() const
{
  JsonValue payload;

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("SourcePath", m_sourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
