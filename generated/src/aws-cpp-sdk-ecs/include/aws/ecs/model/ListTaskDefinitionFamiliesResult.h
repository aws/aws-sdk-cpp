/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ECS
{
namespace Model
{
  class ListTaskDefinitionFamiliesResult
  {
  public:
    AWS_ECS_API ListTaskDefinitionFamiliesResult() = default;
    AWS_ECS_API ListTaskDefinitionFamiliesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListTaskDefinitionFamiliesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of task definition family names that match the
     * <code>ListTaskDefinitionFamilies</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFamilies() const { return m_families; }
    template<typename FamiliesT = Aws::Vector<Aws::String>>
    void SetFamilies(FamiliesT&& value) { m_familiesHasBeenSet = true; m_families = std::forward<FamiliesT>(value); }
    template<typename FamiliesT = Aws::Vector<Aws::String>>
    ListTaskDefinitionFamiliesResult& WithFamilies(FamiliesT&& value) { SetFamilies(std::forward<FamiliesT>(value)); return *this;}
    template<typename FamiliesT = Aws::String>
    ListTaskDefinitionFamiliesResult& AddFamilies(FamiliesT&& value) { m_familiesHasBeenSet = true; m_families.emplace_back(std::forward<FamiliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitionFamilies</code> request. When the results of a
     * <code>ListTaskDefinitionFamilies</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTaskDefinitionFamiliesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTaskDefinitionFamiliesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_families;
    bool m_familiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
