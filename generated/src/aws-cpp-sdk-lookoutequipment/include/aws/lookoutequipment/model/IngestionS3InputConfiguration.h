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
   * <p> Specifies S3 configuration information for the input data for the data
   * ingestion job. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/IngestionS3InputConfiguration">AWS
   * API Reference</a></p>
   */
  class IngestionS3InputConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API IngestionS3InputConfiguration() = default;
    AWS_LOOKOUTEQUIPMENT_API IngestionS3InputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API IngestionS3InputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket used for the input data for the data ingestion.
     * </p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    IngestionS3InputConfiguration& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the S3 location being used for the input data for the data
     * ingestion. </p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    IngestionS3InputConfiguration& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pattern for matching the Amazon S3 files that will be used for
     * ingestion. If the schema was created previously without any KeyPattern, then the
     * default KeyPattern {prefix}/{component_name}/ * is used to download files from
     * Amazon S3 according to the schema. This field is required when ingestion is
     * being done for the first time.</p> <p>Valid Values: {prefix}/{component_name}_*
     * | {prefix}/{component_name}/ * | {prefix}/{component_name}[DELIMITER]* (Allowed
     * delimiters : space, dot, underscore, hyphen)</p>
     */
    inline const Aws::String& GetKeyPattern() const { return m_keyPattern; }
    inline bool KeyPatternHasBeenSet() const { return m_keyPatternHasBeenSet; }
    template<typename KeyPatternT = Aws::String>
    void SetKeyPattern(KeyPatternT&& value) { m_keyPatternHasBeenSet = true; m_keyPattern = std::forward<KeyPatternT>(value); }
    template<typename KeyPatternT = Aws::String>
    IngestionS3InputConfiguration& WithKeyPattern(KeyPatternT&& value) { SetKeyPattern(std::forward<KeyPatternT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_keyPattern;
    bool m_keyPatternHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
