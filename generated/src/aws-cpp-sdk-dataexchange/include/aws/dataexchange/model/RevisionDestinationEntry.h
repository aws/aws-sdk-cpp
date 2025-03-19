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
    AWS_DATAEXCHANGE_API RevisionDestinationEntry() = default;
    AWS_DATAEXCHANGE_API RevisionDestinationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RevisionDestinationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket that is the destination for the assets in the
     * revision.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    RevisionDestinationEntry& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string representing the pattern for generated names of the individual
     * assets in the revision. For more information about key patterns, see <a
     * href="https://docs.aws.amazon.com/data-exchange/latest/userguide/jobs.html#revision-export-keypatterns">Key
     * patterns when exporting revisions</a>.</p>
     */
    inline const Aws::String& GetKeyPattern() const { return m_keyPattern; }
    inline bool KeyPatternHasBeenSet() const { return m_keyPatternHasBeenSet; }
    template<typename KeyPatternT = Aws::String>
    void SetKeyPattern(KeyPatternT&& value) { m_keyPatternHasBeenSet = true; m_keyPattern = std::forward<KeyPatternT>(value); }
    template<typename KeyPatternT = Aws::String>
    RevisionDestinationEntry& WithKeyPattern(KeyPatternT&& value) { SetKeyPattern(std::forward<KeyPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    RevisionDestinationEntry& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}
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
