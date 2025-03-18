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
   * <p>The Amazon S3 location for the pointwise model diagnostics for an Amazon
   * Lookout for Equipment model. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ModelDiagnosticsS3OutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ModelDiagnosticsS3OutputConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ModelDiagnosticsS3OutputConfiguration() = default;
    AWS_LOOKOUTEQUIPMENT_API ModelDiagnosticsS3OutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API ModelDiagnosticsS3OutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where the pointwise model diagnostics are
     * located. You must be the owner of the Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    ModelDiagnosticsS3OutputConfiguration& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 prefix for the location of the pointwise model diagnostics. The
     * prefix specifies the folder and evaluation result file name.
     * (<code>bucket</code>).</p> <p>When you call <code>CreateModel</code> or
     * <code>UpdateModel</code>, specify the path within the bucket that you want
     * Lookout for Equipment to save the model to. During training, Lookout for
     * Equipment creates the model evaluation model as a compressed JSON file with the
     * name <code>model_diagnostics_results.json.gz</code>.</p> <p>When you call
     * <code>DescribeModel</code> or <code>DescribeModelVersion</code>,
     * <code>prefix</code> contains the file path and filename of the model evaluation
     * file. </p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ModelDiagnosticsS3OutputConfiguration& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
