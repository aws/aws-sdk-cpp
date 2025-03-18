/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EndpointProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListEndpointsResult
  {
  public:
    AWS_COMPREHEND_API ListEndpointsResult() = default;
    AWS_COMPREHEND_API ListEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Displays a list of endpoint properties being retrieved by the service in
     * response to the request.</p>
     */
    inline const Aws::Vector<EndpointProperties>& GetEndpointPropertiesList() const { return m_endpointPropertiesList; }
    template<typename EndpointPropertiesListT = Aws::Vector<EndpointProperties>>
    void SetEndpointPropertiesList(EndpointPropertiesListT&& value) { m_endpointPropertiesListHasBeenSet = true; m_endpointPropertiesList = std::forward<EndpointPropertiesListT>(value); }
    template<typename EndpointPropertiesListT = Aws::Vector<EndpointProperties>>
    ListEndpointsResult& WithEndpointPropertiesList(EndpointPropertiesListT&& value) { SetEndpointPropertiesList(std::forward<EndpointPropertiesListT>(value)); return *this;}
    template<typename EndpointPropertiesListT = EndpointProperties>
    ListEndpointsResult& AddEndpointPropertiesList(EndpointPropertiesListT&& value) { m_endpointPropertiesListHasBeenSet = true; m_endpointPropertiesList.emplace_back(std::forward<EndpointPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EndpointProperties> m_endpointPropertiesList;
    bool m_endpointPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
