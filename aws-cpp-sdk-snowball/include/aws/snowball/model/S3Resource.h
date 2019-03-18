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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/KeyRange.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Each <code>S3Resource</code> object represents an Amazon S3 bucket that your
   * transferred data will be exported from or imported into. For export jobs, this
   * object can have an optional <code>KeyRange</code> value. The length of the range
   * is defined at job creation, and has either an inclusive
   * <code>BeginMarker</code>, an inclusive <code>EndMarker</code>, or both. Ranges
   * are UTF-8 binary sorted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/S3Resource">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API S3Resource
  {
  public:
    S3Resource();
    S3Resource(Aws::Utils::Json::JsonView jsonValue);
    S3Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline S3Resource& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline S3Resource& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket.</p>
     */
    inline S3Resource& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline const KeyRange& GetKeyRange() const{ return m_keyRange; }

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline bool KeyRangeHasBeenSet() const { return m_keyRangeHasBeenSet; }

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline void SetKeyRange(const KeyRange& value) { m_keyRangeHasBeenSet = true; m_keyRange = value; }

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline void SetKeyRange(KeyRange&& value) { m_keyRangeHasBeenSet = true; m_keyRange = std::move(value); }

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline S3Resource& WithKeyRange(const KeyRange& value) { SetKeyRange(value); return *this;}

    /**
     * <p>For export jobs, you can provide an optional <code>KeyRange</code> within a
     * specific Amazon S3 bucket. The length of the range is defined at job creation,
     * and has either an inclusive <code>BeginMarker</code>, an inclusive
     * <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline S3Resource& WithKeyRange(KeyRange&& value) { SetKeyRange(std::move(value)); return *this;}

  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet;

    KeyRange m_keyRange;
    bool m_keyRangeHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
