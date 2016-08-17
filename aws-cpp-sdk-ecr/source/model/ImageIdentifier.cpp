/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ImageIdentifier::ImageIdentifier() : 
    m_imageDigestHasBeenSet(false),
    m_imageTagHasBeenSet(false)
{
}

ImageIdentifier::ImageIdentifier(const JsonValue& jsonValue) : 
    m_imageDigestHasBeenSet(false),
    m_imageTagHasBeenSet(false)
{
  *this = jsonValue;
}

ImageIdentifier& ImageIdentifier::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("imageDigest"))
  {
    m_imageDigest = jsonValue.GetString("imageDigest");

    m_imageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageTag"))
  {
    m_imageTag = jsonValue.GetString("imageTag");

    m_imageTagHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  if(m_imageTagHasBeenSet)
  {
   payload.WithString("imageTag", m_imageTag);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws