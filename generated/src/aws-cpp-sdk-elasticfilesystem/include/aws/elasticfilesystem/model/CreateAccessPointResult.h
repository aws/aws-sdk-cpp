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


    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline CreateAccessPointResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline CreateAccessPointResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.</p>
     */
    inline CreateAccessPointResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline CreateAccessPointResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline CreateAccessPointResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the access point. This is the value of the <code>Name</code>
     * tag.</p>
     */
    inline CreateAccessPointResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline CreateAccessPointResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline CreateAccessPointResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline CreateAccessPointResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the access point, presented as an array of Tag
     * objects.</p>
     */
    inline CreateAccessPointResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointId = value; }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointId = std::move(value); }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline void SetAccessPointId(const char* value) { m_accessPointId.assign(value); }

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline CreateAccessPointResult& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline CreateAccessPointResult& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access point, assigned by Amazon EFS.</p>
     */
    inline CreateAccessPointResult& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}


    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline CreateAccessPointResult& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline CreateAccessPointResult& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) associated with the access point.</p>
     */
    inline CreateAccessPointResult& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}


    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline CreateAccessPointResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline CreateAccessPointResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EFS file system that the access point applies to.</p>
     */
    inline CreateAccessPointResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline const PosixUser& GetPosixUser() const{ return m_posixUser; }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline void SetPosixUser(const PosixUser& value) { m_posixUser = value; }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline void SetPosixUser(PosixUser&& value) { m_posixUser = std::move(value); }

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline CreateAccessPointResult& WithPosixUser(const PosixUser& value) { SetPosixUser(value); return *this;}

    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point that is used for all file operations by NFS clients
     * using the access point.</p>
     */
    inline CreateAccessPointResult& WithPosixUser(PosixUser&& value) { SetPosixUser(std::move(value)); return *this;}


    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline const RootDirectory& GetRootDirectory() const{ return m_rootDirectory; }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline void SetRootDirectory(const RootDirectory& value) { m_rootDirectory = value; }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline void SetRootDirectory(RootDirectory&& value) { m_rootDirectory = std::move(value); }

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline CreateAccessPointResult& WithRootDirectory(const RootDirectory& value) { SetRootDirectory(value); return *this;}

    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point.</p>
     */
    inline CreateAccessPointResult& WithRootDirectory(RootDirectory&& value) { SetRootDirectory(std::move(value)); return *this;}


    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline CreateAccessPointResult& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline CreateAccessPointResult& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>Identified the Amazon Web Services account that owns the access point
     * resource.</p>
     */
    inline CreateAccessPointResult& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleState = value; }

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleState = std::move(value); }

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline CreateAccessPointResult& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>Identifies the lifecycle phase of the access point.</p>
     */
    inline CreateAccessPointResult& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
