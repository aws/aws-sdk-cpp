/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes an update for the Amazon S3 code content location for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ContentLocationUpdate">AWS
   * API Reference</a></p>
   */
  class S3ContentLocationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API S3ContentLocationUpdate() = default;
    AWS_KINESISANALYTICSV2_API S3ContentLocationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ContentLocationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline const Aws::String& GetBucketARNUpdate() const { return m_bucketARNUpdate; }
    inline bool BucketARNUpdateHasBeenSet() const { return m_bucketARNUpdateHasBeenSet; }
    template<typename BucketARNUpdateT = Aws::String>
    void SetBucketARNUpdate(BucketARNUpdateT&& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = std::forward<BucketARNUpdateT>(value); }
    template<typename BucketARNUpdateT = Aws::String>
    S3ContentLocationUpdate& WithBucketARNUpdate(BucketARNUpdateT&& value) { SetBucketARNUpdate(std::forward<BucketARNUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline const Aws::String& GetFileKeyUpdate() const { return m_fileKeyUpdate; }
    inline bool FileKeyUpdateHasBeenSet() const { return m_fileKeyUpdateHasBeenSet; }
    template<typename FileKeyUpdateT = Aws::String>
    void SetFileKeyUpdate(FileKeyUpdateT&& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = std::forward<FileKeyUpdateT>(value); }
    template<typename FileKeyUpdateT = Aws::String>
    S3ContentLocationUpdate& WithFileKeyUpdate(FileKeyUpdateT&& value) { SetFileKeyUpdate(std::forward<FileKeyUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline const Aws::String& GetObjectVersionUpdate() const { return m_objectVersionUpdate; }
    inline bool ObjectVersionUpdateHasBeenSet() const { return m_objectVersionUpdateHasBeenSet; }
    template<typename ObjectVersionUpdateT = Aws::String>
    void SetObjectVersionUpdate(ObjectVersionUpdateT&& value) { m_objectVersionUpdateHasBeenSet = true; m_objectVersionUpdate = std::forward<ObjectVersionUpdateT>(value); }
    template<typename ObjectVersionUpdateT = Aws::String>
    S3ContentLocationUpdate& WithObjectVersionUpdate(ObjectVersionUpdateT&& value) { SetObjectVersionUpdate(std::forward<ObjectVersionUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet = false;

    Aws::String m_fileKeyUpdate;
    bool m_fileKeyUpdateHasBeenSet = false;

    Aws::String m_objectVersionUpdate;
    bool m_objectVersionUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
