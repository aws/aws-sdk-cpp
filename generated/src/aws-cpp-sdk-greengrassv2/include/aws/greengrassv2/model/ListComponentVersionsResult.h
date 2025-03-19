/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/ComponentVersionListItem.h>
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
  class ListComponentVersionsResult
  {
  public:
    AWS_GREENGRASSV2_API ListComponentVersionsResult() = default;
    AWS_GREENGRASSV2_API ListComponentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListComponentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of versions that exist for the component.</p>
     */
    inline const Aws::Vector<ComponentVersionListItem>& GetComponentVersions() const { return m_componentVersions; }
    template<typename ComponentVersionsT = Aws::Vector<ComponentVersionListItem>>
    void SetComponentVersions(ComponentVersionsT&& value) { m_componentVersionsHasBeenSet = true; m_componentVersions = std::forward<ComponentVersionsT>(value); }
    template<typename ComponentVersionsT = Aws::Vector<ComponentVersionListItem>>
    ListComponentVersionsResult& WithComponentVersions(ComponentVersionsT&& value) { SetComponentVersions(std::forward<ComponentVersionsT>(value)); return *this;}
    template<typename ComponentVersionsT = ComponentVersionListItem>
    ListComponentVersionsResult& AddComponentVersions(ComponentVersionsT&& value) { m_componentVersionsHasBeenSet = true; m_componentVersions.emplace_back(std::forward<ComponentVersionsT>(value)); return *this; }
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
    ListComponentVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComponentVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComponentVersionListItem> m_componentVersions;
    bool m_componentVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
