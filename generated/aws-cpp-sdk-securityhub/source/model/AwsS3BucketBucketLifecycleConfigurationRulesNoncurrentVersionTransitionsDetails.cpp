/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails::AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails() : 
    m_days(0),
    m_daysHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
}

AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails::AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails(JsonView jsonValue) : 
    m_days(0),
    m_daysHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails& AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Days"))
  {
    m_days = jsonValue.GetInteger("Days");

    m_daysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageClass"))
  {
    m_storageClass = jsonValue.GetString("StorageClass");

    m_storageClassHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_daysHasBeenSet)
  {
   payload.WithInteger("Days", m_days);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("StorageClass", m_storageClass);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
