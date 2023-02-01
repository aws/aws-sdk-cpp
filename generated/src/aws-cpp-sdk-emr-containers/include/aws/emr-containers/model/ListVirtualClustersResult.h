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


    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline const Aws::Vector<VirtualCluster>& GetVirtualClusters() const{ return m_virtualClusters; }

    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline void SetVirtualClusters(const Aws::Vector<VirtualCluster>& value) { m_virtualClusters = value; }

    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline void SetVirtualClusters(Aws::Vector<VirtualCluster>&& value) { m_virtualClusters = std::move(value); }

    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline ListVirtualClustersResult& WithVirtualClusters(const Aws::Vector<VirtualCluster>& value) { SetVirtualClusters(value); return *this;}

    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline ListVirtualClustersResult& WithVirtualClusters(Aws::Vector<VirtualCluster>&& value) { SetVirtualClusters(std::move(value)); return *this;}

    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline ListVirtualClustersResult& AddVirtualClusters(const VirtualCluster& value) { m_virtualClusters.push_back(value); return *this; }

    /**
     * <p>This output lists the specified virtual clusters.</p>
     */
    inline ListVirtualClustersResult& AddVirtualClusters(VirtualCluster&& value) { m_virtualClusters.push_back(std::move(value)); return *this; }


    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline ListVirtualClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline ListVirtualClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>This output displays the token for the next set of virtual clusters.</p>
     */
    inline ListVirtualClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VirtualCluster> m_virtualClusters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
