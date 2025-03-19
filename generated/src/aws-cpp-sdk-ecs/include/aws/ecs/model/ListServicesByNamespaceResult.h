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
  class ListServicesByNamespaceResult
  {
  public:
    AWS_ECS_API ListServicesByNamespaceResult() = default;
    AWS_ECS_API ListServicesByNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListServicesByNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArns() const { return m_serviceArns; }
    template<typename ServiceArnsT = Aws::Vector<Aws::String>>
    void SetServiceArns(ServiceArnsT&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = std::forward<ServiceArnsT>(value); }
    template<typename ServiceArnsT = Aws::Vector<Aws::String>>
    ListServicesByNamespaceResult& WithServiceArns(ServiceArnsT&& value) { SetServiceArns(std::forward<ServiceArnsT>(value)); return *this;}
    template<typename ServiceArnsT = Aws::String>
    ListServicesByNamespaceResult& AddServiceArns(ServiceArnsT&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.emplace_back(std::forward<ServiceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServicesByNamespace</code> request. When the results of a
     * <code>ListServicesByNamespace</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. When there are no
     * more results to return, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServicesByNamespaceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServicesByNamespaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceArns;
    bool m_serviceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
