/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/ClusterVersionStatus.h>
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
    AWS_EKS_API ClusterVersionInformation();
    AWS_EKS_API ClusterVersionInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ClusterVersionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Kubernetes version for the cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }
    inline ClusterVersionInformation& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}
    inline ClusterVersionInformation& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}
    inline ClusterVersionInformation& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cluster this version is for.</p>
     */
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }
    inline ClusterVersionInformation& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}
    inline ClusterVersionInformation& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}
    inline ClusterVersionInformation& WithClusterType(const char* value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default platform version for this Kubernetes version.</p>
     */
    inline const Aws::String& GetDefaultPlatformVersion() const{ return m_defaultPlatformVersion; }
    inline bool DefaultPlatformVersionHasBeenSet() const { return m_defaultPlatformVersionHasBeenSet; }
    inline void SetDefaultPlatformVersion(const Aws::String& value) { m_defaultPlatformVersionHasBeenSet = true; m_defaultPlatformVersion = value; }
    inline void SetDefaultPlatformVersion(Aws::String&& value) { m_defaultPlatformVersionHasBeenSet = true; m_defaultPlatformVersion = std::move(value); }
    inline void SetDefaultPlatformVersion(const char* value) { m_defaultPlatformVersionHasBeenSet = true; m_defaultPlatformVersion.assign(value); }
    inline ClusterVersionInformation& WithDefaultPlatformVersion(const Aws::String& value) { SetDefaultPlatformVersion(value); return *this;}
    inline ClusterVersionInformation& WithDefaultPlatformVersion(Aws::String&& value) { SetDefaultPlatformVersion(std::move(value)); return *this;}
    inline ClusterVersionInformation& WithDefaultPlatformVersion(const char* value) { SetDefaultPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if this is a default version.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline ClusterVersionInformation& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release date of this cluster version.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const{ return m_releaseDate; }
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
    inline void SetReleaseDate(const Aws::Utils::DateTime& value) { m_releaseDateHasBeenSet = true; m_releaseDate = value; }
    inline void SetReleaseDate(Aws::Utils::DateTime&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::move(value); }
    inline ClusterVersionInformation& WithReleaseDate(const Aws::Utils::DateTime& value) { SetReleaseDate(value); return *this;}
    inline ClusterVersionInformation& WithReleaseDate(Aws::Utils::DateTime&& value) { SetReleaseDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when standard support ends for this version.</p>
     */
    inline const Aws::Utils::DateTime& GetEndOfStandardSupportDate() const{ return m_endOfStandardSupportDate; }
    inline bool EndOfStandardSupportDateHasBeenSet() const { return m_endOfStandardSupportDateHasBeenSet; }
    inline void SetEndOfStandardSupportDate(const Aws::Utils::DateTime& value) { m_endOfStandardSupportDateHasBeenSet = true; m_endOfStandardSupportDate = value; }
    inline void SetEndOfStandardSupportDate(Aws::Utils::DateTime&& value) { m_endOfStandardSupportDateHasBeenSet = true; m_endOfStandardSupportDate = std::move(value); }
    inline ClusterVersionInformation& WithEndOfStandardSupportDate(const Aws::Utils::DateTime& value) { SetEndOfStandardSupportDate(value); return *this;}
    inline ClusterVersionInformation& WithEndOfStandardSupportDate(Aws::Utils::DateTime&& value) { SetEndOfStandardSupportDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when extended support ends for this version.</p>
     */
    inline const Aws::Utils::DateTime& GetEndOfExtendedSupportDate() const{ return m_endOfExtendedSupportDate; }
    inline bool EndOfExtendedSupportDateHasBeenSet() const { return m_endOfExtendedSupportDateHasBeenSet; }
    inline void SetEndOfExtendedSupportDate(const Aws::Utils::DateTime& value) { m_endOfExtendedSupportDateHasBeenSet = true; m_endOfExtendedSupportDate = value; }
    inline void SetEndOfExtendedSupportDate(Aws::Utils::DateTime&& value) { m_endOfExtendedSupportDateHasBeenSet = true; m_endOfExtendedSupportDate = std::move(value); }
    inline ClusterVersionInformation& WithEndOfExtendedSupportDate(const Aws::Utils::DateTime& value) { SetEndOfExtendedSupportDate(value); return *this;}
    inline ClusterVersionInformation& WithEndOfExtendedSupportDate(Aws::Utils::DateTime&& value) { SetEndOfExtendedSupportDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of this cluster version.</p>
     */
    inline const ClusterVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClusterVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClusterVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClusterVersionInformation& WithStatus(const ClusterVersionStatus& value) { SetStatus(value); return *this;}
    inline ClusterVersionInformation& WithStatus(ClusterVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patch version of Kubernetes for this cluster version.</p>
     */
    inline const Aws::String& GetKubernetesPatchVersion() const{ return m_kubernetesPatchVersion; }
    inline bool KubernetesPatchVersionHasBeenSet() const { return m_kubernetesPatchVersionHasBeenSet; }
    inline void SetKubernetesPatchVersion(const Aws::String& value) { m_kubernetesPatchVersionHasBeenSet = true; m_kubernetesPatchVersion = value; }
    inline void SetKubernetesPatchVersion(Aws::String&& value) { m_kubernetesPatchVersionHasBeenSet = true; m_kubernetesPatchVersion = std::move(value); }
    inline void SetKubernetesPatchVersion(const char* value) { m_kubernetesPatchVersionHasBeenSet = true; m_kubernetesPatchVersion.assign(value); }
    inline ClusterVersionInformation& WithKubernetesPatchVersion(const Aws::String& value) { SetKubernetesPatchVersion(value); return *this;}
    inline ClusterVersionInformation& WithKubernetesPatchVersion(Aws::String&& value) { SetKubernetesPatchVersion(std::move(value)); return *this;}
    inline ClusterVersionInformation& WithKubernetesPatchVersion(const char* value) { SetKubernetesPatchVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_defaultPlatformVersion;
    bool m_defaultPlatformVersionHasBeenSet = false;

    bool m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;

    Aws::Utils::DateTime m_releaseDate;
    bool m_releaseDateHasBeenSet = false;

    Aws::Utils::DateTime m_endOfStandardSupportDate;
    bool m_endOfStandardSupportDateHasBeenSet = false;

    Aws::Utils::DateTime m_endOfExtendedSupportDate;
    bool m_endOfExtendedSupportDateHasBeenSet = false;

    ClusterVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_kubernetesPatchVersion;
    bool m_kubernetesPatchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
