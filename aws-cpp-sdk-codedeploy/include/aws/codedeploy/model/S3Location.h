/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/BundleType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API S3Location
  {
  public:
    S3Location();
    S3Location(const Aws::Utils::Json::JsonValue& jsonValue);
    S3Location& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    
    inline S3Location&  WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}

    
    inline const Aws::String& GetKey() const{ return m_key; }
    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline S3Location&  WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline S3Location& WithKey(const char* value) { SetKey(value); return *this;}

    
    inline const BundleType& GetBundleType() const{ return m_bundleType; }
    
    inline void SetBundleType(const BundleType& value) { m_bundleTypeHasBeenSet = true; m_bundleType = value; }

    
    inline S3Location&  WithBundleType(const BundleType& value) { SetBundleType(value); return *this;}

    
    inline const Aws::String& GetVersion() const{ return m_version; }
    
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    
    inline S3Location&  WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    
    inline S3Location& WithVersion(const char* value) { SetVersion(value); return *this;}

    
    inline const Aws::String& GetETag() const{ return m_eTag; }
    
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    
    inline S3Location&  WithETag(const Aws::String& value) { SetETag(value); return *this;}

    
    inline S3Location& WithETag(const char* value) { SetETag(value); return *this;}

  private:
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_key;
    bool m_keyHasBeenSet;
    BundleType m_bundleType;
    bool m_bundleTypeHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::String m_eTag;
    bool m_eTagHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
