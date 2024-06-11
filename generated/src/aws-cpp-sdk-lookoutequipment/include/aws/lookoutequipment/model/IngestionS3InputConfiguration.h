﻿/**
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
    AWS_LOOKOUTEQUIPMENT_API IngestionS3InputConfiguration();
    AWS_LOOKOUTEQUIPMENT_API IngestionS3InputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API IngestionS3InputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket used for the input data for the data ingestion.
     * </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline IngestionS3InputConfiguration& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline IngestionS3InputConfiguration& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline IngestionS3InputConfiguration& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the S3 location being used for the input data for the data
     * ingestion. </p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline IngestionS3InputConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline IngestionS3InputConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline IngestionS3InputConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}
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
    inline const Aws::String& GetKeyPattern() const{ return m_keyPattern; }
    inline bool KeyPatternHasBeenSet() const { return m_keyPatternHasBeenSet; }
    inline void SetKeyPattern(const Aws::String& value) { m_keyPatternHasBeenSet = true; m_keyPattern = value; }
    inline void SetKeyPattern(Aws::String&& value) { m_keyPatternHasBeenSet = true; m_keyPattern = std::move(value); }
    inline void SetKeyPattern(const char* value) { m_keyPatternHasBeenSet = true; m_keyPattern.assign(value); }
    inline IngestionS3InputConfiguration& WithKeyPattern(const Aws::String& value) { SetKeyPattern(value); return *this;}
    inline IngestionS3InputConfiguration& WithKeyPattern(Aws::String&& value) { SetKeyPattern(std::move(value)); return *this;}
    inline IngestionS3InputConfiguration& WithKeyPattern(const char* value) { SetKeyPattern(value); return *this;}
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
