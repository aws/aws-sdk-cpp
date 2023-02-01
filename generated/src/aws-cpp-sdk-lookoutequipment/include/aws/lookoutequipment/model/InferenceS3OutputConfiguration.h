/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Specifies configuration information for the output results from the
   * inference, including output S3 location. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InferenceS3OutputConfiguration">AWS
   * API Reference</a></p>
   */
  class InferenceS3OutputConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InferenceS3OutputConfiguration();
    AWS_LOOKOUTEQUIPMENT_API InferenceS3OutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceS3OutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The bucket containing the output results from the inference </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p> The bucket containing the output results from the inference </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p> The bucket containing the output results from the inference </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p> The bucket containing the output results from the inference </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p> The bucket containing the output results from the inference </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p> The bucket containing the output results from the inference </p>
     */
    inline InferenceS3OutputConfiguration& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p> The bucket containing the output results from the inference </p>
     */
    inline InferenceS3OutputConfiguration& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p> The bucket containing the output results from the inference </p>
     */
    inline InferenceS3OutputConfiguration& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p> The prefix for the S3 bucket used for the output results from the inference.
     * </p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p> The prefix for the S3 bucket used for the output results from the inference.
     * </p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p> The prefix for the S3 bucket used for the output results from the inference.
     * </p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p> The prefix for the S3 bucket used for the output results from the inference.
     * </p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p> The prefix for the S3 bucket used for the output results from the inference.
     * </p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p> The prefix for the S3 bucket used for the output results from the inference.
     * </p>
     */
    inline InferenceS3OutputConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p> The prefix for the S3 bucket used for the output results from the inference.
     * </p>
     */
    inline InferenceS3OutputConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p> The prefix for the S3 bucket used for the output results from the inference.
     * </p>
     */
    inline InferenceS3OutputConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
