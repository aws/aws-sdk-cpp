/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>Namespace inputs for the system job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/SecureNamespaceInfo">AWS
   * API Reference</a></p>
   */
  class SecureNamespaceInfo
  {
  public:
    AWS_EMRCONTAINERS_API SecureNamespaceInfo();
    AWS_EMRCONTAINERS_API SecureNamespaceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API SecureNamespaceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon EKS cluster where Amazon EMR on EKS jobs run.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline SecureNamespaceInfo& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline SecureNamespaceInfo& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline SecureNamespaceInfo& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the Amazon EKS cluster where the system jobs run.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline SecureNamespaceInfo& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline SecureNamespaceInfo& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline SecureNamespaceInfo& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
