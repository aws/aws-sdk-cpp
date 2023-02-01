/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the configuration for experiment logging to Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentS3LogConfiguration">AWS
   * API Reference</a></p>
   */
  class ExperimentS3LogConfiguration
  {
  public:
    AWS_FIS_API ExperimentS3LogConfiguration();
    AWS_FIS_API ExperimentS3LogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentS3LogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the destination bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the destination bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the destination bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the destination bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the destination bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the destination bucket.</p>
     */
    inline ExperimentS3LogConfiguration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the destination bucket.</p>
     */
    inline ExperimentS3LogConfiguration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination bucket.</p>
     */
    inline ExperimentS3LogConfiguration& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The bucket prefix.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The bucket prefix.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The bucket prefix.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The bucket prefix.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The bucket prefix.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The bucket prefix.</p>
     */
    inline ExperimentS3LogConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The bucket prefix.</p>
     */
    inline ExperimentS3LogConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The bucket prefix.</p>
     */
    inline ExperimentS3LogConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
