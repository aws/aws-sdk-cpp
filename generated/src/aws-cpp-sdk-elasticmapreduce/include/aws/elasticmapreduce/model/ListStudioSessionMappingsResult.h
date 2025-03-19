/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/SessionMappingSummary.h>
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
namespace EMR
{
namespace Model
{
  class ListStudioSessionMappingsResult
  {
  public:
    AWS_EMR_API ListStudioSessionMappingsResult() = default;
    AWS_EMR_API ListStudioSessionMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListStudioSessionMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of session mapping summary objects. Each object includes session
     * mapping details such as creation time, identity type (user or group), and Amazon
     * EMR Studio ID.</p>
     */
    inline const Aws::Vector<SessionMappingSummary>& GetSessionMappings() const { return m_sessionMappings; }
    template<typename SessionMappingsT = Aws::Vector<SessionMappingSummary>>
    void SetSessionMappings(SessionMappingsT&& value) { m_sessionMappingsHasBeenSet = true; m_sessionMappings = std::forward<SessionMappingsT>(value); }
    template<typename SessionMappingsT = Aws::Vector<SessionMappingSummary>>
    ListStudioSessionMappingsResult& WithSessionMappings(SessionMappingsT&& value) { SetSessionMappings(std::forward<SessionMappingsT>(value)); return *this;}
    template<typename SessionMappingsT = SessionMappingSummary>
    ListStudioSessionMappingsResult& AddSessionMappings(SessionMappingsT&& value) { m_sessionMappingsHasBeenSet = true; m_sessionMappings.emplace_back(std::forward<SessionMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListStudioSessionMappingsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStudioSessionMappingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SessionMappingSummary> m_sessionMappings;
    bool m_sessionMappingsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
