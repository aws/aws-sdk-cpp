/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/ImageTagDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

ImageTagDetail::ImageTagDetail() : 
    m_imageTagHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_imageDetailHasBeenSet(false)
{
}

ImageTagDetail::ImageTagDetail(JsonView jsonValue) : 
    m_imageTagHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_imageDetailHasBeenSet(false)
{
  *this = jsonValue;
}

ImageTagDetail& ImageTagDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageTag"))
  {
    m_imageTag = jsonValue.GetString("imageTag");

    m_imageTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageDetail"))
  {
    m_imageDetail = jsonValue.GetObject("imageDetail");

    m_imageDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageTagDetail::Jsonize() const
{
  JsonValue payload;

  if(m_imageTagHasBeenSet)
  {
   payload.WithString("imageTag", m_imageTag);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_imageDetailHasBeenSet)
  {
   payload.WithObject("imageDetail", m_imageDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
