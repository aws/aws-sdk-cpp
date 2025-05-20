/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ClusterMetadata.h>
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

ClusterMetadata::ClusterMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterMetadata& ClusterMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsEcsMetadataDetails"))
  {
    m_awsEcsMetadataDetails = jsonValue.GetObject("awsEcsMetadataDetails");
    m_awsEcsMetadataDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsEksMetadataDetails"))
  {
    m_awsEksMetadataDetails = jsonValue.GetObject("awsEksMetadataDetails");
    m_awsEksMetadataDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_awsEcsMetadataDetailsHasBeenSet)
  {
   payload.WithObject("awsEcsMetadataDetails", m_awsEcsMetadataDetails.Jsonize());

  }

  if(m_awsEksMetadataDetailsHasBeenSet)
  {
   payload.WithObject("awsEksMetadataDetails", m_awsEksMetadataDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
