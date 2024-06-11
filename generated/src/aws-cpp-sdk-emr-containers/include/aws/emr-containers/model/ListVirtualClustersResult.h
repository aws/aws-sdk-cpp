/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListVirtualClustersResult
  {
  public:
    AWS_EMRCONTAINERS_API ListVirtualClustersResult();
    AWS_EMRCONTAINERS_API ListVirtualClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API ListVirtualClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline const Aws::Vector<VirtualCluster>& GetVirtualClusters() const{ return m_virtualClusters; }
    inline void SetVirtualClusters(const Aws::Vector<VirtualCluster>& value) { m_virtualClusters = value; }
    inline void SetVirtualClusters(Aws::Vector<VirtualCluster>&& value) { m_virtualClusters = std::move(value); }
    inline ListVirtualClustersResult& WithVirtualClusters(const Aws::Vector<VirtualCluster>& value) { SetVirtualClusters(value); return *this;}
    inline ListVirtualClustersResult& WithVirtualClusters(Aws::Vector<VirtualCluster>&& value) { SetVirtualClusters(std::move(value)); return *this;}
    inline ListVirtualClustersResult& AddVirtualClusters(const VirtualCluster& value) { m_virtualClusters.push_back(value); return *this; }
    inline ListVirtualClustersResult& AddVirtualClusters(VirtualCluster&& value) { m_virtualClusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListVirtualClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVirtualClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVirtualClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVirtualClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVirtualClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVirtualClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VirtualCluster> m_virtualClusters;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
