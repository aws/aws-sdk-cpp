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

#include <aws/robomaker/model/S3KeyOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

S3KeyOutput::S3KeyOutput() : 
    m_s3KeyHasBeenSet(false),
    m_etagHasBeenSet(false)
{
}

S3KeyOutput::S3KeyOutput(JsonView jsonValue) : 
    m_s3KeyHasBeenSet(false),
    m_etagHasBeenSet(false)
{
  *this = jsonValue;
}

S3KeyOutput& S3KeyOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Key"))
  {
    m_s3Key = jsonValue.GetString("s3Key");

    m_s3KeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("etag"))
  {
    m_etag = jsonValue.GetString("etag");

    m_etagHasBeenSet = true;
  }

  return *this;
}

JsonValue S3KeyOutput::Jsonize() const
{
  JsonValue payload;

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("s3Key", m_s3Key);

  }

  if(m_etagHasBeenSet)
  {
   payload.WithString("etag", m_etag);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
