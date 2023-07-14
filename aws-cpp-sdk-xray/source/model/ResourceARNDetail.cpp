/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ResourceARNDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

ResourceARNDetail::ResourceARNDetail() : 
    m_aRNHasBeenSet(false)
{
}

ResourceARNDetail::ResourceARNDetail(JsonView jsonValue) : 
    m_aRNHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceARNDetail& ResourceARNDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceARNDetail::Jsonize() const
{
  JsonValue payload;

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
