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
    AWS_EKS_API Compatibility();
    AWS_EKS_API Compatibility(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Compatibility& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The supported Kubernetes version of the cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }
    inline Compatibility& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}
    inline Compatibility& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}
    inline Compatibility& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported compute platform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPlatformVersions() const{ return m_platformVersions; }
    inline bool PlatformVersionsHasBeenSet() const { return m_platformVersionsHasBeenSet; }
    inline void SetPlatformVersions(const Aws::Vector<Aws::String>& value) { m_platformVersionsHasBeenSet = true; m_platformVersions = value; }
    inline void SetPlatformVersions(Aws::Vector<Aws::String>&& value) { m_platformVersionsHasBeenSet = true; m_platformVersions = std::move(value); }
    inline Compatibility& WithPlatformVersions(const Aws::Vector<Aws::String>& value) { SetPlatformVersions(value); return *this;}
    inline Compatibility& WithPlatformVersions(Aws::Vector<Aws::String>&& value) { SetPlatformVersions(std::move(value)); return *this;}
    inline Compatibility& AddPlatformVersions(const Aws::String& value) { m_platformVersionsHasBeenSet = true; m_platformVersions.push_back(value); return *this; }
    inline Compatibility& AddPlatformVersions(Aws::String&& value) { m_platformVersionsHasBeenSet = true; m_platformVersions.push_back(std::move(value)); return *this; }
    inline Compatibility& AddPlatformVersions(const char* value) { m_platformVersionsHasBeenSet = true; m_platformVersions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported default version.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline Compatibility& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_platformVersions;
    bool m_platformVersionsHasBeenSet = false;

    bool m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
