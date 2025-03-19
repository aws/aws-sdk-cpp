/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/BulkDeployment.h>
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
namespace Greengrass
{
namespace Model
{
  class ListBulkDeploymentsResult
  {
  public:
    AWS_GREENGRASS_API ListBulkDeploymentsResult() = default;
    AWS_GREENGRASS_API ListBulkDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListBulkDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of bulk deployments.
     */
    inline const Aws::Vector<BulkDeployment>& GetBulkDeployments() const { return m_bulkDeployments; }
    template<typename BulkDeploymentsT = Aws::Vector<BulkDeployment>>
    void SetBulkDeployments(BulkDeploymentsT&& value) { m_bulkDeploymentsHasBeenSet = true; m_bulkDeployments = std::forward<BulkDeploymentsT>(value); }
    template<typename BulkDeploymentsT = Aws::Vector<BulkDeployment>>
    ListBulkDeploymentsResult& WithBulkDeployments(BulkDeploymentsT&& value) { SetBulkDeployments(std::forward<BulkDeploymentsT>(value)); return *this;}
    template<typename BulkDeploymentsT = BulkDeployment>
    ListBulkDeploymentsResult& AddBulkDeployments(BulkDeploymentsT&& value) { m_bulkDeploymentsHasBeenSet = true; m_bulkDeployments.emplace_back(std::forward<BulkDeploymentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBulkDeploymentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBulkDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BulkDeployment> m_bulkDeployments;
    bool m_bulkDeploymentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
