/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceAssociationOutputUrl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceAssociationOutputUrl::InstanceAssociationOutputUrl() : 
    m_s3OutputUrlHasBeenSet(false)
{
}

InstanceAssociationOutputUrl::InstanceAssociationOutputUrl(JsonView jsonValue) : 
    m_s3OutputUrlHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAssociationOutputUrl& InstanceAssociationOutputUrl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputUrl"))
  {
    m_s3OutputUrl = jsonValue.GetObject("S3OutputUrl");

    m_s3OutputUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAssociationOutputUrl::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputUrlHasBeenSet)
  {
   payload.WithObject("S3OutputUrl", m_s3OutputUrl.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
