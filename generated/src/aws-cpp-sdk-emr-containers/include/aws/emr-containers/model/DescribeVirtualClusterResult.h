/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/VirtualCluster.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeVirtualClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeVirtualClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeVirtualClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VirtualCluster m_virtualCluster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
