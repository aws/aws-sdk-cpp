/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/EffectiveDeployment.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ListEffectiveDeploymentsResult
  {
  public:
    AWS_GREENGRASSV2_API ListEffectiveDeploymentsResult() = default;
    AWS_GREENGRASSV2_API ListEffectiveDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListEffectiveDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each deployment on the core device.</p>
     */
    inline const Aws::Vector<EffectiveDeployment>& GetEffectiveDeployments() const { return m_effectiveDeployments; }
    template<typename EffectiveDeploymentsT = Aws::Vector<EffectiveDeployment>>
    void SetEffectiveDeployments(EffectiveDeploymentsT&& value) { m_effectiveDeploymentsHasBeenSet = true; m_effectiveDeployments = std::forward<EffectiveDeploymentsT>(value); }
    template<typename EffectiveDeploymentsT = Aws::Vector<EffectiveDeployment>>
    ListEffectiveDeploymentsResult& WithEffectiveDeployments(EffectiveDeploymentsT&& value) { SetEffectiveDeployments(std::forward<EffectiveDeploymentsT>(value)); return *this;}
    template<typename EffectiveDeploymentsT = EffectiveDeployment>
    ListEffectiveDeploymentsResult& AddEffectiveDeployments(EffectiveDeploymentsT&& value) { m_effectiveDeploymentsHasBeenSet = true; m_effectiveDeployments.emplace_back(std::forward<EffectiveDeploymentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEffectiveDeploymentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEffectiveDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EffectiveDeployment> m_effectiveDeployments;
    bool m_effectiveDeploymentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
