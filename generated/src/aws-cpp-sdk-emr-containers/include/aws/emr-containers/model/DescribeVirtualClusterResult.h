/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/VirtualCluster.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMRContainers
{
namespace Model
{
  class DescribeVirtualClusterResult
  {
  public:
    AWS_EMRCONTAINERS_API DescribeVirtualClusterResult();
    AWS_EMRCONTAINERS_API DescribeVirtualClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DescribeVirtualClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This output displays information about the specified virtual cluster.</p>
     */
    inline const VirtualCluster& GetVirtualCluster() const{ return m_virtualCluster; }

    /**
     * <p>This output displays information about the specified virtual cluster.</p>
     */
    inline void SetVirtualCluster(const VirtualCluster& value) { m_virtualCluster = value; }

    /**
     * <p>This output displays information about the specified virtual cluster.</p>
     */
    inline void SetVirtualCluster(VirtualCluster&& value) { m_virtualCluster = std::move(value); }

    /**
     * <p>This output displays information about the specified virtual cluster.</p>
     */
    inline DescribeVirtualClusterResult& WithVirtualCluster(const VirtualCluster& value) { SetVirtualCluster(value); return *this;}

    /**
     * <p>This output displays information about the specified virtual cluster.</p>
     */
    inline DescribeVirtualClusterResult& WithVirtualCluster(VirtualCluster&& value) { SetVirtualCluster(std::move(value)); return *this;}

  private:

    VirtualCluster m_virtualCluster;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
