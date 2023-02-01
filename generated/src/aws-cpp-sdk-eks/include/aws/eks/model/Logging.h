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
    AWS_EKS_API Logging();
    AWS_EKS_API Logging(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Logging& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline const Aws::Vector<LogSetup>& GetClusterLogging() const{ return m_clusterLogging; }

    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline bool ClusterLoggingHasBeenSet() const { return m_clusterLoggingHasBeenSet; }

    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline void SetClusterLogging(const Aws::Vector<LogSetup>& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging = value; }

    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline void SetClusterLogging(Aws::Vector<LogSetup>&& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging = std::move(value); }

    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline Logging& WithClusterLogging(const Aws::Vector<LogSetup>& value) { SetClusterLogging(value); return *this;}

    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline Logging& WithClusterLogging(Aws::Vector<LogSetup>&& value) { SetClusterLogging(std::move(value)); return *this;}

    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline Logging& AddClusterLogging(const LogSetup& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging.push_back(value); return *this; }

    /**
     * <p>The cluster control plane logging configuration for your cluster.</p>
     */
    inline Logging& AddClusterLogging(LogSetup&& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LogSetup> m_clusterLogging;
    bool m_clusterLoggingHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
