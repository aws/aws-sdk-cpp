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

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  class AWS_KINESISANALYTICS_API S3Configuration
  {
  public:
    S3Configuration();
    S3Configuration(const Aws::Utils::Json::JsonValue& jsonValue);
    S3Configuration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    
    inline S3Configuration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    
    inline S3Configuration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    
    inline S3Configuration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }

    
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }

    
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }

    
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }

    
    inline S3Configuration& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}

    
    inline S3Configuration& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}

    
    inline S3Configuration& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}


    
    inline const Aws::String& GetFileKey() const{ return m_fileKey; }

    
    inline void SetFileKey(const Aws::String& value) { m_fileKeyHasBeenSet = true; m_fileKey = value; }

    
    inline void SetFileKey(Aws::String&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::move(value); }

    
    inline void SetFileKey(const char* value) { m_fileKeyHasBeenSet = true; m_fileKey.assign(value); }

    
    inline S3Configuration& WithFileKey(const Aws::String& value) { SetFileKey(value); return *this;}

    
    inline S3Configuration& WithFileKey(Aws::String&& value) { SetFileKey(std::move(value)); return *this;}

    
    inline S3Configuration& WithFileKey(const char* value) { SetFileKey(value); return *this;}

  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
