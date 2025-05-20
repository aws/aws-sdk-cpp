/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AwsEcsMetadataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

AwsEcsMetadataDetails::AwsEcsMetadataDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsEcsMetadataDetails& AwsEcsMetadataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detailsGroup"))
  {
    m_detailsGroup = jsonValue.GetString("detailsGroup");
    m_detailsGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("taskDefinitionArn");
    m_taskDefinitionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsEcsMetadataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_detailsGroupHasBeenSet)
  {
   payload.WithString("detailsGroup", m_detailsGroup);

  }

  if(m_taskDefinitionArnHasBeenSet)
  {
   payload.WithString("taskDefinitionArn", m_taskDefinitionArn);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
