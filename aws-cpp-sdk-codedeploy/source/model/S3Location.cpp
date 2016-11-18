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
#include <aws/codedeploy/model/S3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

S3Location::S3Location() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_bundleType(BundleType::NOT_SET),
    m_bundleTypeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_eTagHasBeenSet(false)
{
}

S3Location::S3Location(const JsonValue& jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_bundleType(BundleType::NOT_SET),
    m_bundleTypeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_eTagHasBeenSet(false)
{
  *this = jsonValue;
}

S3Location& S3Location::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bundleType"))
  {
    m_bundleType = BundleTypeMapper::GetBundleTypeForName(jsonValue.GetString("bundleType"));

    m_bundleTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eTag"))
  {
    m_eTag = jsonValue.GetString("eTag");

    m_eTagHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_bundleTypeHasBeenSet)
  {
   payload.WithString("bundleType", BundleTypeMapper::GetNameForBundleType(m_bundleType));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("eTag", m_eTag);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws