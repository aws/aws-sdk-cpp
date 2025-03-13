/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Ec2Config.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/EfsInTransitEncryption.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeLocationEfsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationEfsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeLocationEfsResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationEfsResult() = default;
    AWS_DATASYNC_API DescribeLocationEfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationEfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Amazon EFS file system location.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    DescribeLocationEfsResult& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon EFS file system location.</p>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    DescribeLocationEfsResult& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Ec2Config& GetEc2Config() const { return m_ec2Config; }
    template<typename Ec2ConfigT = Ec2Config>
    void SetEc2Config(Ec2ConfigT&& value) { m_ec2ConfigHasBeenSet = true; m_ec2Config = std::forward<Ec2ConfigT>(value); }
    template<typename Ec2ConfigT = Ec2Config>
    DescribeLocationEfsResult& WithEc2Config(Ec2ConfigT&& value) { SetEc2Config(std::forward<Ec2ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeLocationEfsResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the access point that DataSync uses to access the Amazon EFS file
     * system.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-efs-location.html#create-efs-location-iam">Accessing
     * restricted file systems</a>.</p>
     */
    inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
    template<typename AccessPointArnT = Aws::String>
    void SetAccessPointArn(AccessPointArnT&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::forward<AccessPointArnT>(value); }
    template<typename AccessPointArnT = Aws::String>
    DescribeLocationEfsResult& WithAccessPointArn(AccessPointArnT&& value) { SetAccessPointArn(std::forward<AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management (IAM) role that allows DataSync to access
     * your Amazon EFS file system.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-efs-location.html#create-efs-location-iam-role">Creating
     * a DataSync IAM role for file system access</a>.</p>
     */
    inline const Aws::String& GetFileSystemAccessRoleArn() const { return m_fileSystemAccessRoleArn; }
    template<typename FileSystemAccessRoleArnT = Aws::String>
    void SetFileSystemAccessRoleArn(FileSystemAccessRoleArnT&& value) { m_fileSystemAccessRoleArnHasBeenSet = true; m_fileSystemAccessRoleArn = std::forward<FileSystemAccessRoleArnT>(value); }
    template<typename FileSystemAccessRoleArnT = Aws::String>
    DescribeLocationEfsResult& WithFileSystemAccessRoleArn(FileSystemAccessRoleArnT&& value) { SetFileSystemAccessRoleArn(std::forward<FileSystemAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DataSync uses Transport Layer Security (TLS) encryption
     * when transferring data to or from the Amazon EFS file system.</p>
     */
    inline EfsInTransitEncryption GetInTransitEncryption() const { return m_inTransitEncryption; }
    inline void SetInTransitEncryption(EfsInTransitEncryption value) { m_inTransitEncryptionHasBeenSet = true; m_inTransitEncryption = value; }
    inline DescribeLocationEfsResult& WithInTransitEncryption(EfsInTransitEncryption value) { SetInTransitEncryption(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLocationEfsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Ec2Config m_ec2Config;
    bool m_ec2ConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet = false;

    Aws::String m_fileSystemAccessRoleArn;
    bool m_fileSystemAccessRoleArnHasBeenSet = false;

    EfsInTransitEncryption m_inTransitEncryption{EfsInTransitEncryption::NOT_SET};
    bool m_inTransitEncryptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
