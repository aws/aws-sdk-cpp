/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
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
namespace ApplicationCostProfiler
{
namespace Model
{

  /**
   * <p>Represents the Amazon Simple Storage Service (Amazon S3) location where AWS
   * Application Cost Profiler reports are generated and then written
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API S3Location();
    AWS_APPLICATIONCOSTPROFILER_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Prefix for the location to write to.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>Prefix for the location to write to.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>Prefix for the location to write to.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>Prefix for the location to write to.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>Prefix for the location to write to.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>Prefix for the location to write to.</p>
     */
    inline S3Location& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>Prefix for the location to write to.</p>
     */
    inline S3Location& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>Prefix for the location to write to.</p>
     */
    inline S3Location& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
