/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A configuration for a shuffle option for input data in a channel. If you use
   * <code>S3Prefix</code> for <code>S3DataType</code>, the results of the S3 key
   * prefix matches are shuffled. If you use <code>ManifestFile</code>, the order of
   * the S3 object references in the <code>ManifestFile</code> is shuffled. If you
   * use <code>AugmentedManifestFile</code>, the order of the JSON lines in the
   * <code>AugmentedManifestFile</code> is shuffled. The shuffling order is
   * determined using the <code>Seed</code> value.</p> <p>For Pipe input mode, when
   * <code>ShuffleConfig</code> is specified shuffling is done at the start of every
   * epoch. With large datasets, this ensures that the order of the training data is
   * different for each epoch, and it helps reduce bias and possible overfitting. In
   * a multi-node training job when <code>ShuffleConfig</code> is combined with
   * <code>S3DataDistributionType</code> of <code>ShardedByS3Key</code>, the data is
   * shuffled across nodes so that the content sent to a particular node on the first
   * epoch might be sent to a different node on the second epoch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ShuffleConfig">AWS
   * API Reference</a></p>
   */
  class ShuffleConfig
  {
  public:
    AWS_SAGEMAKER_API ShuffleConfig();
    AWS_SAGEMAKER_API ShuffleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ShuffleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the shuffling order in <code>ShuffleConfig</code> value.</p>
     */
    inline long long GetSeed() const{ return m_seed; }

    /**
     * <p>Determines the shuffling order in <code>ShuffleConfig</code> value.</p>
     */
    inline bool SeedHasBeenSet() const { return m_seedHasBeenSet; }

    /**
     * <p>Determines the shuffling order in <code>ShuffleConfig</code> value.</p>
     */
    inline void SetSeed(long long value) { m_seedHasBeenSet = true; m_seed = value; }

    /**
     * <p>Determines the shuffling order in <code>ShuffleConfig</code> value.</p>
     */
    inline ShuffleConfig& WithSeed(long long value) { SetSeed(value); return *this;}

  private:

    long long m_seed;
    bool m_seedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
