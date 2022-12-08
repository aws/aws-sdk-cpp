/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p> S3 report location for the scheduled query run.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/S3ReportLocation">AWS
   * API Reference</a></p>
   */
  class S3ReportLocation
  {
  public:
    AWS_TIMESTREAMQUERY_API S3ReportLocation();
    AWS_TIMESTREAMQUERY_API S3ReportLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API S3ReportLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> S3 bucket name. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p> S3 bucket name. </p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p> S3 bucket name. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p> S3 bucket name. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p> S3 bucket name. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p> S3 bucket name. </p>
     */
    inline S3ReportLocation& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p> S3 bucket name. </p>
     */
    inline S3ReportLocation& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p> S3 bucket name. </p>
     */
    inline S3ReportLocation& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>S3 key. </p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }

    /**
     * <p>S3 key. </p>
     */
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }

    /**
     * <p>S3 key. </p>
     */
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }

    /**
     * <p>S3 key. </p>
     */
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }

    /**
     * <p>S3 key. </p>
     */
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }

    /**
     * <p>S3 key. </p>
     */
    inline S3ReportLocation& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}

    /**
     * <p>S3 key. </p>
     */
    inline S3ReportLocation& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}

    /**
     * <p>S3 key. </p>
     */
    inline S3ReportLocation& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
