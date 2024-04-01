/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobAttachmentSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

JobAttachmentSettings::JobAttachmentSettings() : 
    m_rootPrefixHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
}

JobAttachmentSettings::JobAttachmentSettings(JsonView jsonValue) : 
    m_rootPrefixHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
  *this = jsonValue;
}

JobAttachmentSettings& JobAttachmentSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rootPrefix"))
  {
    m_rootPrefix = jsonValue.GetString("rootPrefix");

    m_rootPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  return *this;
}

JsonValue JobAttachmentSettings::Jsonize() const
{
  JsonValue payload;

  if(m_rootPrefixHasBeenSet)
  {
   payload.WithString("rootPrefix", m_rootPrefix);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
