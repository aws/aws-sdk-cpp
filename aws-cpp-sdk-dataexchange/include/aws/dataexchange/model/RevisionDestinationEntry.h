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
   * <p>The destination where the assets in the revision will be
   * exported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/RevisionDestinationEntry">AWS
   * API Reference</a></p>
   */
  class RevisionDestinationEntry
  {
  public:
    AWS_DATAEXCHANGE_API RevisionDestinationEntry();
    AWS_DATAEXCHANGE_API RevisionDestinationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RevisionDestinationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline RevisionDestinationEntry& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline RevisionDestinationEntry& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline RevisionDestinationEntry& WithBucket(const char* value) { SetBucket(value); return *this;}


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
    inline RevisionDestinationEntry& WithKeyPattern(const Aws::String& value) { SetKeyPattern(value); return *this;}

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline RevisionDestinationEntry& WithKeyPattern(Aws::String&& value) { SetKeyPattern(std::move(value)); return *this;}

    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline RevisionDestinationEntry& WithKeyPattern(const char* value) { SetKeyPattern(value); return *this;}


    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline RevisionDestinationEntry& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline RevisionDestinationEntry& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline RevisionDestinationEntry& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPattern;
    bool m_keyPatternHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
