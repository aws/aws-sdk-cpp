/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/FsxProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class CreateLocationFsxOpenZfsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationFsxOpenZfsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationFsxOpenZfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for OpenZFS file system.</p>
     */
    inline const Aws::String& GetFsxFilesystemArn() const { return m_fsxFilesystemArn; }
    inline bool FsxFilesystemArnHasBeenSet() const { return m_fsxFilesystemArnHasBeenSet; }
    template<typename FsxFilesystemArnT = Aws::String>
    void SetFsxFilesystemArn(FsxFilesystemArnT&& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = std::forward<FsxFilesystemArnT>(value); }
    template<typename FsxFilesystemArnT = Aws::String>
    CreateLocationFsxOpenZfsRequest& WithFsxFilesystemArn(FsxFilesystemArnT&& value) { SetFsxFilesystemArn(std::forward<FsxFilesystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of protocol that DataSync uses to access your file system.</p>
     */
    inline const FsxProtocol& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = FsxProtocol>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = FsxProtocol>
    CreateLocationFsxOpenZfsRequest& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the security groups that are used to configure the FSx for
     * OpenZFS file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const { return m_securityGroupArns; }
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::forward<SecurityGroupArnsT>(value); }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    CreateLocationFsxOpenZfsRequest& WithSecurityGroupArns(SecurityGroupArnsT&& value) { SetSecurityGroupArns(std::forward<SecurityGroupArnsT>(value)); return *this;}
    template<typename SecurityGroupArnsT = Aws::String>
    CreateLocationFsxOpenZfsRequest& AddSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.emplace_back(std::forward<SecurityGroupArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A subdirectory in the location's path that must begin with <code>/fsx</code>.
     * DataSync uses this subdirectory to read or write data (depending on whether the
     * file system is a source or destination location).</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    CreateLocationFsxOpenZfsRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateLocationFsxOpenZfsRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateLocationFsxOpenZfsRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fsxFilesystemArn;
    bool m_fsxFilesystemArnHasBeenSet = false;

    FsxProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
