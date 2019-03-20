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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The Amazon S3 artifact location for an action's artifacts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/S3Location">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API S3Location
  {
  public:
    S3Location();
    S3Location(Aws::Utils::Json::JsonView jsonValue);
    S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 artifact bucket for an action's artifacts.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 artifact bucket for an action's artifacts.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 artifact bucket for an action's artifacts.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 artifact bucket for an action's artifacts.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 artifact bucket for an action's artifacts.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 artifact bucket for an action's artifacts.</p>
     */
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 artifact bucket for an action's artifacts.</p>
     */
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 artifact bucket for an action's artifacts.</p>
     */
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The artifact name.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The artifact name.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The artifact name.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The artifact name.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The artifact name.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The artifact name.</p>
     */
    inline S3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The artifact name.</p>
     */
    inline S3Location& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The artifact name.</p>
     */
    inline S3Location& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
