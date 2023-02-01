/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>A revision destination is the Amazon S3 bucket folder destination to where
   * the export will be sent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/AutoExportRevisionDestinationEntry">AWS
   * API Reference</a></p>
   */
  class AutoExportRevisionDestinationEntry
  {
  public:
    AWS_DATAEXCHANGE_API AutoExportRevisionDestinationEntry();
    AWS_DATAEXCHANGE_API AutoExportRevisionDestinationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API AutoExportRevisionDestinationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket that is the destination for the event action.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the event action.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the event action.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the event action.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that is the destination for the event action.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that is the destination for the event action.</p>
     */
    inline AutoExportRevisionDestinationEntry& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that is the destination for the event action.</p>
     */
    inline AutoExportRevisionDestinationEntry& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that is the destination for the event action.</p>
     */
    inline AutoExportRevisionDestinationEntry& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline const Aws::String& GetKeyPattern() const{ return m_keyPattern; }

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline bool KeyPatternHasBeenSet() const { return m_keyPatternHasBeenSet; }

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline void SetKeyPattern(const Aws::String& value) { m_keyPatternHasBeenSet = true; m_keyPattern = value; }

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline void SetKeyPattern(Aws::String&& value) { m_keyPatternHasBeenSet = true; m_keyPattern = std::move(value); }

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline void SetKeyPattern(const char* value) { m_keyPatternHasBeenSet = true; m_keyPattern.assign(value); }

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline AutoExportRevisionDestinationEntry& WithKeyPattern(const Aws::String& value) { SetKeyPattern(value); return *this;}

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline AutoExportRevisionDestinationEntry& WithKeyPattern(Aws::String&& value) { SetKeyPattern(std::move(value)); return *this;}

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline AutoExportRevisionDestinationEntry& WithKeyPattern(const char* value) { SetKeyPattern(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPattern;
    bool m_keyPatternHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
