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
    AWS_BACKUPSEARCH_API S3ExportSpecification();
    AWS_BACKUPSEARCH_API S3ExportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API S3ExportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This specifies the destination Amazon S3 bucket for the export job.</p>
     */
    inline const Aws::String& GetDestinationBucket() const{ return m_destinationBucket; }
    inline bool DestinationBucketHasBeenSet() const { return m_destinationBucketHasBeenSet; }
    inline void SetDestinationBucket(const Aws::String& value) { m_destinationBucketHasBeenSet = true; m_destinationBucket = value; }
    inline void SetDestinationBucket(Aws::String&& value) { m_destinationBucketHasBeenSet = true; m_destinationBucket = std::move(value); }
    inline void SetDestinationBucket(const char* value) { m_destinationBucketHasBeenSet = true; m_destinationBucket.assign(value); }
    inline S3ExportSpecification& WithDestinationBucket(const Aws::String& value) { SetDestinationBucket(value); return *this;}
    inline S3ExportSpecification& WithDestinationBucket(Aws::String&& value) { SetDestinationBucket(std::move(value)); return *this;}
    inline S3ExportSpecification& WithDestinationBucket(const char* value) { SetDestinationBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This specifies the prefix for the destination Amazon S3 bucket for the export
     * job.</p>
     */
    inline const Aws::String& GetDestinationPrefix() const{ return m_destinationPrefix; }
    inline bool DestinationPrefixHasBeenSet() const { return m_destinationPrefixHasBeenSet; }
    inline void SetDestinationPrefix(const Aws::String& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = value; }
    inline void SetDestinationPrefix(Aws::String&& value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix = std::move(value); }
    inline void SetDestinationPrefix(const char* value) { m_destinationPrefixHasBeenSet = true; m_destinationPrefix.assign(value); }
    inline S3ExportSpecification& WithDestinationPrefix(const Aws::String& value) { SetDestinationPrefix(value); return *this;}
    inline S3ExportSpecification& WithDestinationPrefix(Aws::String&& value) { SetDestinationPrefix(std::move(value)); return *this;}
    inline S3ExportSpecification& WithDestinationPrefix(const char* value) { SetDestinationPrefix(value); return *this;}
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
