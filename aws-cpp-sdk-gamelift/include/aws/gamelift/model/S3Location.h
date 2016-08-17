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
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Location in Amazon Simple Storage Service (Amazon S3) where a build's files
   * are stored. This location is assigned in response to a <a>CreateBuild</a> call,
   * and is always in the same region as the service used to create the build. For
   * more details see the <a href="http://aws.amazon.com/documentation/s3/">Amazon S3
   * documentation</a>.</p>
   */
  class AWS_GAMELIFT_API S3Location
  {
  public:
    S3Location();
    S3Location(const Aws::Utils::Json::JsonValue& jsonValue);
    S3Location& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Amazon S3 bucket identifier.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Amazon S3 bucket identifier.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Amazon S3 bucket identifier.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Amazon S3 bucket identifier.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Amazon S3 bucket identifier.</p>
     */
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket identifier.</p>
     */
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket identifier.</p>
     */
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Amazon S3 bucket key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Amazon S3 bucket key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Amazon S3 bucket key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Amazon S3 bucket key.</p>
     */
    inline S3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Amazon S3 bucket key.</p>
     */
    inline S3Location& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <p>Amazon S3 bucket key.</p>
     */
    inline S3Location& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <p>Amazon resource number for the cross-account access role that allows GameLift
     * access to the S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>Amazon resource number for the cross-account access role that allows GameLift
     * access to the S3 bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Amazon resource number for the cross-account access role that allows GameLift
     * access to the S3 bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Amazon resource number for the cross-account access role that allows GameLift
     * access to the S3 bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>Amazon resource number for the cross-account access role that allows GameLift
     * access to the S3 bucket.</p>
     */
    inline S3Location& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Amazon resource number for the cross-account access role that allows GameLift
     * access to the S3 bucket.</p>
     */
    inline S3Location& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Amazon resource number for the cross-account access role that allows GameLift
     * access to the S3 bucket.</p>
     */
    inline S3Location& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
