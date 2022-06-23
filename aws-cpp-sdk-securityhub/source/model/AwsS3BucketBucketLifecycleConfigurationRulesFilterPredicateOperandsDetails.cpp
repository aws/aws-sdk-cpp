/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails.h>
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

AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails::AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails() : 
    m_prefixHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails::AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails(JsonView jsonValue) : 
    m_prefixHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tag"))
  {
    m_tag = jsonValue.GetObject("Tag");

    m_tagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_tagHasBeenSet)
  {
   payload.WithObject("Tag", m_tag.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
