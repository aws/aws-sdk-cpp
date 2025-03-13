/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/TargetResourceTypeSummary.h>
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
namespace FIS
{
namespace Model
{
  class ListTargetResourceTypesResult
  {
  public:
    AWS_FIS_API ListTargetResourceTypesResult() = default;
    AWS_FIS_API ListTargetResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListTargetResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The target resource types.</p>
     */
    inline const Aws::Vector<TargetResourceTypeSummary>& GetTargetResourceTypes() const { return m_targetResourceTypes; }
    template<typename TargetResourceTypesT = Aws::Vector<TargetResourceTypeSummary>>
    void SetTargetResourceTypes(TargetResourceTypesT&& value) { m_targetResourceTypesHasBeenSet = true; m_targetResourceTypes = std::forward<TargetResourceTypesT>(value); }
    template<typename TargetResourceTypesT = Aws::Vector<TargetResourceTypeSummary>>
    ListTargetResourceTypesResult& WithTargetResourceTypes(TargetResourceTypesT&& value) { SetTargetResourceTypes(std::forward<TargetResourceTypesT>(value)); return *this;}
    template<typename TargetResourceTypesT = TargetResourceTypeSummary>
    ListTargetResourceTypesResult& AddTargetResourceTypes(TargetResourceTypesT&& value) { m_targetResourceTypesHasBeenSet = true; m_targetResourceTypes.emplace_back(std::forward<TargetResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTargetResourceTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTargetResourceTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TargetResourceTypeSummary> m_targetResourceTypes;
    bool m_targetResourceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
