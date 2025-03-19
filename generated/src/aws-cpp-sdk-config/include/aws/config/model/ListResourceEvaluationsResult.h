/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ResourceEvaluation.h>
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
namespace ConfigService
{
namespace Model
{
  class ListResourceEvaluationsResult
  {
  public:
    AWS_CONFIGSERVICE_API ListResourceEvaluationsResult() = default;
    AWS_CONFIGSERVICE_API ListResourceEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListResourceEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a <code>ResourceEvaluations</code> object.</p>
     */
    inline const Aws::Vector<ResourceEvaluation>& GetResourceEvaluations() const { return m_resourceEvaluations; }
    template<typename ResourceEvaluationsT = Aws::Vector<ResourceEvaluation>>
    void SetResourceEvaluations(ResourceEvaluationsT&& value) { m_resourceEvaluationsHasBeenSet = true; m_resourceEvaluations = std::forward<ResourceEvaluationsT>(value); }
    template<typename ResourceEvaluationsT = Aws::Vector<ResourceEvaluation>>
    ListResourceEvaluationsResult& WithResourceEvaluations(ResourceEvaluationsT&& value) { SetResourceEvaluations(std::forward<ResourceEvaluationsT>(value)); return *this;}
    template<typename ResourceEvaluationsT = ResourceEvaluation>
    ListResourceEvaluationsResult& AddResourceEvaluations(ResourceEvaluationsT&& value) { m_resourceEvaluationsHasBeenSet = true; m_resourceEvaluations.emplace_back(std::forward<ResourceEvaluationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceEvaluationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceEvaluationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceEvaluation> m_resourceEvaluations;
    bool m_resourceEvaluationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
