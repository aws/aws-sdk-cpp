/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/S3BucketRepository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

S3BucketRepository::S3BucketRepository() : 
    m_nameHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

S3BucketRepository::S3BucketRepository(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketRepository& S3BucketRepository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetObject("Details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketRepository::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("Details", m_details.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
