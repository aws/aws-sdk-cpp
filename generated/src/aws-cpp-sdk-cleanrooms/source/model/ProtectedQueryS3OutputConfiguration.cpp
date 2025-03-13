/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryS3OutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQueryS3OutputConfiguration::ProtectedQueryS3OutputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedQueryS3OutputConfiguration& ProtectedQueryS3OutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resultFormat"))
  {
    m_resultFormat = ResultFormatMapper::GetResultFormatForName(jsonValue.GetString("resultFormat"));
    m_resultFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyPrefix"))
  {
    m_keyPrefix = jsonValue.GetString("keyPrefix");
    m_keyPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("singleFileOutput"))
  {
    m_singleFileOutput = jsonValue.GetBool("singleFileOutput");
    m_singleFileOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedQueryS3OutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_resultFormatHasBeenSet)
  {
   payload.WithString("resultFormat", ResultFormatMapper::GetNameForResultFormat(m_resultFormat));
  }

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyPrefixHasBeenSet)
  {
   payload.WithString("keyPrefix", m_keyPrefix);

  }

  if(m_singleFileOutputHasBeenSet)
  {
   payload.WithBool("singleFileOutput", m_singleFileOutput);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
