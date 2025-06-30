/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Lists the properties for one or more specified associated
   * accesses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedAccess">AWS
   * API Reference</a></p>
   */
  class ListedAccess
  {
  public:
    AWS_TRANSFER_API ListedAccess() = default;
    AWS_TRANSFER_API ListedAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>You can use the
     * <code>HomeDirectory</code> parameter for <code>HomeDirectoryType</code> when it
     * is set to either <code>PATH</code> or <code>LOGICAL</code>.</p> 
     */
    inline const Aws::String& GetHomeDirectory() const { return m_homeDirectory; }
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }
    template<typename HomeDirectoryT = Aws::String>
    void SetHomeDirectory(HomeDirectoryT&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::forward<HomeDirectoryT>(value); }
    template<typename HomeDirectoryT = Aws::String>
    ListedAccess& WithHomeDirectory(HomeDirectoryT&& value) { SetHomeDirectory(std::forward<HomeDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline HomeDirectoryType GetHomeDirectoryType() const { return m_homeDirectoryType; }
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }
    inline void SetHomeDirectoryType(HomeDirectoryType value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }
    inline ListedAccess& WithHomeDirectoryType(HomeDirectoryType value) { SetHomeDirectoryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    ListedAccess& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    ListedAccess& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet = false;

    HomeDirectoryType m_homeDirectoryType{HomeDirectoryType::NOT_SET};
    bool m_homeDirectoryTypeHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
