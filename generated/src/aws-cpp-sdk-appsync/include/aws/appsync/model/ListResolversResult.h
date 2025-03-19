/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/Resolver.h>
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
namespace AppSync
{
namespace Model
{
  class ListResolversResult
  {
  public:
    AWS_APPSYNC_API ListResolversResult() = default;
    AWS_APPSYNC_API ListResolversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListResolversResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline const Aws::Vector<Resolver>& GetResolvers() const { return m_resolvers; }
    template<typename ResolversT = Aws::Vector<Resolver>>
    void SetResolvers(ResolversT&& value) { m_resolversHasBeenSet = true; m_resolvers = std::forward<ResolversT>(value); }
    template<typename ResolversT = Aws::Vector<Resolver>>
    ListResolversResult& WithResolvers(ResolversT&& value) { SetResolvers(std::forward<ResolversT>(value)); return *this;}
    template<typename ResolversT = Resolver>
    ListResolversResult& AddResolvers(ResolversT&& value) { m_resolversHasBeenSet = true; m_resolvers.emplace_back(std::forward<ResolversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolversResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResolversResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Resolver> m_resolvers;
    bool m_resolversHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
