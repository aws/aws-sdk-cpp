/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Compatibility information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Compatibility">AWS
   * API Reference</a></p>
   */
  class Compatibility
  {
  public:
    AWS_EKS_API Compatibility() = default;
    AWS_EKS_API Compatibility(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Compatibility& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The supported Kubernetes version of the cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const { return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    template<typename ClusterVersionT = Aws::String>
    void SetClusterVersion(ClusterVersionT&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::forward<ClusterVersionT>(value); }
    template<typename ClusterVersionT = Aws::String>
    Compatibility& WithClusterVersion(ClusterVersionT&& value) { SetClusterVersion(std::forward<ClusterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported compute platform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPlatformVersions() const { return m_platformVersions; }
    inline bool PlatformVersionsHasBeenSet() const { return m_platformVersionsHasBeenSet; }
    template<typename PlatformVersionsT = Aws::Vector<Aws::String>>
    void SetPlatformVersions(PlatformVersionsT&& value) { m_platformVersionsHasBeenSet = true; m_platformVersions = std::forward<PlatformVersionsT>(value); }
    template<typename PlatformVersionsT = Aws::Vector<Aws::String>>
    Compatibility& WithPlatformVersions(PlatformVersionsT&& value) { SetPlatformVersions(std::forward<PlatformVersionsT>(value)); return *this;}
    template<typename PlatformVersionsT = Aws::String>
    Compatibility& AddPlatformVersions(PlatformVersionsT&& value) { m_platformVersionsHasBeenSet = true; m_platformVersions.emplace_back(std::forward<PlatformVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported default version.</p>
     */
    inline bool GetDefaultVersion() const { return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline Compatibility& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_platformVersions;
    bool m_platformVersionsHasBeenSet = false;

    bool m_defaultVersion{false};
    bool m_defaultVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
