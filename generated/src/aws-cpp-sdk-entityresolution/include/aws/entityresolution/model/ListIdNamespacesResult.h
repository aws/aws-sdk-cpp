/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IdNamespaceSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListIdNamespacesResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListIdNamespacesResult() = default;
    AWS_ENTITYRESOLUTION_API ListIdNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListIdNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>IdNamespaceSummaries</code> objects.</p>
     */
    inline const Aws::Vector<IdNamespaceSummary>& GetIdNamespaceSummaries() const { return m_idNamespaceSummaries; }
    template<typename IdNamespaceSummariesT = Aws::Vector<IdNamespaceSummary>>
    void SetIdNamespaceSummaries(IdNamespaceSummariesT&& value) { m_idNamespaceSummariesHasBeenSet = true; m_idNamespaceSummaries = std::forward<IdNamespaceSummariesT>(value); }
    template<typename IdNamespaceSummariesT = Aws::Vector<IdNamespaceSummary>>
    ListIdNamespacesResult& WithIdNamespaceSummaries(IdNamespaceSummariesT&& value) { SetIdNamespaceSummaries(std::forward<IdNamespaceSummariesT>(value)); return *this;}
    template<typename IdNamespaceSummariesT = IdNamespaceSummary>
    ListIdNamespacesResult& AddIdNamespaceSummaries(IdNamespaceSummariesT&& value) { m_idNamespaceSummariesHasBeenSet = true; m_idNamespaceSummaries.emplace_back(std::forward<IdNamespaceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdNamespacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdNamespacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IdNamespaceSummary> m_idNamespaceSummaries;
    bool m_idNamespaceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
