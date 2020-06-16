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

#include <aws/lambda/model/FileSystemConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

FileSystemConfig::FileSystemConfig() : 
    m_arnHasBeenSet(false),
    m_localMountPathHasBeenSet(false)
{
}

FileSystemConfig::FileSystemConfig(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_localMountPathHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemConfig& FileSystemConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalMountPath"))
  {
    m_localMountPath = jsonValue.GetString("LocalMountPath");

    m_localMountPathHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemConfig::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_localMountPathHasBeenSet)
  {
   payload.WithString("LocalMountPath", m_localMountPath);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
