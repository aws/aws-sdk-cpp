/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  class AWS_CUSTOMERPROFILES_API S3SourceProperties
  {
  public:
    S3SourceProperties();
    S3SourceProperties(Aws::Utils::Json::JsonView jsonValue);
    S3SourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    
    inline S3SourceProperties& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    
    inline S3SourceProperties& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    
    inline S3SourceProperties& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    
    inline S3SourceProperties& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    
    inline S3SourceProperties& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    
    inline S3SourceProperties& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
