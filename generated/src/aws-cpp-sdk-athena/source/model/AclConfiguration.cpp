/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/AclConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

AclConfiguration::AclConfiguration() : 
    m_s3AclOption(S3AclOption::NOT_SET),
    m_s3AclOptionHasBeenSet(false)
{
}

AclConfiguration::AclConfiguration(JsonView jsonValue) : 
    m_s3AclOption(S3AclOption::NOT_SET),
    m_s3AclOptionHasBeenSet(false)
{
  *this = jsonValue;
}

AclConfiguration& AclConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3AclOption"))
  {
    m_s3AclOption = S3AclOptionMapper::GetS3AclOptionForName(jsonValue.GetString("S3AclOption"));

    m_s3AclOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AclConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3AclOptionHasBeenSet)
  {
   payload.WithString("S3AclOption", S3AclOptionMapper::GetNameForS3AclOption(m_s3AclOption));
  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
