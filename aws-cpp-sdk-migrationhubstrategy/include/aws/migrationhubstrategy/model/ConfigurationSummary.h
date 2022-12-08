/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/RemoteSourceCodeAnalysisServerInfo.h>
#include <aws/migrationhubstrategy/model/IPAddressBasedRemoteInfo.h>
#include <aws/migrationhubstrategy/model/PipelineInfo.h>
#include <aws/migrationhubstrategy/model/VcenterBasedRemoteInfo.h>
#include <aws/migrationhubstrategy/model/VersionControlInfo.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Summary of the collector configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IP address based configurations.</p>
     */
    inline const Aws::Vector<IPAddressBasedRemoteInfo>& GetIpAddressBasedRemoteInfoList() const{ return m_ipAddressBasedRemoteInfoList; }

    /**
     * <p>IP address based configurations.</p>
     */
    inline bool IpAddressBasedRemoteInfoListHasBeenSet() const { return m_ipAddressBasedRemoteInfoListHasBeenSet; }

    /**
     * <p>IP address based configurations.</p>
     */
    inline void SetIpAddressBasedRemoteInfoList(const Aws::Vector<IPAddressBasedRemoteInfo>& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList = value; }

    /**
     * <p>IP address based configurations.</p>
     */
    inline void SetIpAddressBasedRemoteInfoList(Aws::Vector<IPAddressBasedRemoteInfo>&& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList = std::move(value); }

    /**
     * <p>IP address based configurations.</p>
     */
    inline ConfigurationSummary& WithIpAddressBasedRemoteInfoList(const Aws::Vector<IPAddressBasedRemoteInfo>& value) { SetIpAddressBasedRemoteInfoList(value); return *this;}

    /**
     * <p>IP address based configurations.</p>
     */
    inline ConfigurationSummary& WithIpAddressBasedRemoteInfoList(Aws::Vector<IPAddressBasedRemoteInfo>&& value) { SetIpAddressBasedRemoteInfoList(std::move(value)); return *this;}

    /**
     * <p>IP address based configurations.</p>
     */
    inline ConfigurationSummary& AddIpAddressBasedRemoteInfoList(const IPAddressBasedRemoteInfo& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList.push_back(value); return *this; }

    /**
     * <p>IP address based configurations.</p>
     */
    inline ConfigurationSummary& AddIpAddressBasedRemoteInfoList(IPAddressBasedRemoteInfo&& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline const Aws::Vector<PipelineInfo>& GetPipelineInfoList() const{ return m_pipelineInfoList; }

    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline bool PipelineInfoListHasBeenSet() const { return m_pipelineInfoListHasBeenSet; }

    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline void SetPipelineInfoList(const Aws::Vector<PipelineInfo>& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList = value; }

    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline void SetPipelineInfoList(Aws::Vector<PipelineInfo>&& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList = std::move(value); }

    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline ConfigurationSummary& WithPipelineInfoList(const Aws::Vector<PipelineInfo>& value) { SetPipelineInfoList(value); return *this;}

    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline ConfigurationSummary& WithPipelineInfoList(Aws::Vector<PipelineInfo>&& value) { SetPipelineInfoList(std::move(value)); return *this;}

    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline ConfigurationSummary& AddPipelineInfoList(const PipelineInfo& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList.push_back(value); return *this; }

    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline ConfigurationSummary& AddPipelineInfoList(PipelineInfo&& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>Info about the remote server source code configuration.</p>
     */
    inline const RemoteSourceCodeAnalysisServerInfo& GetRemoteSourceCodeAnalysisServerInfo() const{ return m_remoteSourceCodeAnalysisServerInfo; }

    /**
     * <p>Info about the remote server source code configuration.</p>
     */
    inline bool RemoteSourceCodeAnalysisServerInfoHasBeenSet() const { return m_remoteSourceCodeAnalysisServerInfoHasBeenSet; }

    /**
     * <p>Info about the remote server source code configuration.</p>
     */
    inline void SetRemoteSourceCodeAnalysisServerInfo(const RemoteSourceCodeAnalysisServerInfo& value) { m_remoteSourceCodeAnalysisServerInfoHasBeenSet = true; m_remoteSourceCodeAnalysisServerInfo = value; }

    /**
     * <p>Info about the remote server source code configuration.</p>
     */
    inline void SetRemoteSourceCodeAnalysisServerInfo(RemoteSourceCodeAnalysisServerInfo&& value) { m_remoteSourceCodeAnalysisServerInfoHasBeenSet = true; m_remoteSourceCodeAnalysisServerInfo = std::move(value); }

    /**
     * <p>Info about the remote server source code configuration.</p>
     */
    inline ConfigurationSummary& WithRemoteSourceCodeAnalysisServerInfo(const RemoteSourceCodeAnalysisServerInfo& value) { SetRemoteSourceCodeAnalysisServerInfo(value); return *this;}

    /**
     * <p>Info about the remote server source code configuration.</p>
     */
    inline ConfigurationSummary& WithRemoteSourceCodeAnalysisServerInfo(RemoteSourceCodeAnalysisServerInfo&& value) { SetRemoteSourceCodeAnalysisServerInfo(std::move(value)); return *this;}


    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline const Aws::Vector<VcenterBasedRemoteInfo>& GetVcenterBasedRemoteInfoList() const{ return m_vcenterBasedRemoteInfoList; }

    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline bool VcenterBasedRemoteInfoListHasBeenSet() const { return m_vcenterBasedRemoteInfoListHasBeenSet; }

    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline void SetVcenterBasedRemoteInfoList(const Aws::Vector<VcenterBasedRemoteInfo>& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList = value; }

    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline void SetVcenterBasedRemoteInfoList(Aws::Vector<VcenterBasedRemoteInfo>&& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList = std::move(value); }

    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline ConfigurationSummary& WithVcenterBasedRemoteInfoList(const Aws::Vector<VcenterBasedRemoteInfo>& value) { SetVcenterBasedRemoteInfoList(value); return *this;}

    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline ConfigurationSummary& WithVcenterBasedRemoteInfoList(Aws::Vector<VcenterBasedRemoteInfo>&& value) { SetVcenterBasedRemoteInfoList(std::move(value)); return *this;}

    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline ConfigurationSummary& AddVcenterBasedRemoteInfoList(const VcenterBasedRemoteInfo& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList.push_back(value); return *this; }

    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline ConfigurationSummary& AddVcenterBasedRemoteInfoList(VcenterBasedRemoteInfo&& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of the version control configurations.</p>
     */
    inline const Aws::Vector<VersionControlInfo>& GetVersionControlInfoList() const{ return m_versionControlInfoList; }

    /**
     * <p>The list of the version control configurations.</p>
     */
    inline bool VersionControlInfoListHasBeenSet() const { return m_versionControlInfoListHasBeenSet; }

    /**
     * <p>The list of the version control configurations.</p>
     */
    inline void SetVersionControlInfoList(const Aws::Vector<VersionControlInfo>& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList = value; }

    /**
     * <p>The list of the version control configurations.</p>
     */
    inline void SetVersionControlInfoList(Aws::Vector<VersionControlInfo>&& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList = std::move(value); }

    /**
     * <p>The list of the version control configurations.</p>
     */
    inline ConfigurationSummary& WithVersionControlInfoList(const Aws::Vector<VersionControlInfo>& value) { SetVersionControlInfoList(value); return *this;}

    /**
     * <p>The list of the version control configurations.</p>
     */
    inline ConfigurationSummary& WithVersionControlInfoList(Aws::Vector<VersionControlInfo>&& value) { SetVersionControlInfoList(std::move(value)); return *this;}

    /**
     * <p>The list of the version control configurations.</p>
     */
    inline ConfigurationSummary& AddVersionControlInfoList(const VersionControlInfo& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList.push_back(value); return *this; }

    /**
     * <p>The list of the version control configurations.</p>
     */
    inline ConfigurationSummary& AddVersionControlInfoList(VersionControlInfo&& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IPAddressBasedRemoteInfo> m_ipAddressBasedRemoteInfoList;
    bool m_ipAddressBasedRemoteInfoListHasBeenSet = false;

    Aws::Vector<PipelineInfo> m_pipelineInfoList;
    bool m_pipelineInfoListHasBeenSet = false;

    RemoteSourceCodeAnalysisServerInfo m_remoteSourceCodeAnalysisServerInfo;
    bool m_remoteSourceCodeAnalysisServerInfoHasBeenSet = false;

    Aws::Vector<VcenterBasedRemoteInfo> m_vcenterBasedRemoteInfoList;
    bool m_vcenterBasedRemoteInfoListHasBeenSet = false;

    Aws::Vector<VersionControlInfo> m_versionControlInfoList;
    bool m_versionControlInfoListHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
