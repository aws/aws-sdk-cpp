/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint/model/ExportJobResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ExportJobResource::ExportJobResource() : 
    m_roleArnHasBeenSet(false),
    m_s3UrlPrefixHasBeenSet(false),
    m_segmentIdHasBeenSet(false)
{
}

ExportJobResource::ExportJobResource(const JsonValue& jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_s3UrlPrefixHasBeenSet(false),
    m_segmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExportJobResource& ExportJobResource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3UrlPrefix"))
  {
    m_s3UrlPrefix = jsonValue.GetString("S3UrlPrefix");

    m_s3UrlPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentId"))
  {
    m_segmentId = jsonValue.GetString("SegmentId");

    m_segmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportJobResource::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_s3UrlPrefixHasBeenSet)
  {
   payload.WithString("S3UrlPrefix", m_s3UrlPrefix);

  }

  if(m_segmentIdHasBeenSet)
  {
   payload.WithString("SegmentId", m_segmentId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
