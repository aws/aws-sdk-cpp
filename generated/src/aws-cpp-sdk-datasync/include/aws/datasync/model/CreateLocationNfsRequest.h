/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateLocationNfsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationNfsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationNfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    CreateLocationNfsRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS name or IP address (IPv4 or IPv6) of the NFS file server
     * that your DataSync agent connects to.</p>
     */
    inline const Aws::String& GetServerHostname() const { return m_serverHostname; }
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }
    template<typename ServerHostnameT = Aws::String>
    void SetServerHostname(ServerHostnameT&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::forward<ServerHostnameT>(value); }
    template<typename ServerHostnameT = Aws::String>
    CreateLocationNfsRequest& WithServerHostname(ServerHostnameT&& value) { SetServerHostname(std::forward<ServerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect to your NFS file server.</p> <p>You can specify more than one agent. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/do-i-need-datasync-agent.html#multiple-agents">Using
     * multiple DataSync agents</a>.</p>
     */
    inline const OnPremConfig& GetOnPremConfig() const { return m_onPremConfig; }
    inline bool OnPremConfigHasBeenSet() const { return m_onPremConfigHasBeenSet; }
    template<typename OnPremConfigT = OnPremConfig>
    void SetOnPremConfig(OnPremConfigT&& value) { m_onPremConfigHasBeenSet = true; m_onPremConfig = std::forward<OnPremConfigT>(value); }
    template<typename OnPremConfigT = OnPremConfig>
    CreateLocationNfsRequest& WithOnPremConfig(OnPremConfigT&& value) { SetOnPremConfig(std::forward<OnPremConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the options that DataSync can use to mount your NFS file
     * server.</p>
     */
    inline const NfsMountOptions& GetMountOptions() const { return m_mountOptions; }
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }
    template<typename MountOptionsT = NfsMountOptions>
    void SetMountOptions(MountOptionsT&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::forward<MountOptionsT>(value); }
    template<typename MountOptionsT = NfsMountOptions>
    CreateLocationNfsRequest& WithMountOptions(MountOptionsT&& value) { SetMountOptions(std::forward<MountOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateLocationNfsRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateLocationNfsRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet = false;

    OnPremConfig m_onPremConfig;
    bool m_onPremConfigHasBeenSet = false;

    NfsMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
