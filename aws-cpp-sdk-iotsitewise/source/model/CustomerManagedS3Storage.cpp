/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CustomerManagedS3Storage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

CustomerManagedS3Storage::CustomerManagedS3Storage() : 
    m_s3ResourceArnHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

CustomerManagedS3Storage::CustomerManagedS3Storage(JsonView jsonValue) : 
    m_s3ResourceArnHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerManagedS3Storage& CustomerManagedS3Storage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3ResourceArn"))
  {
    m_s3ResourceArn = jsonValue.GetString("s3ResourceArn");

    m_s3ResourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerManagedS3Storage::Jsonize() const
{
  JsonValue payload;

  if(m_s3ResourceArnHasBeenSet)
  {
   payload.WithString("s3ResourceArn", m_s3ResourceArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
