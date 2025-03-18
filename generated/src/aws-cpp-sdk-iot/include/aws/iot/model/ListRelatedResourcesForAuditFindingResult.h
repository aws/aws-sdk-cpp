/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/RelatedResource.h>
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
namespace IoT
{
namespace Model
{
  class ListRelatedResourcesForAuditFindingResult
  {
  public:
    AWS_IOT_API ListRelatedResourcesForAuditFindingResult() = default;
    AWS_IOT_API ListRelatedResourcesForAuditFindingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListRelatedResourcesForAuditFindingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The related resources.</p>
     */
    inline const Aws::Vector<RelatedResource>& GetRelatedResources() const { return m_relatedResources; }
    template<typename RelatedResourcesT = Aws::Vector<RelatedResource>>
    void SetRelatedResources(RelatedResourcesT&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = std::forward<RelatedResourcesT>(value); }
    template<typename RelatedResourcesT = Aws::Vector<RelatedResource>>
    ListRelatedResourcesForAuditFindingResult& WithRelatedResources(RelatedResourcesT&& value) { SetRelatedResources(std::forward<RelatedResourcesT>(value)); return *this;}
    template<typename RelatedResourcesT = RelatedResource>
    ListRelatedResourcesForAuditFindingResult& AddRelatedResources(RelatedResourcesT&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.emplace_back(std::forward<RelatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> for the first API call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRelatedResourcesForAuditFindingResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRelatedResourcesForAuditFindingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RelatedResource> m_relatedResources;
    bool m_relatedResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
