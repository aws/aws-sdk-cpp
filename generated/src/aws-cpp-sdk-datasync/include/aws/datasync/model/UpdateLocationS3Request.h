/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/S3StorageClass.h>
#include <aws/datasync/model/S3Config.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationS3Request : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationS3Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationS3"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon S3 transfer location
     * that you're updating.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    UpdateLocationS3Request& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    UpdateLocationS3Request& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage class that you want your objects to use when Amazon S3
     * is a transfer destination.</p> <p>For buckets in Amazon Web Services Regions,
     * the storage class defaults to <code>STANDARD</code>. For buckets on Outposts,
     * the storage class defaults to <code>OUTPOSTS</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline S3StorageClass GetS3StorageClass() const { return m_s3StorageClass; }
    inline bool S3StorageClassHasBeenSet() const { return m_s3StorageClassHasBeenSet; }
    inline void SetS3StorageClass(S3StorageClass value) { m_s3StorageClassHasBeenSet = true; m_s3StorageClass = value; }
    inline UpdateLocationS3Request& WithS3StorageClass(S3StorageClass value) { SetS3StorageClass(value); return *this;}
    ///@}

    ///@{
    
    inline const S3Config& GetS3Config() const { return m_s3Config; }
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }
    template<typename S3ConfigT = S3Config>
    void SetS3Config(S3ConfigT&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::forward<S3ConfigT>(value); }
    template<typename S3ConfigT = S3Config>
    UpdateLocationS3Request& WithS3Config(S3ConfigT&& value) { SetS3Config(std::forward<S3ConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    S3StorageClass m_s3StorageClass{S3StorageClass::NOT_SET};
    bool m_s3StorageClassHasBeenSet = false;

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
