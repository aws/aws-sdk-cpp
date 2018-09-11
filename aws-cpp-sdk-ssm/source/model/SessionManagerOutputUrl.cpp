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

#include <aws/ssm/model/SessionManagerOutputUrl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

SessionManagerOutputUrl::SessionManagerOutputUrl() : 
    m_s3OutputUrlHasBeenSet(false),
    m_cloudWatchOutputUrlHasBeenSet(false)
{
}

SessionManagerOutputUrl::SessionManagerOutputUrl(JsonView jsonValue) : 
    m_s3OutputUrlHasBeenSet(false),
    m_cloudWatchOutputUrlHasBeenSet(false)
{
  *this = jsonValue;
}

SessionManagerOutputUrl& SessionManagerOutputUrl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputUrl"))
  {
    m_s3OutputUrl = jsonValue.GetString("S3OutputUrl");

    m_s3OutputUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchOutputUrl"))
  {
    m_cloudWatchOutputUrl = jsonValue.GetString("CloudWatchOutputUrl");

    m_cloudWatchOutputUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionManagerOutputUrl::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputUrlHasBeenSet)
  {
   payload.WithString("S3OutputUrl", m_s3OutputUrl);

  }

  if(m_cloudWatchOutputUrlHasBeenSet)
  {
   payload.WithString("CloudWatchOutputUrl", m_cloudWatchOutputUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
