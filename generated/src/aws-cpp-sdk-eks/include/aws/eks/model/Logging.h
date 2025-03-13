/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/LogSetup.h>
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
   * <p>An object representing the logging configuration for resources in your
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Logging">AWS API
   * Reference</a></p>
   */
  class Logging
  {
  public:
    AWS_EKS_API Logging() = default;
    AWS_EKS_API Logging(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Logging& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline const Aws::Vector<LogSetup>& GetClusterLogging() const { return m_clusterLogging; }
    inline bool ClusterLoggingHasBeenSet() const { return m_clusterLoggingHasBeenSet; }
    template<typename ClusterLoggingT = Aws::Vector<LogSetup>>
    void SetClusterLogging(ClusterLoggingT&& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging = std::forward<ClusterLoggingT>(value); }
    template<typename ClusterLoggingT = Aws::Vector<LogSetup>>
    Logging& WithClusterLogging(ClusterLoggingT&& value) { SetClusterLogging(std::forward<ClusterLoggingT>(value)); return *this;}
    template<typename ClusterLoggingT = LogSetup>
    Logging& AddClusterLogging(ClusterLoggingT&& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging.emplace_back(std::forward<ClusterLoggingT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LogSetup> m_clusterLogging;
    bool m_clusterLoggingHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
