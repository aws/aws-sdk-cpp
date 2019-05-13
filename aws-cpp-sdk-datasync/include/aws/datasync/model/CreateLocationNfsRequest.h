/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/OnPremConfig.h>
#include <aws/datasync/model/NfsMountOptions.h>
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
   * <p>CreateLocationNfsRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationNfsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API CreateLocationNfsRequest : public DataSyncRequest
  {
  public:
    CreateLocationNfsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationNfs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your network.
     * </p> <p>To see all the paths exported by your NFS server. run "<code>showmount
     * -e nfs-server-name</code>" from an NFS client that has access to your server.
     * You can specify any directory that appears in the results, and any subdirectory
     * of that directory. Ensure that the NFS export is accessible without Kerberos
     * authentication. </p> <p>To transfer all the data in the folder you specified,
     * DataSync needs to have permissions to read all the data. To ensure this, either
     * configure the NFS export with <code>no_root_squash,</code> or ensure that the
     * permissions for all of the files that you want DataSync allow read access for
     * all users. Doing either enables the agent to read the files. For the agent to
     * access directories, you must additionally enable all execute access.</p> <p>For
     * information about NFS export configuration, see
     * "http://web.mit.edu/rhel-doc/5/RHEL-5-manual/Deployment_Guide-en-US/s1-nfs-server-config-exports.html"
     * (18.7. The /etc/exports Configuration File).</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your network.
     * </p> <p>To see all the paths exported by your NFS server. run "<code>showmount
     * -e nfs-server-name</code>" from an NFS client that has access to your server.
     * You can specify any directory that appears in the results, and any subdirectory
     * of that directory. Ensure that the NFS export is accessible without Kerberos
     * authentication. </p> <p>To transfer all the data in the folder you specified,
     * DataSync needs to have permissions to read all the data. To ensure this, either
     * configure the NFS export with <code>no_root_squash,</code> or ensure that the
     * permissions for all of the files that you want DataSync allow read access for
     * all users. Doing either enables the agent to read the files. For the agent to
     * access directories, you must additionally enable all execute access.</p> <p>For
     * information about NFS export configuration, see
     * "http://web.mit.edu/rhel-doc/5/RHEL-5-manual/Deployment_Guide-en-US/s1-nfs-server-config-exports.html"
     * (18.7. The /etc/exports Configuration File).</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your network.
     * </p> <p>To see all the paths exported by your NFS server. run "<code>showmount
     * -e nfs-server-name</code>" from an NFS client that has access to your server.
     * You can specify any directory that appears in the results, and any subdirectory
     * of that directory. Ensure that the NFS export is accessible without Kerberos
     * authentication. </p> <p>To transfer all the data in the folder you specified,
     * DataSync needs to have permissions to read all the data. To ensure this, either
     * configure the NFS export with <code>no_root_squash,</code> or ensure that the
     * permissions for all of the files that you want DataSync allow read access for
     * all users. Doing either enables the agent to read the files. For the agent to
     * access directories, you must additionally enable all execute access.</p> <p>For
     * information about NFS export configuration, see
     * "http://web.mit.edu/rhel-doc/5/RHEL-5-manual/Deployment_Guide-en-US/s1-nfs-server-config-exports.html"
     * (18.7. The /etc/exports Configuration File).</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your network.
     * </p> <p>To see all the paths exported by your NFS server. run "<code>showmount
     * -e nfs-server-name</code>" from an NFS client that has access to your server.
     * You can specify any directory that appears in the results, and any subdirectory
     * of that directory. Ensure that the NFS export is accessible without Kerberos
     * authentication. </p> <p>To transfer all the data in the folder you specified,
     * DataSync needs to have permissions to read all the data. To ensure this, either
     * configure the NFS export with <code>no_root_squash,</code> or ensure that the
     * permissions for all of the files that you want DataSync allow read access for
     * all users. Doing either enables the agent to read the files. For the agent to
     * access directories, you must additionally enable all execute access.</p> <p>For
     * information about NFS export configuration, see
     * "http://web.mit.edu/rhel-doc/5/RHEL-5-manual/Deployment_Guide-en-US/s1-nfs-server-config-exports.html"
     * (18.7. The /etc/exports Configuration File).</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your network.
     * </p> <p>To see all the paths exported by your NFS server. run "<code>showmount
     * -e nfs-server-name</code>" from an NFS client that has access to your server.
     * You can specify any directory that appears in the results, and any subdirectory
     * of that directory. Ensure that the NFS export is accessible without Kerberos
     * authentication. </p> <p>To transfer all the data in the folder you specified,
     * DataSync needs to have permissions to read all the data. To ensure this, either
     * configure the NFS export with <code>no_root_squash,</code> or ensure that the
     * permissions for all of the files that you want DataSync allow read access for
     * all users. Doing either enables the agent to read the files. For the agent to
     * access directories, you must additionally enable all execute access.</p> <p>For
     * information about NFS export configuration, see
     * "http://web.mit.edu/rhel-doc/5/RHEL-5-manual/Deployment_Guide-en-US/s1-nfs-server-config-exports.html"
     * (18.7. The /etc/exports Configuration File).</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your network.
     * </p> <p>To see all the paths exported by your NFS server. run "<code>showmount
     * -e nfs-server-name</code>" from an NFS client that has access to your server.
     * You can specify any directory that appears in the results, and any subdirectory
     * of that directory. Ensure that the NFS export is accessible without Kerberos
     * authentication. </p> <p>To transfer all the data in the folder you specified,
     * DataSync needs to have permissions to read all the data. To ensure this, either
     * configure the NFS export with <code>no_root_squash,</code> or ensure that the
     * permissions for all of the files that you want DataSync allow read access for
     * all users. Doing either enables the agent to read the files. For the agent to
     * access directories, you must additionally enable all execute access.</p> <p>For
     * information about NFS export configuration, see
     * "http://web.mit.edu/rhel-doc/5/RHEL-5-manual/Deployment_Guide-en-US/s1-nfs-server-config-exports.html"
     * (18.7. The /etc/exports Configuration File).</p>
     */
    inline CreateLocationNfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your network.
     * </p> <p>To see all the paths exported by your NFS server. run "<code>showmount
     * -e nfs-server-name</code>" from an NFS client that has access to your server.
     * You can specify any directory that appears in the results, and any subdirectory
     * of that directory. Ensure that the NFS export is accessible without Kerberos
     * authentication. </p> <p>To transfer all the data in the folder you specified,
     * DataSync needs to have permissions to read all the data. To ensure this, either
     * configure the NFS export with <code>no_root_squash,</code> or ensure that the
     * permissions for all of the files that you want DataSync allow read access for
     * all users. Doing either enables the agent to read the files. For the agent to
     * access directories, you must additionally enable all execute access.</p> <p>For
     * information about NFS export configuration, see
     * "http://web.mit.edu/rhel-doc/5/RHEL-5-manual/Deployment_Guide-en-US/s1-nfs-server-config-exports.html"
     * (18.7. The /etc/exports Configuration File).</p>
     */
    inline CreateLocationNfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your network.
     * </p> <p>To see all the paths exported by your NFS server. run "<code>showmount
     * -e nfs-server-name</code>" from an NFS client that has access to your server.
     * You can specify any directory that appears in the results, and any subdirectory
     * of that directory. Ensure that the NFS export is accessible without Kerberos
     * authentication. </p> <p>To transfer all the data in the folder you specified,
     * DataSync needs to have permissions to read all the data. To ensure this, either
     * configure the NFS export with <code>no_root_squash,</code> or ensure that the
     * permissions for all of the files that you want DataSync allow read access for
     * all users. Doing either enables the agent to read the files. For the agent to
     * access directories, you must additionally enable all execute access.</p> <p>For
     * information about NFS export configuration, see
     * "http://web.mit.edu/rhel-doc/5/RHEL-5-manual/Deployment_Guide-en-US/s1-nfs-server-config-exports.html"
     * (18.7. The /etc/exports Configuration File).</p>
     */
    inline CreateLocationNfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The name of the NFS server. This value is the IP address or Domain Name
     * Service (DNS) name of the NFS server. An agent that is installed on-premises
     * uses this host name to mount the NFS server in a network. </p> <note> <p>This
     * name must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * </note>
     */
    inline const Aws::String& GetServerHostname() const{ return m_serverHostname; }

    /**
     * <p>The name of the NFS server. This value is the IP address or Domain Name
     * Service (DNS) name of the NFS server. An agent that is installed on-premises
     * uses this host name to mount the NFS server in a network. </p> <note> <p>This
     * name must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * </note>
     */
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }

    /**
     * <p>The name of the NFS server. This value is the IP address or Domain Name
     * Service (DNS) name of the NFS server. An agent that is installed on-premises
     * uses this host name to mount the NFS server in a network. </p> <note> <p>This
     * name must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * </note>
     */
    inline void SetServerHostname(const Aws::String& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = value; }

    /**
     * <p>The name of the NFS server. This value is the IP address or Domain Name
     * Service (DNS) name of the NFS server. An agent that is installed on-premises
     * uses this host name to mount the NFS server in a network. </p> <note> <p>This
     * name must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * </note>
     */
    inline void SetServerHostname(Aws::String&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::move(value); }

    /**
     * <p>The name of the NFS server. This value is the IP address or Domain Name
     * Service (DNS) name of the NFS server. An agent that is installed on-premises
     * uses this host name to mount the NFS server in a network. </p> <note> <p>This
     * name must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * </note>
     */
    inline void SetServerHostname(const char* value) { m_serverHostnameHasBeenSet = true; m_serverHostname.assign(value); }

    /**
     * <p>The name of the NFS server. This value is the IP address or Domain Name
     * Service (DNS) name of the NFS server. An agent that is installed on-premises
     * uses this host name to mount the NFS server in a network. </p> <note> <p>This
     * name must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * </note>
     */
    inline CreateLocationNfsRequest& WithServerHostname(const Aws::String& value) { SetServerHostname(value); return *this;}

    /**
     * <p>The name of the NFS server. This value is the IP address or Domain Name
     * Service (DNS) name of the NFS server. An agent that is installed on-premises
     * uses this host name to mount the NFS server in a network. </p> <note> <p>This
     * name must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * </note>
     */
    inline CreateLocationNfsRequest& WithServerHostname(Aws::String&& value) { SetServerHostname(std::move(value)); return *this;}

    /**
     * <p>The name of the NFS server. This value is the IP address or Domain Name
     * Service (DNS) name of the NFS server. An agent that is installed on-premises
     * uses this host name to mount the NFS server in a network. </p> <note> <p>This
     * name must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * </note>
     */
    inline CreateLocationNfsRequest& WithServerHostname(const char* value) { SetServerHostname(value); return *this;}


    /**
     * <p>Contains a list of Amazon Resource Names (ARNs) of agents that are used to
     * connect to an NFS server.</p>
     */
    inline const OnPremConfig& GetOnPremConfig() const{ return m_onPremConfig; }

    /**
     * <p>Contains a list of Amazon Resource Names (ARNs) of agents that are used to
     * connect to an NFS server.</p>
     */
    inline bool OnPremConfigHasBeenSet() const { return m_onPremConfigHasBeenSet; }

    /**
     * <p>Contains a list of Amazon Resource Names (ARNs) of agents that are used to
     * connect to an NFS server.</p>
     */
    inline void SetOnPremConfig(const OnPremConfig& value) { m_onPremConfigHasBeenSet = true; m_onPremConfig = value; }

    /**
     * <p>Contains a list of Amazon Resource Names (ARNs) of agents that are used to
     * connect to an NFS server.</p>
     */
    inline void SetOnPremConfig(OnPremConfig&& value) { m_onPremConfigHasBeenSet = true; m_onPremConfig = std::move(value); }

    /**
     * <p>Contains a list of Amazon Resource Names (ARNs) of agents that are used to
     * connect to an NFS server.</p>
     */
    inline CreateLocationNfsRequest& WithOnPremConfig(const OnPremConfig& value) { SetOnPremConfig(value); return *this;}

    /**
     * <p>Contains a list of Amazon Resource Names (ARNs) of agents that are used to
     * connect to an NFS server.</p>
     */
    inline CreateLocationNfsRequest& WithOnPremConfig(OnPremConfig&& value) { SetOnPremConfig(std::move(value)); return *this;}


    /**
     * <p>The NFS mount options that DataSync can use to mount your NFS share.</p>
     */
    inline const NfsMountOptions& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p>The NFS mount options that DataSync can use to mount your NFS share.</p>
     */
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    /**
     * <p>The NFS mount options that DataSync can use to mount your NFS share.</p>
     */
    inline void SetMountOptions(const NfsMountOptions& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    /**
     * <p>The NFS mount options that DataSync can use to mount your NFS share.</p>
     */
    inline void SetMountOptions(NfsMountOptions&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    /**
     * <p>The NFS mount options that DataSync can use to mount your NFS share.</p>
     */
    inline CreateLocationNfsRequest& WithMountOptions(const NfsMountOptions& value) { SetMountOptions(value); return *this;}

    /**
     * <p>The NFS mount options that DataSync can use to mount your NFS share.</p>
     */
    inline CreateLocationNfsRequest& WithMountOptions(NfsMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}


    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationNfsRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationNfsRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationNfsRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationNfsRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet;

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet;

    OnPremConfig m_onPremConfig;
    bool m_onPremConfigHasBeenSet;

    NfsMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
