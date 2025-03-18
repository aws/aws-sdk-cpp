/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/ClusterVersionStatus.h>
#include <aws/eks/model/VersionStatus.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Contains details about a specific EKS cluster version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ClusterVersionInformation">AWS
   * API Reference</a></p>
   */
  class ClusterVersionInformation
  {
  public:
    AWS_EKS_API ClusterVersionInformation() = default;
    AWS_EKS_API ClusterVersionInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ClusterVersionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Kubernetes version for the cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const { return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    template<typename ClusterVersionT = Aws::String>
    void SetClusterVersion(ClusterVersionT&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::forward<ClusterVersionT>(value); }
    template<typename ClusterVersionT = Aws::String>
    ClusterVersionInformation& WithClusterVersion(ClusterVersionT&& value) { SetClusterVersion(std::forward<ClusterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cluster this version is for.</p>
     */
    inline const Aws::String& GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    template<typename ClusterTypeT = Aws::String>
    void SetClusterType(ClusterTypeT&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::forward<ClusterTypeT>(value); }
    template<typename ClusterTypeT = Aws::String>
    ClusterVersionInformation& WithClusterType(ClusterTypeT&& value) { SetClusterType(std::forward<ClusterTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default platform version for this Kubernetes version.</p>
     */
    inline const Aws::String& GetDefaultPlatformVersion() const { return m_defaultPlatformVersion; }
    inline bool DefaultPlatformVersionHasBeenSet() const { return m_defaultPlatformVersionHasBeenSet; }
    template<typename DefaultPlatformVersionT = Aws::String>
    void SetDefaultPlatformVersion(DefaultPlatformVersionT&& value) { m_defaultPlatformVersionHasBeenSet = true; m_defaultPlatformVersion = std::forward<DefaultPlatformVersionT>(value); }
    template<typename DefaultPlatformVersionT = Aws::String>
    ClusterVersionInformation& WithDefaultPlatformVersion(DefaultPlatformVersionT&& value) { SetDefaultPlatformVersion(std::forward<DefaultPlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if this is a default version.</p>
     */
    inline bool GetDefaultVersion() const { return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline ClusterVersionInformation& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release date of this cluster version.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const { return m_releaseDate; }
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
    template<typename ReleaseDateT = Aws::Utils::DateTime>
    void SetReleaseDate(ReleaseDateT&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::forward<ReleaseDateT>(value); }
    template<typename ReleaseDateT = Aws::Utils::DateTime>
    ClusterVersionInformation& WithReleaseDate(ReleaseDateT&& value) { SetReleaseDate(std::forward<ReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when standard support ends for this version.</p>
     */
    inline const Aws::Utils::DateTime& GetEndOfStandardSupportDate() const { return m_endOfStandardSupportDate; }
    inline bool EndOfStandardSupportDateHasBeenSet() const { return m_endOfStandardSupportDateHasBeenSet; }
    template<typename EndOfStandardSupportDateT = Aws::Utils::DateTime>
    void SetEndOfStandardSupportDate(EndOfStandardSupportDateT&& value) { m_endOfStandardSupportDateHasBeenSet = true; m_endOfStandardSupportDate = std::forward<EndOfStandardSupportDateT>(value); }
    template<typename EndOfStandardSupportDateT = Aws::Utils::DateTime>
    ClusterVersionInformation& WithEndOfStandardSupportDate(EndOfStandardSupportDateT&& value) { SetEndOfStandardSupportDate(std::forward<EndOfStandardSupportDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when extended support ends for this version.</p>
     */
    inline const Aws::Utils::DateTime& GetEndOfExtendedSupportDate() const { return m_endOfExtendedSupportDate; }
    inline bool EndOfExtendedSupportDateHasBeenSet() const { return m_endOfExtendedSupportDateHasBeenSet; }
    template<typename EndOfExtendedSupportDateT = Aws::Utils::DateTime>
    void SetEndOfExtendedSupportDate(EndOfExtendedSupportDateT&& value) { m_endOfExtendedSupportDateHasBeenSet = true; m_endOfExtendedSupportDate = std::forward<EndOfExtendedSupportDateT>(value); }
    template<typename EndOfExtendedSupportDateT = Aws::Utils::DateTime>
    ClusterVersionInformation& WithEndOfExtendedSupportDate(EndOfExtendedSupportDateT&& value) { SetEndOfExtendedSupportDate(std::forward<EndOfExtendedSupportDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This field is deprecated. Use <code>versionStatus</code> instead,
     * as that field matches for input and output of this action.</p> 
     * <p>Current status of this cluster version.</p>
     */
    inline ClusterVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ClusterVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ClusterVersionInformation& WithStatus(ClusterVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of this cluster version.</p>
     */
    inline VersionStatus GetVersionStatus() const { return m_versionStatus; }
    inline bool VersionStatusHasBeenSet() const { return m_versionStatusHasBeenSet; }
    inline void SetVersionStatus(VersionStatus value) { m_versionStatusHasBeenSet = true; m_versionStatus = value; }
    inline ClusterVersionInformation& WithVersionStatus(VersionStatus value) { SetVersionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patch version of Kubernetes for this cluster version.</p>
     */
    inline const Aws::String& GetKubernetesPatchVersion() const { return m_kubernetesPatchVersion; }
    inline bool KubernetesPatchVersionHasBeenSet() const { return m_kubernetesPatchVersionHasBeenSet; }
    template<typename KubernetesPatchVersionT = Aws::String>
    void SetKubernetesPatchVersion(KubernetesPatchVersionT&& value) { m_kubernetesPatchVersionHasBeenSet = true; m_kubernetesPatchVersion = std::forward<KubernetesPatchVersionT>(value); }
    template<typename KubernetesPatchVersionT = Aws::String>
    ClusterVersionInformation& WithKubernetesPatchVersion(KubernetesPatchVersionT&& value) { SetKubernetesPatchVersion(std::forward<KubernetesPatchVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_defaultPlatformVersion;
    bool m_defaultPlatformVersionHasBeenSet = false;

    bool m_defaultVersion{false};
    bool m_defaultVersionHasBeenSet = false;

    Aws::Utils::DateTime m_releaseDate{};
    bool m_releaseDateHasBeenSet = false;

    Aws::Utils::DateTime m_endOfStandardSupportDate{};
    bool m_endOfStandardSupportDateHasBeenSet = false;

    Aws::Utils::DateTime m_endOfExtendedSupportDate{};
    bool m_endOfExtendedSupportDateHasBeenSet = false;

    ClusterVersionStatus m_status{ClusterVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    VersionStatus m_versionStatus{VersionStatus::NOT_SET};
    bool m_versionStatusHasBeenSet = false;

    Aws::String m_kubernetesPatchVersion;
    bool m_kubernetesPatchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
