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
  class AWS_EKS_API Logging
  {
  public:
    Logging();
    Logging(Aws::Utils::Json::JsonView jsonValue);
    Logging& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_clusterLoggingHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
