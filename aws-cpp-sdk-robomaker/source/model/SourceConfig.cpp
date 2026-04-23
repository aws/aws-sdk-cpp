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

#include <aws/robomaker/model/SourceConfig.h>
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

SourceConfig::SourceConfig() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false)
{
}

SourceConfig::SourceConfig(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConfig& SourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Key"))
  {
    m_s3Key = jsonValue.GetString("s3Key");

    m_s3KeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));

    m_architectureHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("s3Key", m_s3Key);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
