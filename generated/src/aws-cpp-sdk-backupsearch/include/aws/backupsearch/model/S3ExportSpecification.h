/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
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
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>This specification contains a required string of the destination bucket;
   * optionally, you can include the destination prefix.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/S3ExportSpecification">AWS
   * API Reference</a></p>
   */
  class S3ExportSpecification
  {
  public:
    AWS_BACKUPSEARCH_API S3ExportSpecification() = default;
    AWS_BACKUPSEARCH_API S3ExportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API S3ExportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This specifies the destination Amazon S3 bucket for the export job.</p>
     */
    inline const Aws::String& GetDestinationBucket() const { return m_destinationBucket; }
    inline bool DestinationBucketHasBeenSet() const { return m_destinationBucketHasBeenSet; }
    template<typename DestinationBucketT = Aws::String>
    void SetDestinationBucket(DestinationBucketT&& value) { m_destinationBucketHasBeenSet = true; m_destinationBucket = std::forward<DestinationBucketT>(value); }
    template<typename DestinationBucketT = Aws::String>
    S3ExportSpecification& WithDestinationBucket(DestinationBucketT&& value) { SetDestinationBucket(std::forward<DestinationBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This specifies the prefix for the destination Amazon S3 bucket for the export
     * job.</p>
     */
    inline const Aws::String& GetDestinationPrefix() const { return m_destinationPrefix; }
    inline bool DestinationPrefixHasBeenSet() const { return m_destinationPrefixHasBeenSet; }
    template<typename DestinationPrefixT = Aws::String>
    void SetDestinationPrefix(DestinationPrefixT&& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = std::forward<DestinationPrefixT>(value); }
    template<typename DestinationPrefixT = Aws::String>
    S3ExportSpecification& WithDestinationPrefix(DestinationPrefixT&& value) { SetDestinationPrefix(std::forward<DestinationPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationBucket;
    bool m_destinationBucketHasBeenSet = false;

    Aws::String m_destinationPrefix;
    bool m_destinationPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
