/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/PosixUser.h>
#include <aws/elasticfilesystem/model/RootDirectory.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>
#include <aws/elasticfilesystem/model/Tag.h>
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
namespace EFS
{
namespace Model
{
  /**
   * <p>Provides a description of an EFS file system access point.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/AccessPointDescription">AWS
   * API Reference</a></p>
   */
  class CreateAccessPointResult
  {
  public:
    AWS_EFS_API CreateAccessPointResult();
    AWS_EFS_API CreateAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API CreateAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline CreateAccessPointResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAccessPointResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateAccessPointResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAccessPointResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateAccessPointResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateAccessPointResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAccessPointResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateAccessPointResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointId = value; }
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointId = std::move(value); }
    inline void SetAccessPointId(const char* value) { m_accessPointId.assign(value); }
    inline CreateAccessPointResult& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}
    inline CreateAccessPointResult& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArn = value; }
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArn = std::move(value); }
    inline void SetAccessPointArn(const char* value) { m_accessPointArn.assign(value); }
    inline CreateAccessPointResult& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}
    inline CreateAccessPointResult& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }
    inline CreateAccessPointResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline CreateAccessPointResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline const PosixUser& GetPosixUser() const{ return m_posixUser; }
    inline void SetPosixUser(const PosixUser& value) { m_posixUser = value; }
    inline void SetPosixUser(PosixUser&& value) { m_posixUser = std::move(value); }
    inline CreateAccessPointResult& WithPosixUser(const PosixUser& value) { SetPosixUser(value); return *this;}
    inline CreateAccessPointResult& WithPosixUser(PosixUser&& value) { SetPosixUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory on the EFS file system that the access point exposes as the
     * root directory to NFS clients using the access point.</p>
     */
    inline const RootDirectory& GetRootDirectory() const{ return m_rootDirectory; }
    inline void SetRootDirectory(const RootDirectory& value) { m_rootDirectory = value; }
    inline void SetRootDirectory(RootDirectory&& value) { m_rootDirectory = std::move(value); }
    inline CreateAccessPointResult& WithRootDirectory(const RootDirectory& value) { SetRootDirectory(value); return *this;}
    inline CreateAccessPointResult& WithRootDirectory(RootDirectory&& value) { SetRootDirectory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }
    inline CreateAccessPointResult& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline CreateAccessPointResult& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleState = value; }
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleState = std::move(value); }
    inline CreateAccessPointResult& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}
    inline CreateAccessPointResult& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAccessPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAccessPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;

    Aws::String m_name;

    Aws::Vector<Tag> m_tags;

    Aws::String m_accessPointId;

    Aws::String m_accessPointArn;

    Aws::String m_fileSystemId;

    PosixUser m_posixUser;

    RootDirectory m_rootDirectory;

    Aws::String m_ownerId;

    LifeCycleState m_lifeCycleState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
