/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetImportInputLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TestSetImportInputLocation::TestSetImportInputLocation() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3PathHasBeenSet(false)
{
}

TestSetImportInputLocation::TestSetImportInputLocation(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3PathHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetImportInputLocation& TestSetImportInputLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Path"))
  {
    m_s3Path = jsonValue.GetString("s3Path");

    m_s3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetImportInputLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_s3PathHasBeenSet)
  {
   payload.WithString("s3Path", m_s3Path);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
