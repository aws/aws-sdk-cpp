/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/S3RecordingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

S3RecordingDetails::S3RecordingDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

S3RecordingDetails& S3RecordingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketArn"))
  {
    m_bucketArn = jsonValue.GetString("bucketArn");
    m_bucketArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyTemplate"))
  {
    m_keyTemplate = jsonValue.GetString("keyTemplate");
    m_keyTemplateHasBeenSet = true;
  }
  return *this;
}

JsonValue S3RecordingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_bucketArnHasBeenSet)
  {
   payload.WithString("bucketArn", m_bucketArn);

  }

  if(m_keyTemplateHasBeenSet)
  {
   payload.WithString("keyTemplate", m_keyTemplate);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
