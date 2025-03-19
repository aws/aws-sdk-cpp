/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateResourceIdentifier.h>
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
  class ListAggregateDiscoveredResourcesResult
  {
  public:
    AWS_CONFIGSERVICE_API ListAggregateDiscoveredResourcesResult() = default;
    AWS_CONFIGSERVICE_API ListAggregateDiscoveredResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListAggregateDiscoveredResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of <code>ResourceIdentifiers</code> objects.</p>
     */
    inline const Aws::Vector<AggregateResourceIdentifier>& GetResourceIdentifiers() const { return m_resourceIdentifiers; }
    template<typename ResourceIdentifiersT = Aws::Vector<AggregateResourceIdentifier>>
    void SetResourceIdentifiers(ResourceIdentifiersT&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::forward<ResourceIdentifiersT>(value); }
    template<typename ResourceIdentifiersT = Aws::Vector<AggregateResourceIdentifier>>
    ListAggregateDiscoveredResourcesResult& WithResourceIdentifiers(ResourceIdentifiersT&& value) { SetResourceIdentifiers(std::forward<ResourceIdentifiersT>(value)); return *this;}
    template<typename ResourceIdentifiersT = AggregateResourceIdentifier>
    ListAggregateDiscoveredResourcesResult& AddResourceIdentifiers(ResourceIdentifiersT&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.emplace_back(std::forward<ResourceIdentifiersT>(value)); return *this; }
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
    ListAggregateDiscoveredResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAggregateDiscoveredResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateResourceIdentifier> m_resourceIdentifiers;
    bool m_resourceIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
